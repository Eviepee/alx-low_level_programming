#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

void _putchar(char *c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void int_index(int *array, int size, int (*cmp)(int));
 
#endif /*FUNCTION_POINTERS_H*/
