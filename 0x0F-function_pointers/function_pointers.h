#ifndef HEADER_H
#define HEADER_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size, void (*action)(int));

#endif
