#include<iostream>
using namespace std;

 int main(){

  char op;
  float a,b;
   cout<<"Enter Two Number:";
   cin>>a>>b;
   cout<<"What do you Want  to do :";
   cin>>op;
   switch(op){
    case'+':
    cout<<a+b;
    break;
    case'-':
    cout<<a-b;
    break;
    case'*':
    cout<<a*b;
    break;
    case'/':
    cout<<a/b;
    break;
  default:
  cout<<"error!";
  break;
   }

 }