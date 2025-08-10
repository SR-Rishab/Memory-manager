#include"memoryManager.h"

int* allocate(int size)  {
	for(int i = 0; i < BLOCKS;i++) { // Iterate through all the blocks
		if(!occupied[i]) { // Check for first unoccupied block
			if(size <= SIZE - i*(SIZE/BLOCKS)) { // Check if requested size can be allocated
				occupied[i] = true; // Mark the block as occupied
				blockPtrs[i] = RAM + i*(SIZE/BLOCKS); 
				return blockPtrs[i];// Return the base address of that block
			}
		}
	}
	return NULL; // No free memory so return NULL
}
void deallocate(int* ptr) {
	for(int i = 0;i < BLOCKS;i++) {
		if(blockPtrs[i] == ptr) 
			occupied[i] = false;
	}
}
