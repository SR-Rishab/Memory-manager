#include<stddef.h> // Need this header file for NULL.
#define SIZE 102400
#define BLOCKS 128 // Number of blocks.

static int RAM[SIZE/4]; // int is of size 4 in gcc, therefore creating a static array of size SIZE/4
static bool occupied[SIZE] = {false}; // Occupied status of memory
static int *blockPtrs[SIZE]; // Pointers to allocated block


int* allocate(int); // size in Bytes
void deallocate(int*); // Pointer to allocated memory
