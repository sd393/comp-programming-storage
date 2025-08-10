#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int ansList[n];

    for (int i = 0; i < n; i++){ 
        int m;
        cin >> m;

        int sum = 0;
        for (int i = 0; i < m; i++) {
            int num;
            cin >> num;
            if (num == 0) {
                sum++;
            } else {
                sum += num;
            }
        }
        ansList[i] = sum;
    }
    
    for (int i = 0; i < n; i++){
        cout << ansList[i] << endl;
    }
}