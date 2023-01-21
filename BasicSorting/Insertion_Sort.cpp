#include <iostream>
using namespace std;
 

void insertionSort(int arr[], int n)
{
    int i, key, j;
    int cam=0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            cam++;
        }
        arr[j + 1] = key;
    }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl<<"comparisons: "<<cam<<"\nshift: "<<n-1;

}

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int arr[100];
        int n;
        cin>>n;
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        insertionSort(arr, n);
    }
    return 0;
