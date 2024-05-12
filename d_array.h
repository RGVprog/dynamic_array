// AUTHOR: RGVprog

//  THIS IS A SIMPLE DYNAMIC ARRAY IMPLEMENTATION IN C99
//  JO MAMA CAN SUGGONDEEZNUTS

#ifndef D_ARRAY_H
#define D_ARRAY_H

#include <sys/types.h>
#include <stdlib.h>

typedef struct { void *ptr; size_t len; }d_array;
d_array d_array_create (size_t, size_t);
void d_array_free(d_array*);

#define d_array_insert(T, index, value, ptr) (((T*)ptr)[index] = value)
#define d_array_at(T, index, ptr) (((T*)ptr)[index])

#endif

#ifdef D_ARRAY_IMPLEMENTATION

d_array d_array_create (size_t sizeoftype, size_t len){
    d_array a = {
        .ptr = malloc(sizeoftype * len),
        .len = len,
    };

    return a;
}

void d_array_free(d_array* a){
    free(a->ptr);
    a->ptr = NULL;
}

#endif
