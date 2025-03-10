#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10,30,40,20,10,20,50,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(const auto &ele:mp){
        if(ele.second==1){
            cout<<" Non-repeated elements are:"<<ele.first<<endl;
        }
    }

}
