// this program calculates the factorial


#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int f[200];
f[1]=1;
m=1;
int temp=0;
for(int i=1;i<=n;i++)
{
f[i]=f[i]*i;
}
cout<<"factorial: "<<f[]<<endl;
return 0;
}
