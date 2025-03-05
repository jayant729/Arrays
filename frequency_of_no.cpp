#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10,20,10,30,40,10,20,30};
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(const auto & pair:freq){
        cout<<pair.first<<"occurs "<<pair.second<<"times"<<endl;
    }
}
