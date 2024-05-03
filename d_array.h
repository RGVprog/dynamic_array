// AUTHOR: RGVprog

//  THIS IS A SIMPLE DYNAMIC ARRAY IMPLEMENTATION IN C99
//  JO MAMA CAN SUGGONDEEZNUTS

#ifndef D_ARRAY_H
#define D_ARRAY_H

#include <sys/types.h>
#include <stdlib.h>

#ifdef D_ARRAY_IMPLEMENTATION

void* d_array_init(size_t size);
void d_array_reallocate(void* ptr, size_t size)


void* d_array_init(size_t size){
    void *ptr;
    ptr = malloc(size);
    return ptr;
}

void* d_array_reallocate(void* ptr, size_t size){
    ptr = realloc(ptr, size);
}

#define d_array(T, len) ((T*)d_array_init(T * len))
#define d_array_resize(T, ptr, size) ((T*)d_array_reallocate(ptr, size))

#endif

#endif
