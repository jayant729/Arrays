#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[]={1,2,6,3,7};
    int arr2[]={10,7,45,3,7};
    int product=0;
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    if(n1!=n2)
        cout<<"ERROR!,The size of arrays are not same"<<endl;

    n1=n2;

    sort(arr1,arr1+n1);
    sort(arr2,arr2+n1);

    for(int i=0;i<n1;i++){
        product+=arr1[i]*arr2[i];
    }

    cout<<"The maximum array product: "<<product<<endl;
}
