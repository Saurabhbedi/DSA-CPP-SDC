#include<iostream>
#include<vector>
using namespace std;
int main (){
    int arr[6] = {5,4,6,3,2,1};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    // for(int i = 0;i<6;i++){
    //     for(int j = 0;j<6-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

     for(int i = 0;i<6;i++){
        bool flag = true;
        for(int j = 0;j<6-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}