#include <iostream>
using namespace std;

int main() {
    //bubble sort 

    int n = 6;
    int array_to_be_sorted[n]; 
    for (int i = 0; i < n; i++) {
        cin >> array_to_be_sorted[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (array_to_be_sorted[j] > array_to_be_sorted[j+1]) {
                swap(array_to_be_sorted[j], array_to_be_sorted[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << array_to_be_sorted[i] << " ";
    }
}