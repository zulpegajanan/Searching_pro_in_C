#include<stdio.h>
int main()
{
 int i,n,search,flag=0;
 printf("Enter size of array\n");
 scanf("%d",&n);
 int a[n];
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
     if(a[i]==search)
     {
      flag++;

     }
    }

    if(flag!=1)
    {
     printf("Search Successful with %d time repeat\n",flag);
    }
    else
    {
     printf("Search is not Successful\n");
    }
}
