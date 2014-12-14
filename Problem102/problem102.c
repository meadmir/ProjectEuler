#include <stdio.h>
#include <stdlib.h>
#include "../Share/helper.h"

char* problem102(void)
{
	FILE *fp;
	int x_a, x_b, x_c;
	int y_a, y_b, y_c;

	float n_a, n_b, n_c;
	float k_a, k_b, k_c;

	int inner = 0;

	if( (fp = fopen("../Problem102/Data/p102_triangles.txt", "r")) == NULL)
		return "No such file\n";
	else {
		while(fscanf(fp,"%d,%d,%d,%d,%d,%d", &x_a, &y_a, &x_b, &y_b, &x_c, &y_c) != EOF) {

			k_a = (y_b - y_c) / (float)(x_b - x_c);
			n_a = y_c - x_c * k_a;

			k_b = (y_c - y_a) / (float)(x_c - x_a);
			n_b = y_a - x_a * k_b;

			k_c = (y_a - y_b) / (float)(x_a - x_b);
			n_c = y_b - x_b * k_c;

			if(sgn(-n_a) == sgn(y_a - k_a * x_a - n_a) &&
			   sgn(-n_b) == sgn(y_b - k_b * x_b - n_b) &&
			   sgn(-n_c) == sgn(y_c - k_c * x_c - n_c))
				++inner;
		}
		fclose(fp);

		return int_to_string(inner);
	}
}
