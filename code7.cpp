#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int value[8];
    printf("enter the value of array:");

    for(int i = 0; i<8; ++i){
        scanf("%d",&value[i]);

    }
    printf("Displaying integer in the form of output:");

    for(int i = 0; i<8; ++i){
        printf("%d\n",value[i]);

    }
    printf("Displaying integers in the form of output:");

    return 0;
}
