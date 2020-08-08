/** Name -> Shamima Akther
ID -> 1834902616
**/

/* Calculate the average of all elements of the given array.
Access the array using pointer.*/

#include<stdio.h>
int main()
{
    int array[100] = {10,20,30,40,50,60,70,80,90,100};
    int array_size = 10, sum = 0, average = 0;
    int i;
    int *p;

    p = array;

    printf("\n Array is : ");

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        sum += *(p+i);
    }
    printf("\n Sum = %d\n", sum);

    average = sum/array_size;
    printf("\n Average = %d\n",average);

    return 0;
}
