#include<iostream>
using namespace std;
int main()
{

	int a[10],size,i,item;
	cout<<"enter the size:";
	cin>>size;
	cout<<"enter the elements :";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the item";
	cin>>item;
	cout<<"searching status:";
	for(i=0;i<size;i++)
	{
		if(a[i]==item)
	cout<<"element is found ";
	break;
}

if (a[i]==size)
{
	cout<<"element is not found ";
}

return 0;
}