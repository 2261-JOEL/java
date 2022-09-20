#include <stdio.h>
void main()
{
    int i, j=0, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter the value array[%d]=: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nNow the array in reverse order is as follows:-\n");
    for (i = size - 1; i >= 0; i--)
    {
        j=j+1;
        printf("%d) array[%d] = %d\n", j, i, array[i]);

        // j = i + 1;
    }
}