Simple bare-metal memory manager using static array in C
+ RAM is initialized as a static array
+ Memory is allocated in blocks of 4 bytes. Therefore there will be internal fragmentation.
+ Additional static arrays are used for checking whether there is already data inside the blocks and also pointers to the blocks themselves.
