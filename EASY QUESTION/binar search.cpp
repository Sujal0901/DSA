#include<iostream>

using namespace std;


int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int left = 0;
    int right = n - 1;
    int target;

    cin >> target;
   

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "found at index " << mid;
            return 0;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << "Element not found";
    return 0;
}