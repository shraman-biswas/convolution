#ifndef CONVOLUTION_H
#define CONVOLUTION_H

void input_side_convolve(
	const int *const x,
	const int len_x,
	const int *const h,
	const int len_h,
	int *const y);
void output_side_convolve(
	const int *const x,
	const int len_x,
	const int *const h,
	const int len_h,
	int *const y);

#endif