#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Structure for a singly linked list node.
 * @str: String data
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 */

/* Structure for a singly  linked list node. */
typedef struct list_s
{
	char *str;		/* String data */
	size_t len;		/* Length of the string */
	struct list_s *next;	/* Pointer to the next node in the list */
} list_t;

/*  Function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
