#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#include "convolution.h"

#define SIZE(x) (sizeof(x) / sizeof(*(x)))

const int x[] = {1, 1, 1, 1, 1, 1, 1, 1};	/* input */

const int h[] = {1, 1, 1, 1, 1, 1, 1, 1};	/* impulse response */

static void disp_arr(const int *const x, const int len);

#endif
