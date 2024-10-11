#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{
double num1,num2;
char op;
cout<<"Enter the operator(+,-,*,/):";
cin>>op;
cout<<"Enter the two numbers one by one:";
cin>>num1>>num2;
switch(op)
{
case'+':
cout<<num1<<op<<num2<<"="<<num1+num2<<endl;
break;
case'-':
cout<<num1<<op<<num2<<"="<<num1-num2<<endl;
break;
case'*':
cout<<num1<<op<<num2<<"="<<num1*num2<<endl;
break;
case'/':
if(num2==0.0)
{
cout<<"Drive by Zero situtation"<<endl;
}
else
{
 cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
}
break;
default:
cout<<"Invaliid operator"<<endl;
}
return 0;
}
