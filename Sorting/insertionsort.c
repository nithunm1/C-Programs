#include<stdio.h>
void main()
{
    int limit,i,j,k,m,temp,a[100];

    // ENTER THE LIMIT OF THE ARRAY
    printf("ENTER THE LIMIT\n");
    scanf("%d",&limit);
    // ENTER THE ELEMENTS IN THE ARRAY
    printf("ENTER THE ELEMENTS IN THE ARRAY\n");
    for(k=0;k<limit;k++)
    {
        scanf("%d",&a[k]);
    }
    //SORTING OF ELEMENTS USING INSERTION SORT TECHNIQUE
    for(i=1;i<limit;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)
        { 
            a[j+1]=a[j];

        }
        a[j+1]=temp;


    }
    // THE SORTED ARRAY IS
    for(m=0;m<limit;m++)
    {
        printf("%d\t",a[m]);
    }
}



