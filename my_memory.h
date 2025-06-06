#ifndef MY_MEMORY_H
#define MY_MEMORY_H

#include <stdlib.h>
#include <string.h>

void trigger_soft_fail(int countdown);
void *my_malloc(size_t size);
void *my_calloc(size_t count, size_t size);
void *my_realloc(void *p, size_t size);
char *my_strdup(char *s);
void my_free(void *ptr);

#define malloc my_malloc
#define calloc my_calloc
#define realloc my_realloc
#define strdup my_strdup
#define free my_free

int current_allocs();
int total_allocs();
size_t memory_used();
size_t max_memory_used();

int mallocs_done();
int callocs_done();
int reallocs_done();
int strdup_done();

#endif

