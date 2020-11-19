/*
ARYAN GARG
19124018
IT(G-1)
*/

// Program for implementing of the linear search.

#include <stdio.h>
#include<math.h>

int main()
{
    int n;//n is the total number of elements of the array

    int i,key,flag=0; //i is the index that we will traverse and key is the number
    //we want to search with flag as set as a variable for saying of the boolean values if it is true or not .

    printf("Enter the Total number of elements of the array : ");
    scanf("%d", &n);
    int arr[n];//array of elements with size n
    printf("Enter the elements of the array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);//scanning all the elements of the array
    }

    printf("Enter the Element to be Searched ");//enter the element we want to search inside the array.
    scanf("%d", &key);
    //  Linear search algorithm's program begins
    for (i = 0; i < n ; i++)
    {
        if (key == arr[i] )//if the element is found inside the array
        {
            flag=1;//the variable is set to one and then we break from the loop
            break;
        }
    }
    if(flag==1)//if the element is found inside the array
    {
        printf("Element Found in the array at index %d",i);

    }
    else//if the element is not found inside the array then we print element is not found.
    {
        printf("Element is not found in the array . ");
    }
    return 0;
}
