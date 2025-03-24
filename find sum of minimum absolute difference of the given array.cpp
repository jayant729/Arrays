#include<bits/stdc++.h>
using namespace std;

int absolutedifference(int arr[],int n)
{
    sort(arr,arr+n);

    int median=arr[n/2];

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(arr[i]-median);
    }
    return sum;
}

int main()
{
    int arr[]={2,4,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int result=absolutedifference(arr,n);
    cout<<"The minimum absolute difference is: "<<result<<endl;


}
