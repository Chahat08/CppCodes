#include<iostream>
using namespace std;
void swap(int&,int&);//int &,int & this doesnt works in hackerrank
int main()
{
int a,b;
cin>>a>>b;
swap(a,b);
cout<<a<<b;
return 0;
}
void swap(int &x,int &y)
{
x=x+y;
y=x-y;
x=x-y;
}
