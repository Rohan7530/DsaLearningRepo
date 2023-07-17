#include <iostream>
using namespace std;

int main()
{
    // Taking input of array
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements of the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }

    cout << "The inverted array is" << endl;

    // Reversing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}