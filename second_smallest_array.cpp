#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int first=INT_MAX;
    int second=INT_MAX;

    for(int i=0;i<=n;i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }
        else if(second>arr[i]){
            second=arr[i];
        }
    }
    cout<<second;
}
