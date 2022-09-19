#include <stdio.h>
void main()
{
    
    int i,j,size;

    int marks[10];
    printf("Enter the number of inputs to be taken ");
    scanf("%d",&size);

    if (size<=10)
    {
        for ( i = 0; i < 10; i++)
        {
            j=1+i;
            printf("Enter the marks of the student %d ",j);
            scanf("%d",&marks[i]);
        }
        for ( i = 0; i < 10; i++)
        {
            j=1+i;
            printf("The marks of student %d are %d\n",j,marks[i]);

        }
        
    }
    else
    {
        printf("OVERFLOW!! The size limit to take inputs is only 10\nRe-run the code!");
    }
   
    
   
    

}