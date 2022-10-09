@ulidtko In case you did not know, it's possible to write code which compiles both as C and as C++. In fact most header files are like this, and they often contain code (macros and inline functions). Having a .c/.cpp file to compile as both is not useful very often, but one case is adding C++ throw support when compiled with C++ compiler (but return -1; when compiled with C compiler, or whatever). – 

hyde

If someone had malloc calls inline in a header I wouldn't be impressed, #ifdef __cplusplus and extern "C" {} are for this job, not adding in extra casts. – 

paulm

Well, point 1 is irrelevant, since C != C++, the other points are also trivial, if you use the variable in your malloc call: char **foo = malloc(3*sizeof(*foo)); if quite full-proof: 3 pointers to char pointers. then loop, and do foo[i] = calloc(101, sizeof(*(foo[i])));. Allocate array of 101 chars, neatly initialized to zeroes. No cast needed. change the declaration to unsigned char or any other type, for that matter, and you're still good – 

Elias Van Ootege

When I tought I got it, there it comes! Fantastic answer. Its the first time here in StackOverflow that I +1 two opposite answers! +1 No, you dont cast, and +1 Yes, you do cast! LOL. You guys are terrific. And for me and my students, I made my mind: I do cast. The kind of errors students make are more easily spotted when casting. – 

DrBeco
