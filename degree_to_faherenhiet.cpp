#include<iostream>
using namespace std;
int main(){
float degree;
float faherenhiet;
char choice;
cout<<"what do you want to convert into"<<endl;
cout<<"type c of celcius and type f for farenheit"<<endl;
cin>>choice;
if(choice=='f'){
std::cout<<"enter the value of temperature in degree celcius"<<endl;
cin>>degree;
faherenhiet=(9/5*degree)+32;
cout<<"The value of temperature in fahrenhiet scale is: "<<faherenhiet<<endl;
}
else if(choice=='c'){
std::cout<<"enter the value of tempe
ature in degree faherenheit"<<endl;
cin>>faherenhiet;
degree=5.0/9.0*(faherenhiet-32);
cout<<"The value of temperature in degree scale is: "<<degree<<endl;
}
else{
    cout<<"wrong input"<<endl;
}
return 0;
}
