#include "malloc_impl.h"
#include <malloc.h>

void* (*const __realloc_dep)(void*, size_t) = realloc;

size_t malloc_usable_size(void* p) {
    return p ? CHUNK_SIZE(MEM_TO_CHUNK(p)) - OVERHEAD : 0;
}
