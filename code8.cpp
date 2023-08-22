#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    printf("Array:");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    {
        int arr[]={3,6,9,12,15,20};
        int n = sizeof(arr) / sizeof(arr[0]);

        printArray(arr,n);

        return 0;
    }
}