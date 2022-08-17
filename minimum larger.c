

#include <stdio.h>

void minimum_larger(int array[],int n);

int main()
{
    int n;
    printf("enter n  ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("\n enter the %d th item :  ",i);
        scanf("%d",&array[i]);
    }
    minimum_larger(array,n);

    return 0;
}

minimum_larger(int array[],int n)
{
    int temp,flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]<array[j])
            { 
                if(flag==0) temp=array[j];
                flag=1;
                if(temp>array[j]) temp=array[j];   
            }
        }
        array[i]=temp;
        if(flag==0) array[i]=-1;
        flag=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}

