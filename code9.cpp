#include<iostream>
#include<stdio.h>
using namespace std;

void main()
{
    int arr[]={10,20,30,40,50};
    int k = 30, n =5;
    int i; j;

    printf("Given array element are:\n");

    for(i =0; i<n; i++)
    {
        printf("arr[%d]=%d")
    }
    j=k;
    while(j<n){
        arr[j-1] = arr[j];
        j=j+1;
    }
    n = n-1;
    printf("Element of array after deletion:\n");
    for(i=0; i<n; i++)
    {
        printf("arr[%d]=%d", arr[i]);
    }
    return 0;
}