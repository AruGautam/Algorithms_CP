#include<iostream>
using namespace std;

void selsort(int a[],int n)
{
int c=0;
    for(int i=0;i<n-1;i++)
    {
    int m=i;
   for(int j=i+1;j<n;j++)
    {
       if(a[m]>a[j])
       m=j;
    }
    if(a[i]!=a[m])
    {
        int temp=a[i];
        a[i]=a[m];
        a[m]=temp;c++;
    }
    }
    cout<<"no of shifts"<<c<<endl;
}
int main()
{
int num;
cin>>num;
int a[100];
for(int i=0;i<num;i++)
    cin>>a[i];
selsort(a,num);
for(int i=0;i<num;i++)
cout<<a[i]<<endl;;
}
