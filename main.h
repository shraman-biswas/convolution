#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#include "convolution.h"

#define SIZE(x) (sizeof(x) / sizeof(*(x)))

/* input */
const int x[] = {1, 1, 1, 1, 1, 1, 1, 1};

/* impulse response */
const int h[] = {1, 1, 1, 1, 1, 1, 1, 1};

static void disp_arr(const int *const x, const int len);

#endif