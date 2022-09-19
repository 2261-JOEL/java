#include <stdio.h>
void main()
{
   int i,j,n,pos,el,size;
   printf("Enter the size of the array: ");
   scanf("%d",&size);
   int array[size];

   for ( i = 0; i < size; i++)
    {
        printf("Enter the value array[%d]=: ",i);
        scanf("%d",&array[i]);
    }
   
   printf("\nThe current size of the array is: %d\nAnd the array is as follows:-\n",size);
   for ( i = 0; i < size; i++)
   {
    j=i+1;
    printf("%d) array[%d] = %d\n",j,i,array[i]);
   }
   
   
      
   
   printf("\nEnter the position at which the element is to be deleted: ");
   scanf("%d",&pos);
   if (pos>size)
   {
    printf("\nOVERFLOW!! Can't delete the value at the specified position.\nKindly re-run the the program :)");    
   }
   else
   {
    for ( i = pos-1; i < size; i++)
    {
        array[i]=array[i+1];
    }

    printf("\nNow the current size of the array is: %d\nAnd the new array is as follows:-\n",size-1);
    for ( i = 0; i < (size-1); i++)
    {
     j=i+1;
     printf("%d) array[%d] = %d\n",j,i,array[i]);
    }
   }
}