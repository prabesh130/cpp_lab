#include<iostream>
void swap(int &x,int &y);
int getdata();
int main(){
int a=getdata();
int b=getdata();
std::cout<<"before swap"<<std::endl;
std::cout<<"a="<<a<<"b="<<b;
swap(a,b);
std::cout<<"after swap"<<std::endl;
std::cout<<"a="<<a<<"b="<<b;
return 0;
}
void swap(int &x,int &y){
int temp=x;
x=y;
y=temp;
}
int getdata(){
int temp;
std::cout<<"enter any numbers"<<std::endl;
std::cin>>temp;
return temp;
}
