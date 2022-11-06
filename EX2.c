#include <stdio.h> 

#include <stdlib.h> 

//ADD #pragma warning(disable:4996)
#pragma warning(disable:4996)


int main2()

{

    int x, y;

    int nums[6];

    int* arrPtr;

    //ENTER numbers in x and y
    x = 5;
    y = 10;


    // Section A - Print the variables 

    puts("***** Section A *****");

    printf(" Base = %d\n", x);

    printf(" Height = %d\n", y);

    //print the resolte of x*y
    printf(" Area = %d\n", x * y);



    // Section B - Print the static array "nums". 

    puts("***** Section B *****");

    int i = 0;

    while (i < 6) {
        //ENTER TO nums in place I 
        //in double of 3
        nums[i] = i * 3;

        printf("  nums[%d] = %d\n", i, nums[i]);

        //ADD 1 to i every run
        i++;
    }



    // Section C - Print allocated array. 

    puts("***** Section C *****");
    //CHANGE FROM 10 TO 6 in size of
    arrPtr = malloc(sizeof(int) * 6);

    //ADD helped arr
    int* arrPtr1 = arrPtr;

    for (i = 0; i < 6; i++) {
        //ADD value to arr
        //in double of 2
        *arrPtr1 = i * 2;

        //TO move the pointer one step 
        // just if its not the last round
        if (i != 5)
        {
            arrPtr1++;

        }

        // printf("  array[%d] = %d\n", i, arrPtr[i]);

    }


    if (arrPtr) {

        for (i = 0; i < 6; i++) {

            printf("  array[%d] = %d\n", i, arrPtr[i]);

        }

    }

    else {

        printf("Error Allocating Memory!\n");

        exit(1);

    }

    return 0;

}