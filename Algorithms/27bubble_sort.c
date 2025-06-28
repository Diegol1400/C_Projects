/*
Problem Statement
We are going to implement the described version of Bubble-Sort. To test it we will check the amount 
of passes and amount of swaps made before the given array becomes ordered.

Input data will contain array size in first line and array itself in the second (integer values separated with spaces).
Answer should contain two values - number of passes perfromed and total number of swaps made. For example:

input data:
8
3 1 4 1 5 9 2 6

answer:
5 8
We may note that number of swaps is roughly proportional to N^2 
where N is array size (average is about N^2 / 4) so that time which algorithm takes
 grows significantly faster than the amount of data (that is why such sorting is rarely used for bigger arrays).*/

#include <stdio.h> 
#include <stdint.h>
#include <stdbool.h>

void bubble_sort(int arr[], int size){
    int data;

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                data = arr[i]; // 3
                arr[i]=arr[j]; // 1
                arr[j]=data;   // 3
            }
        }
    }
    
}

int main(){
    int arr[] = {15, 5, 4 ,48 ,5 ,9, 2, 64, 100, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, size);

    for (int i = 0; i < size; i++)
    {
         printf("%d", arr[i]);
         printf("\n");
    }
    
    return 0;

}