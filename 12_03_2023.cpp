#include<iostream>
using namespace std;
// Global scope
int main(){
   cout<<"I am a full stack web application developer";
   char ch='c';
   int i=90;
   float f=90.5f;
   double dl=78.8945555555445334f;
   unsigned int  usign_int=625343;
   cout<<sizeof(ch);
   cout<<sizeof(int);
   int x=20;
   cout<<" Local scope is"<<x;
  //static variable

   static int staticVariable;
   cout<<staticVariable;

   //const variable
   const int constInt=10;
   cout<<constInt;

 //syntax Errors
 
 //semantic Errors

 //Linker Errors

 //Runtime Errors

 //logical Errors

  return 0;
}