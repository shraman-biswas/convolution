#include "main.h"

int main(int argc, char **argv)
{
	printf("[ convolution ]\n");

	int len_x, len_h, len_total, *y1=NULL, *y2=NULL;

	/* calculate parameters */
	len_x = SIZE(x);
	len_h = SIZE(h);
	len_total = len_x + len_h - 1;

	/*  display input and impulse response */
	printf("input\nx = ");
	disp_arr(x, len_x);
	printf("\nimpulse response\nh = ");
	disp_arr(h, len_h);

	/* initialize outputs for both convoluton algorithms */
	y1 = (int *)calloc(len_total, sizeof(int));
	y2 = (int *)calloc(len_total, sizeof(int));

	/* input side convolution algorithm */
	input_side_convolve(x, len_x, h, len_h, y1);

	/* display input side convolution algorithm result */
	printf("\ninput side algorithm\n");
	printf("y1 = ");
	disp_arr(y1, len_total);

	/* output side convolution algorithm */
	output_side_convolve(x, len_x, h, len_h, y2);

	/* display output side convolution algorithm result */
	printf("\noutput side algorithm\n");
	printf("y2 = ");
	disp_arr(y2, len_total);

	return EXIT_SUCCESS;
}

/* display array */
static void disp_arr(const int *const x, const int len)
{
	int i;
	for (i=0; i < len-1; ++i)
		printf("%d, ", x[i]);
	printf("%d\n", x[i]);
}
