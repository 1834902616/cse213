
/** Name -> Shamima Akther
ID -> 1834902616
**/

/* Write a C program that declare an integer array length of one hundred (100)
(do not initialize the array). Scan values from user into an
array until user input is O (Zero). Print the entire array each
element separated by comma. Check Overflow,Use Function & Don't Use Pointer.*/

#include<stdio.h>
void Input_Array(int array[], int array_size);
void Print_Array(int array[], int array_size);

int main ()
{
    int array[100];
    int i = 0, array_size;

    Input_Array(array, array_size);

    return 0;
}
void Input_Array(int array[], int array_size)
{
    int i = 0;
    printf(" Enter Array Elements : \n");
    while (scanf("%d",&array[i]) == 1)
    {
        if(array[i] == 0)
        {
            break;
        }
        else if(i+1>100)
        {
            printf("Program Overflow");
            break;
        }
        i++;
    }
    array_size = i;
    printf("\n Array is : ");
    Print_Array(array, array_size);
}

void Print_Array(int array[], int array_size)
{
    int i;
    for( i = 0; i<array_size ; i++)
    {
        printf("%d",array[i]);

        if( i <= array_size - 2)
        {
            printf(",");
        }
    }
    printf("\n");
}
