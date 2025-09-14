#ifndef clox_memory_h
#define clox_memory_h
#define LEAST_ALLOC 8
#include "common.h"
#include "object.h"
#include "vm.h"


#define ALLOCATE(type,count) \
    (type*)reallocate(NULL, 0, sizeof(type) * (count))


    #define FREE(type, pointer) \
        reallocate(pointer, sizeof(type), 0)


#define GROW_CAPACITY(capacity) \
    ((capacity) < LEAST_ALLOC ? LEAST_ALLOC : (capacity) * 2)

    #define GROW_ARRAY(type , pointer , oldCount , newCount) \
        (type*)reallocate(pointer , sizeof(type) * (oldCount),sizeof(type) * (newCount))

    #define FREE_ARRAY(type , pointer , oldCount) \
        reallocate(pointer , sizeof(type) * (oldCount) , 0)

        void *reallocate(void* pointer , size_t oldSize , size_t newSize);
        void markObject(Obj* object);
        void markValue(Value value);
        void collectGarbage();
        void freeObjects();

#endif