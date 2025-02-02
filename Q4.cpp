#include <iostream>
using namespace std;
 
int main() {
	int a,b;
	int count=1;
	int energy=0;
	cin>>a>>b;
	if(a>b)
	{
		swap(a,b);
	}
	while(a<b)
	{

		a++;
		energy+=count;
		if(a==b)
		{
			break;
		}
		b--;
		energy+=count;
		count++;
	}
	cout<<energy;
	return 0;
}