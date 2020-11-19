/*
ARYAN GARG
19124018
IT(G-1)
*/

// Program for implementing of the binary search in the iterative way.

#include<stdio.h>
#include<math.h>

int main()
{
    int n,key,i,middle,high,low,flag=0;//n is the total number of elements of the array,key is the element we need to search
    //with i as the index we need to go through all of the array.
    printf("Enter The size of the array : \n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter The elements of array one by one : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    low=0;
    high=n-1;
    printf("Enter The Key You Want To Search :\n");
    scanf("%d",&key);
    while(low<=high)
    {
        middle = ceil((high+low)/2);
        if(key==arr[middle])
        {
            flag=1;
            break;
        }
        else if(key<arr[middle])
        {
            high=middle-1;
        }
        else
        {
            low=middle+1;
        }
    }
    if(flag==0)
    {
        printf("Element Is Not Found In The Array !\n");
    }
    else
    {
        printf("Key %d is found at index %d\n",key,middle);
    }
    return 0;
}
