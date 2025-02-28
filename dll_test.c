// Note: This is not an exhaustive test suite, but gives you the idea
//       of some tests you might want to create.
//       Adding more tests and slowly making them more and more complicated
//       as you develop your library is recommended.
//
// Compile this assignment with: clang -g -Wall dll_test.c -o dll_test.out
//
// Run with: ./dll_test.out
#include <stdio.h>  // For IO operations
#include <stdlib.h> // for malloc/free
#include "my_dll.h"


// A sample collection of tests for your program
// We will be adding our own to test your program.

// Tests creation and deletion of list
// Ideally does not cause any segfaults, and this
// is considered passing.
// Dll should also be empty.
int unitTest1(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    if (dll_empty(test))
    {
        passed = 1;
    }
    free_dll(test);

    return passed;
}

// Tests push_front and size functions
int unitTest2(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_front(test, 789);
    if (1 == dll_size(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}

// Tests push_back and size functions
int unitTest3(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_back(test, 142);
    if (1 == dll_size(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}

// Tests push_back and dll_pop_back functions
int unitTest4(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_back(test, 142);
    dll_pop_back(test);
    if (0 == dll_size(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}

// Tests push_back twice, then pops once
// then should compute the correct size.
int unitTest5(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_back(test, 142);
    dll_push_front(test, 142);
    dll_pop_back(test);
    if (1 == dll_size(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}

// Test push front and pop front
int unitTest6(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_front(test, 456);
    dll_pop_front(test);
    if (0 == dll_size(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}

// Test insert before the first node.
int unitTest7(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_front(test, 456);
    dll_push_front(test, 487);
    dll_insert(test,0,45);
    if (45 == dll_pop_front(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}


//Test insert at the tail.
int unitTest8(int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_front(test, 456);
    dll_push_front(test, 487);
    dll_insert(test,2,45);
    if (45 == dll_pop_back(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}

//Test insert more nodes.
int unitTest9 (int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_front(test, 456);
    dll_push_front(test, 487);
    dll_insert(test,1,45);
    dll_insert(test,2,345);
    if (4 == dll_size(test))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}


// Test get node method.
int unitTest10 (int status)
{
    int passed = 0;
    dll_t *test = create_dll();
    dll_push_front(test, 456);
    dll_push_front(test, 487);
    dll_push_back(test,45);
    dll_push_front(test,345);
    if (345 == dll_get(test,0))
    {
        passed = 1;
    }
    else
    {
        passed = 0;
    }
    free_dll(test);

    return passed;
}




// An array of function pointers to all of the tests
// that main() can use iterate over them.
// UNCOMMENT Tests as you are ready to use them
// Add your own tests!
int (*unitTests[])(int) = {
   unitTest1,
   unitTest2,
   unitTest3,
   unitTest4,
   unitTest5,
   unitTest6,
   unitTest7,
   unitTest8,
   unitTest9,
   unitTest10,
    NULL};

// ====================================================
// ================== Program Entry ===================
// ====================================================
int main()
{
    unsigned int testsPassed = 0;
    // List of Unit Tests to test your data structure
    int counter = 0;
    while (unitTests[counter] != NULL)
    {
        printf("========unitTest %d========\n", counter);
        if (1 == unitTests[counter](1))
        {
            printf("passed test\n");
            testsPassed++;
        }
        else
        {
            printf("failed test, missing functionality, or incorrect test\n");
        }
        counter++;
    }

    printf("%d of %d tests passed\n", testsPassed, counter);

    return 0;
}