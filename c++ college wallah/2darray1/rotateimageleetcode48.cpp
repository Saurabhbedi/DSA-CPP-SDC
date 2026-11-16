#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter numbers of rows : ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        } 
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int k=0;k<m;k++){
        int i = 0;
        int j = m-1;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
     for(int k=0;k<=m-1;k++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[k][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}