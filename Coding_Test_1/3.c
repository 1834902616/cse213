/** Name -> Shamima Akther
ID -> 1834902616
**/

/*Search a value X(take input X from user)in the array and print "Found" if X
found in the array otherwise print "Not Found".*/

#include<stdio.h>
int main ()
{
    int array[100] = {10,20,30,40,50,60,70,80,90,100};
    int X, i, array_size = 10;

    printf("\n Enter Value : ");
    scanf("%d",&X);

    for( i = 0; i < array_size; i++)
    {
        if (X == array[i])
        {
            X = 1;
        }
    }
    if ( X == 1)
    {
        printf("\n Found\n");
    }
    else
    {
        printf("\n Not Found\n");
    }

    return 0;
}
