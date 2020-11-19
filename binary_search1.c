/*
ARYAN GARG
19124018
IT(G-1)
*/

// Program for implementing of the binary search in the recursive way.

#include <stdio.h>
#include <math.h>

void binary_search(int [], int, int, int);//definition of the binary search function

int main()
{
    int key, n, i;//n is the total number of elements of the array,key is the element we need to search
    //with i as the index we need to go through all of the array.

    printf("Enter size of a array you want : ");
    scanf("%d", &n);
    int arr[n];//defining the array with size of n elements.
    printf("Enter elements of the array in the sorted order of increasing values : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);//scanning all of the elements of the array and take inside the input.
    }
    printf("\n");
    printf("Enter key to search inside the array.\n");//key we want to search for inside the array.
    scanf("%d", &key);
    binary_search(arr, 0, n-1, key);//calling of the function.
    return 0;
}

void binary_search(int arr[], int low, int high, int key)
{
    int middle;//taking the middle element index inside the array

    if (low > high)
    {
        printf("Key is not found inside the array.\n");//if the low is > than high so key is not found.
        return;
    }
    middle = (ceil(low + high) / 2);//finding the middle of the index of the array
    if (arr[middle] == key)
    {
        printf("Key %d found at index %d\n",key,middle);//key found
    }
    else if (arr[middle] > key)
    {
        binary_search(arr, low, middle - 1, key);//if the element at middle is more than the key
        //then decrease the middle by position one so that middle changes.
    }

    else if (arr[middle] < key)
    {
        binary_search(arr, middle + 1, high, key);//if the element at middle is less than the key
        //then increase the middle by position one so that middle changes.
    }
}
