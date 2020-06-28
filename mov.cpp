#include <iostream>
#include <stdio.h>

using namespace std;
int reverse(int i);
int main()
{
int f,l,d,r,i,count=0;
cin>>f>>l>>d;
for(i=f;i<=l;i++)
{
r=reverse(i);
if((r-i)%d==0)
count++;


}
cout<<count;

}
int reverse(int i)
{int s,n=0;
while(i>0)
{s=i%10;

   n=n*10+s;
   i=i/10;
}
return(n);
}
