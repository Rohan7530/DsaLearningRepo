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
    // Finding the largest number
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
        else
        {
            continue;
        }
    }
    //Outputting the result
    cout << "The largest element of the array is " << largest << endl;

    return 0;
}