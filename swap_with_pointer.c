#include<iostream>
using namespace std;
void swap(int *a,int *b);
int get_data();
int main(){
int a=get_data();
int b=get_data();
cout<<"before swap"<<endl;
cout<<"a="<<a<<"b="<<b<<endl;
swap(&a,&b);
cout<<"after swap"<<endl;
cout<<"a="<<a<<"b="<<b<<endl;
}
int get_data(){
int temp;
cout<<"enter any number"
cin>>temp;
return temp;

}
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
