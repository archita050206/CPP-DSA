/*

1-> exception: base calss for all excptions in cpp
rarely used, but other excaption types inherit from this class

2-> runtime_error: for the errors that occur at runtime like used input  for denominator

3->logic_error: for logical errors in programs like invalid arguments

4-> out_of_range: thrown when accessing elements outside a valid range of a container

5-> bad_alloc: throws when the program fails to allocate memory ex. new operator fails like not enough memory 
    to create large objects
    ex. if a game tries to load too many objects and it runs out of memory

6-> bad_cast: throws when type cast fails
*/