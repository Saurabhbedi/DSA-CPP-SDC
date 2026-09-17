#include<iostream>
using namespace std;
int main (){
//     int n;
//     int sum =0;
//     cout << "enter the number ";
//     cin >> n;
//     int x = n;
//     for(int i=1;i<=x;i++){
//         sum = sum + (n%10);
//         n=n/10;
    
//     if(n==0){
//         break;
//     }
// }
//     cout << sum;


int n;
cin >> n;
int sum = 0;
while(n>0){
    int rem = n%10;
    n = n/10;
    sum = sum + rem;

}
cout << sum;

return 0;
}