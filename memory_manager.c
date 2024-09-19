#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MEMORY_SUCCESS 0
#define MEMORY_FAILURE 1
struct page_directory{
    struct memory_page * start;
    size_t free_bytes;
};

struct memory_page{
    size_t size;
    bool p;
    struct memory_page * next;
};

int memory_init(){
    void *start = mmap(NULL, getpagesize(),PROT_READ | PROT_WRITE, MAP_PRIVATE,-1,0);
    if(start==(void*)-1){
        perror("mmap failed");
        return MEMORY_FAILURE;
    }
}
int main(int argc, char* argv[]){
    return 0;
}