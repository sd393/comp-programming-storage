#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2) {
        int arr1_pointer = 0;
        int arr2_pointer = 0;

        int n = arr1.size();
        int m = arr2.size();

        vector<int> new_arr;
        
        for (int i = 0; i < m+n; i++) {
            if (arr1_pointer < n && arr2_pointer < m) {
                if (arr1[arr1_pointer] < arr2[arr2_pointer]) {
                    new_arr.push_back(arr1[arr1_pointer]);
                    arr1_pointer++;
                } else {
                    new_arr.push_back(arr2[arr2_pointer]);
                    arr2_pointer++;
                }
            } else if (arr1_pointer >= n) {
                for (int i = new_arr.size(); i < m+n; i++) {
                    new_arr.push_back(arr2[arr2_pointer]);
                    arr2_pointer++;
                }
            } else {
                for (int i = new_arr.size(); i < m+n; i++) {
                    new_arr.push_back(arr1[arr1_pointer]);
                    arr1_pointer++;
                }
            }
            
        }

        return new_arr;
    }

vector<int> merge_sort(vector<int> arr1) {
    if (arr1.size() > 1) {

        vector<int> first_half, second_half;

        for (int i = 0; i < arr1.size()/2; i++) {
            first_half.push_back(arr1[i]);
        }

        for (int i = arr1.size() / 2; i < arr1.size(); i++) {
            second_half.push_back(arr1[i]);
        }

        return merge(merge_sort(first_half), merge_sort(second_half));

    }

    return arr1;

}

int main() {
    //bubble sort 
    /* 
    int n = 6;
    int array_to_be_sorted[n]; 
    int array_copy[n];
    for (int i = 0; i < n; i++) {
        cin >> array_to_be_sorted[i];
        cin >> array_copy[i];
    }

    for (int i = 0; i < n; i++) {        for (int j = 0; j < n-1; j++) {
            if (array_to_be_sorted[j] > array_to_be_sorted[j+1]) {
                swap(array_to_be_sorted[j], array_to_be_sorted[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << array_to_be_sorted[i] << " ";
    }*/

    //merge sort
    /*
    vector<int> arr_test = {6, 5, 4, 3, 2, 1};

    vector<int> result_arr = merge_sort(arr_test);
    
    for (int i = 0; i < result_arr.size(); i++) {
        cout << result_arr[i] << " ";
    }
    */

}