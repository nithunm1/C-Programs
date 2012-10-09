#include<stdio.h>
void main()
{
    int a[100],temp,i,j,k,num,m;
    //ENTER THE LIMIT OF ARRAY
    printf("ENTER THE LIMIT OF THE ARRAY \n");
    scanf("%d",&num);
    // ENTER THE ELEMENTS IN ARRAY
    printf("ENTER THE ELEMENTS IN THE ARRAY \n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    // SORTING THE ELEMENTS USING BUBBLE SORT TECHNIQUE
    for(j=0;j<num;j++)
    {
        for(k=0;k<(num-1)-j;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    //THE SORTED ARRAY
    printf("THE SORTED ARRAY IS \n");
    for(m=0;m<num;m++)
    {

        printf("%d\t",a[m]);
    }
}
