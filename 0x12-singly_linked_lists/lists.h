#ifndef STRUCT_H
#define STRUCT_H
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif

#ifndef HEADER_H
#define HEADER_H

size_t list_len(const list_t *h);
size_t print_list(list_t *node);
#endif
