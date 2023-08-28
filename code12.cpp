#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,lb=0,ub=4,flag=0,mid,item=30;
    cout<<"enter the array size:";
    cin>>n;
    cout<<"enter the element:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<"enter the items:";
        cin>>items;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(a[mid]==item)
            {
                flag=1;
                break;
            }
            if(a[mid]<item)
            lb=mid+1;
        else
        } ub=mid+1;
        if(flag==1)
        cout<<"item found with location:"<<n;
    }
}