#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the  number:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
  
int mini=arr[0];
for(int i=0;i<num; i++)
{
    if(mini>arr[i])
    {
        mini=arr[i];
        
    }

}
cout<< "the minimum number is:"<<mini<<endl;
return 0;
}

