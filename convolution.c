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
	for (i=0; i<len_x; ++i) {		/* iterate over input */
		for (j=0; j<len_h; ++j)		/* iterate over impulse resp. */
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
	len_total = len_x + len_h - 1;		/* convolution result length */
	for (i=0; i<len_total; ++i) {		/* iterate over result */
		y[i] = 0;			/* clear intiial value */
		for (j=0; j<len_h; ++j) {	/* iterate over impulse resp. */
			if (((i - j) < 0) || ((i - j) >= len_x))
				continue;	/* out of bounds check */
			y[i] += h[j] * x[i - j];
		}
	}
}
