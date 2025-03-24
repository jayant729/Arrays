#include<bits/stdc++.h>
using namespace std;

void ascdes(int a[],int n)
{
    sort(a,a+n);

    for(int i=0;i<n/2;i++){
        cout<<a[i]<<" ";
    }
    for(int j=n-1;j>=n/2;j--){
        cout<<a[j]<<" ";
    }
}








int main()
{
    int arr[]={3,4,1,10,40,2,30,20};
    int len=sizeof(arr)/sizeof(arr[0]);
    ascdes(arr,len);


}
