#include<iostream>
using namespace std;
int main (){
    int sum = 0;
    int n ;
    cout << "enter the size of array = ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "enter the value of " << i << " = ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    // for(int j=0;j<n;j++){
    //     sum = sum + arr[j];
    // }
    cout << "sum of array : ";
    cout <<  sum;

    return 0;
}