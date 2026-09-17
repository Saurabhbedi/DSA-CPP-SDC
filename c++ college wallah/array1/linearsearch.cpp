#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"Element found";
    else cout<<"not foumd";
}