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

    int minelement=INT_MAX;

    for(int i=0;i<=n;i++){
        if(arr[i]<minelement){
            minelement=arr[i];
        }
    }
    cout<<minelement<<endl;
}
