#include <iostream>
using namespace std;

int main() {
float a=0;
float b=0;
int opzione=0;
cin>>a>>b>>opzione;
if(opzione<0||opzione>2){
cout<<"opzione non valida"<<endL;
return 0;
}
switch(opzione){
   case 0:
cout<<(a*b)/2<<endL;
break;
   case 1:
 cout<<a*a<<endL;
 break;
   case 2:
  cout<<a*b<<endL;
 break;
 }
 


   return 0;
}
