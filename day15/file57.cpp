// Write a program to Reverse array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of element";
    cin >> n;
    int arr [10000] ;
    cout << "enter element of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "new arrey is" ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
