# Dynamic Memory Allocation :computer:


Dynamic memory allocation is the process of allocating memory during the runtime of a program. This is in contrast to static memory allocation, where memory is allocated at compile time. Dynamic memory allocation is useful when the size of the memory required is not known until the program is running. For example, a program may need to read in a large amount of data from a file, and the amount of data is not known until the program is running. In this case, the program can allocate the memory it needs at runtime.

## • The `malloc` Function and the `free` Function

The `malloc` function is used to dynamically allocate a single block of memory. The function takes a single argument, which is the size of the memory block to be allocated, in bytes. The function returns a pointer to the allocated memory block. The pointer returned by `malloc` is of type `void *`, which means that it can be cast to a pointer of any type. For example, if you want to allocate memory for an array of `int`s, you can cast the pointer returned by `malloc` to a pointer of type `int *`.


```c
    #include<stdlib.h>
    
    int main(void)
    {
        int *p = (int *)malloc(10 * sizeof(int));
        if (p == NULL)
        {
            // Handle error
        }
    
        // Use p
    
        free(p);
    
        return 0;
    }
```

## • The `calloc` Function

The `calloc` function is similar to the `malloc` function, except that it initializes the memory block to zero. The function takes two arguments: the number of elements to be allocated, and the size of each element, in bytes. The function returns a pointer to the allocated memory block. The pointer returned by `calloc` is of type `void *`, which means that it can be cast to a pointer of any type. For example, if you want to allocate memory for an array of `int`s, you can cast the pointer returned by `calloc` to a pointer of type `int *`.

```c
    #include<stdlib.h>
    
    int main(void)
    {
        int *p = (int *)calloc(10, sizeof(int));
        if (p == NULL)
        {
            // Handle error
        }
    
        // Use p
    
        free(p);
    
        return 0;
    }
```

## • The `realloc` Function

The `realloc` function is used to change the size of a previously allocated memory block. The function takes two arguments: a pointer to the previously allocated memory block, and the new size of the memory block, in bytes. The function returns a pointer to the newly allocated memory block. The pointer returned by `realloc` is of type `void *`, which means that it can be cast to a pointer of any type. For example, if you want to allocate memory for an array of `int`s, you can cast the pointer returned by `realloc` to a pointer of type `int *`.

```c
    #include<stdlib.h>
    
    int main(void)
    {
        int *p = (int *)malloc(10 * sizeof(int));
        if (p == NULL)
        {
            // Handle error
        }
    
        // Use p
    
        p = (int *)realloc(p, 20 * sizeof(int));
        if (p == NULL)
        {
            // Handle error
        }
    
        // Use p
    
        free(p);
    
        return 0;
    }
```

