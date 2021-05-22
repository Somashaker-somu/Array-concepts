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
  
int maxi=arr[0];
for(int i=0;i<num; i++)
{
    if(maxi<arr[i])
    {
        maxi=arr[i];
        
    }

}
cout<< "the  MAXIMUM NUMBER is:"<<maxi;
return 0;
}

