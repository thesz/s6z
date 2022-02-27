/* S6z: Strange Slow Stochastic SAT Solver by Serguey Zefirov.
 *
 * Copyright (C) 2022 Serguey Zefirov.
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "s6z.h"

void fail(char*msg, ...) {
	va_list vl;
	va_start(vl, msg);
	fprintf(stderr, "failure: ");
	vfprintf(stderr, msg, vl);
	fprintf(stderr, "\n");
	exit(1);
} /* fail */
