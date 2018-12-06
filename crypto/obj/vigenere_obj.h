#pragma once

#include <stddef.h>

typedef struct {
	char * message;
	void (* const free_memsize) (void);
	void (* const set_memsize ) (const size_t size);
	void (* const set_message ) (const char * const from);
	char (* const set_alpha   ) (const char * const alpha);
	void (* const print       ) (void);
	void (* const println     ) (void);
	char (* const encrypt     ) (const char * const key);
	char (* const decrypt     ) (const char * const key);
} VIGENERE;

extern VIGENERE vigenere_obj;
