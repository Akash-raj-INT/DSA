#include<stdio.h>
int main(){
	int n1,n2,n3;    //array size deceration
	int a[1000],b[1000],c[20000];
	printf("enter the size of first array: ");
	scanf("%d", &nl);
	printf("Enter the array elements: ");
	for(int i=O; i< nl; i++)
	scanf("%d", &a[i]);
	printf("Enter the size of second array: ");
	scanf("%d",&n2):
	printf("Enter the array elements: ");
	for(int i= 0;i < n2.i++)
	scanf("%d", &b[i]);
	n3=n1+n2;
	for(int i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("enter the size of second array: ");
	scanf( "%d",&n2);
	printt("Enter the array elements: "):
	for(int i= 0; i< n2; i++)
	scanf("%d", &b[i]);
	n3=nl+n2;
	for(int i= 0;i< nl; i++)
	c[i]-a[i];
	for(int i = 0; i< n2; i++)
	c[i+nl]= b[i];
	printf("The merged array: "):
	for(int i=0;i < n3; i++)
	printf("%d ", c[i]); //print the merged array
	printf("\n Final array after sorting: ");
	for(int i= 0;i < n3;i++){
		int temp:
		for(int j=i+1; j<n3; j++){
			if(c[i] > c[j]){
				temp =c[j];
				c[i]=c[j];
				c[j]=temp;
			}
		}	
	}
	for (int i=0;i<n3;i++)  //print the second array 	
		printf("%d",c[i]);
	return 0;
}