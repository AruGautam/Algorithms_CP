#include<iostream>
using namespace std;

int main()
{
     int n,flag =0;
     cout<<"Enter the size of the array:"<<endl;
     cin>>n;
     int key;
     cout<<"enter the element to be found"<<endl;
     cin>>key;
     int arr[n];
     cout<<"Enter the array"<<endl;
     for(int i =0;i<n;i++)
     {
        cin>>arr[i];
     }
     //Linear Search
     for(int i=0;i<n;i++)
     {
        if(arr[i]== key)
        {
            flag=1;
            cout<<"element found at index %d",i;
            break;
        }
     }
     if(flag==0)
        cout<<"element not found";
     return 0;

}
