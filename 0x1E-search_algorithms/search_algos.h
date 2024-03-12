#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ------------ singly linked list node structure ------------ */

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* ------------ Prototype declarations ------------ */

/* -------____ Linear Search ____------- */
int linear_search(int *array, size_t size, int value);

/* -------____ Binary Search ____------- */
int binary_search(int *array, size_t size, int value);
int binary_search_helper(int *array, int value, size_t left, size_t right);
void print_array(int *array, size_t left, size_t size);

/* -------____ Jump Search ____------- */
int jump_search(int *array, size_t size, int value);
int jump_search_helper(int *array, int start, int end, size_t size, int value);

/* -------____ Interpolation Search ____------- */
int interpolation_search(int *array, size_t size, int value);
int interpolation_search_helper(int *array, size_t low,
		size_t high, int value);

/* -------____ Exponential Search ____------- */
int exponential_search(int *array, size_t size, int value);

/* -------____ Advanced Binary Search ____------- */
int advanced_binary(int *array, size_t size, int value);
int adv_binary_search_helper(int *array, int value, size_t left, size_t right);

/* -------____ Jump Search Linked List ____------- */
listint_t *jump_list(listint_t *list, size_t size, int value);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
listint_t *jump_list_helper(listint_t *list, listint_t *tail, int value);


/* -------____ Linear Skip Linked List ____------- */
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *skip_list_helper(skiplist_t *list, skiplist_t *tail, int value);
#endif
