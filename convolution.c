#include "convolution.h"

/* input side convolution algorithm */
void input_side_convolve(
	const int *const x,
	const int len_x,
	const int *const h,
	const int len_h,
	int *const y)
{
	int i, j;
	for (i=0; i<len_x; ++i) {
		for (j=0; j<len_h; ++j)
			y[i + j] += x[i] * h[j];
	}

}

/* output side convolution algorithm */
void output_side_convolve(
	const int *const x,
	const int len_x,
	const int *const h,
	const int len_h,
	int *const y)
{
	int i, j, len_total;
	len_total = len_x + len_h - 1;						/* result length */
	for (i=0; i<len_total; ++i) {						/* loop over result */
		y[i] = 0;										/* clear first value */
		for (j=0; j<len_h; ++j) {
			if (((i - j) < 0) || ((i - j) >= len_x))	/* out of bounds */
				continue;
			y[i] += h[j] * x[i - j];
		}
	}
}