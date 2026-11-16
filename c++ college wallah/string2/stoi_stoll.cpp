#include<iostream>
#include<string>
using namespace std;
int main (){
   string str = "12345";
   int x = stoi(str);
   cout<<x<<endl; 
   string st = "12345789012345";
   long long y = stoll(st);
   cout<<y; 
}