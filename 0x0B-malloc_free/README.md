Automatic and dynamic allocation, malloc and free

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.
When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.
Automatic allocation, When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.
By default, the memory used to store those variables can be read and written. When the program leaves the function, the memory used for all the above variables is released for future use.
Special case: string literals
One special case we have seen so far is the memory used to store strings that we put within double quotes (") in our programs. 
