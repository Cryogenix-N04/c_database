#include <stdio.h>
#include <assert.h>
#include <kv.h>

int main() {
    kv_t *table = kv_init(1024);
    printf("%p\n", table);
    printf("%ld\n", table->capacity);
}
