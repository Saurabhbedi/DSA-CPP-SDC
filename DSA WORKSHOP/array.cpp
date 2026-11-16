#include<iostream>
#include<vector>
using namespace std;
int main (){
    //prefix , suffix
    int arr[7] = {3,5,2,78,-3,233,4};
    int prefmin[7];
    prefmin[0] = arr[0];
    for(int i=1;i<7;i++){
        prefmin[i] = min(prefmin[i-1],arr[i]);
    }
    for(int i=0;i<7;i++){
        cout<<prefmin[i]<<" ";
    }
    cout<<endl;
    //suffix
    int suffmax[7];
    suffmax[6] = arr[6];
    for(int i=5;i>=0;i--){
        suffmax[i] = max(suffmax[i+1],arr[i]);
    }
    for(int i=0;i<7;i++){
        cout<<suffmax[i]<<" ";
    }
    cout<<endl;
    cout<<prefmin[3]<<" "<<suffmax[3];                                          
}+
