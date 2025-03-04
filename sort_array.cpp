#include<bits/stdc++.h>
using namespace std;

void sorted(int arr[],int n)
{
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main()
{
    int arr[]={20,40,1,4,5,9,88,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorted(arr,n);
}
