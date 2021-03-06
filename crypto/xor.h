#pragma once

#include <stddef.h>

#include "utils/types/integer.h"

/*
	M = "HELLO"
	K = 3
	E(M, K) = 
			('H' = 72) ^ 3 = 75
			('E' = 69) ^ 3 = 70
			('L' = 76) ^ 3 = 79
			('O' = 79) ^ 3 = 76
		C = 75 70 79 79 76
	D(C, K) =
			75 ^ 3 = 72
			70 ^ 3 = 69
			76 ^ 3 = 76
			79 ^ 3 = 79
		M = "HELLO"
*/

extern char xor (
	__INTEGER__ * to, 
	const __INTEGER__ key, 
	const size_t length,
	const __INTEGER__ * from
);
