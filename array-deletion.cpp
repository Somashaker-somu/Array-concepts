#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[50],pos,i,n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"enter array elements:";
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cout<<"enter the element u want to delete:";
    cin>>pos;
    if(pos>=n+1)
    {
        cout<<"enter correct location";
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    cout<<"Elements of new array: "<<"  ";
    for(i=0;i<n-1;++i)
    {
        cout<<a[i];
    }
    return 0;
}

