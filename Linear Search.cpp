#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key, flag = 0;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i << endl;
            flag = 1;
            break;
        }
    }
    if(!flag)
        cout << "Element not found" << endl;

    return 0;
}
