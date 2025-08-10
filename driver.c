#include<stdio.h> // Need this library for testing purposes only
#include"../src/memoryManager.h"

int main() {
	int* mem[100];
	// Test case-1 General cases
	printf("Test case-1\n");
	mem[0] = allocate(128);
	mem[1] = allocate(1024);
	mem[2] = allocate(4096);
	printf("Address of allocated blocks are \n%p\n%p\n%p\n",mem[0],mem[1],mem[2]);

	deallocate(mem[0]);
	deallocate(mem[1]);
	deallocate(mem[2]);
	mem[1] = allocate( 512);
	printf("The address of re-allocated block is \n%p\n",mem[1]);
	deallocate(mem[1]);
	// Test case-2 Edge case
	printf("Test case-2\n");
	mem[0] = allocate(1);
	if(mem[0] == NULL)
		printf("Not allocated\n");
	else
		printf("The address of allocated block is \n%p\n",mem[0]);
	
	deallocate(mem[0]);
	mem[0] = allocate(SIZE);
	if(mem[0] == NULL)
		printf("Not allocated\n");
	else
		printf("The address of allocated block is \n%p\n",mem[0]);

	return 0;
}
