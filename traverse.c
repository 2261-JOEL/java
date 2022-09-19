#include <stdio.h>
void main()
{
    
    int n,i,j;
    
    printf("Enter the number of inputs to be taken ");
    scanf("%d",&n);
    
    int marks[n];
    for ( i = 0; i < n; i++)
    {
        j=1+i;
        printf("Enter the marks of the student %d ",j);
        scanf("%d",&marks[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        j=1+i;
        printf("The marks of student %d are %d\n",j,marks[i]);
    }
    

}