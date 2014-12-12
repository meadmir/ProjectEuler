#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
#include "helper.h"

#define square(a) (a * a)

unsigned **create_matrix(unsigned m, unsigned n)
{
    unsigned **matrix = (unsigned**)malloc(m * sizeof(unsigned*));
    for (unsigned i = 0; i < m; i++)
        matrix[i] = (unsigned*)malloc(n * sizeof(unsigned));
    return matrix;
}

unsigned **zero_matrix(unsigned m, unsigned n)
{
    unsigned **matrix = create_matrix(m, n);
    for (unsigned r = 0; r < m; ++r)
        for (unsigned c = 0; c < n; ++c)
            matrix[r][c] = 0;
    return matrix;
}

unsigned **spiral_matrix(unsigned dim)
{
    unsigned **matrix = zero_matrix(dim, dim);

    // starting row and col
    unsigned row = dim >> 1, col = dim >> 1;

    matrix[row][col] = 1;
    matrix[row][++col] = 2;
    matrix[--row][col] = 3;

    unsigned move_distances[4];
    unsigned a_min;

    unsigned v = 4;
    while (v <= square(dim))
    {
        // NORTH
        if (row > 0)
        {
            if (matrix[row - 1][col] == 0)
                move_distances[0] = square(abs_diff(dim >> 1, row - 1)) + square(abs_diff(dim >> 1, col));
            else
                move_distances[0] = -1;
        }
        else
            move_distances[0] = -1;

        // EAST
        if (col + 1 < dim)
        {
            if (matrix[row][col + 1] == 0)
                move_distances[1] = square(abs_diff(dim >> 1, row)) + square(abs_diff(dim >> 1,col + 1));
            else
                move_distances[1] = -1;
        }
        else
            move_distances[1] = -1;

        // SOUTH
        if (row + 1 < dim)
        {
            if (matrix[row + 1][col] == 0)
                move_distances[2] = square(abs_diff(dim >> 1, row + 1)) + square(abs_diff(dim >> 1, col));
            else
                move_distances[2] = -1;
        }
        else
            move_distances[2] = -1;

        // WEST
        if (col > 0)
        {
            if (matrix[row][col - 1] == 0)
                move_distances[3] = square(abs_diff(dim >> 1, row)) + square(abs_diff(dim >> 1, col - 1));
            else
                move_distances[3] = -1;
        }
        else
            move_distances[3] = -1;

        a_min = arg_min(move_distances);

        switch (a_min)
        {
        case 0:
            --row;
            break;
        case 1:
            ++col;
            break;
        case 2:
            ++row;
            break;
        case 3:
            --col;
            break;
        default:
            break;
        }
        matrix[row][col] = v;
        ++v;
    }
    return matrix;
}

unsigned *spiral_matrix_diag_elements(unsigned dim)
{
    unsigned *elements = malloc(((dim << 1) - 1) * sizeof(unsigned));
    elements[0] = 1;
    unsigned index = 1, k = 2;

    while(1)
    {
        for (unsigned i = 0; i < 4; ++i)
        {
            elements[index] = elements[index - 1] + k;
            ++index;
            if (index == (dim << 1) - 1)
                return elements;
        }
        k += 2;
    }
}

void delete_matrix(unsigned **matrix, unsigned m)
{
    for (unsigned i = 0; i < m; i++)
        free(matrix[i]);
    free(matrix);
}

void print_matrix(unsigned **matrix, unsigned m, unsigned n)
{
    for (unsigned x = 0; x < m; ++x)
    {
        for (unsigned y = 0; y < n; ++y)
            printf("%3d ", matrix[x][y]);
        printf("\n");
    }
}
