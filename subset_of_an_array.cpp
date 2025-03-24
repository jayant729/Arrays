#include<bits/stdc++.h>
using namespace std;

bool issubset(int arr1[],int arr2[],int m,int n)
{
    unordered_set<int>set1(arr1,arr1+m);
    for(int i=0;i<n;i++){
        if(set1.find(arr2[i])==set1.end())
            return false;
    }
    return true;
}



int main()
{
    int arr1[]={11,10,13,21,30,70};
    int arr2[]={11,30,13,21};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);

    if(issubset(arr1,arr2,m,n)){
        cout<<"array 2 is subset of array 1"<<endl;
    }
    else
        cout<<"array 2 is not a subset of array 1"<<endl;
}
