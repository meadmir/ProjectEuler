#ifndef MATRIX
#define MATRIX

unsigned **create_matrix(unsigned m, unsigned n);
unsigned **zero_matrix(unsigned m, unsigned n);
unsigned **spiral_matrix(unsigned dim);
unsigned *spiral_matrix_diag_elements(unsigned dim);
void delete_matrix(unsigned **matrix, unsigned m);
void print_matrix(unsigned **matrix, unsigned m, unsigned n);

#endif
