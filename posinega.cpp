#include<iosteam.h>
#include<conio.h>
int main()
{
int n;
cout<<"Enter a number";
cin>>n;
if((n!=0)&&(n>0))
cout<<"The number is positive:"<<n;
else
if(n<0)
cout<<"The number is negative:"<<n;
else
cout<<"The number is zero:"<<n;
return 0;
}
