#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2 ;//(end - start)/2;

    while(end>=start){
            if (arr[mid] == key){
                return mid;
            }
            if (arr[mid] > key){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        mid = start + (end - start)/2 ;
    }
    return -1;
}

int main(){
    
    int even[5] ={2,4,8,12,16};
    int odd [6] ={1,3,5,7,9,11};

    int index = binarySearch(even, 5, 12);
    cout << "index of the given key is " << index << endl;
}