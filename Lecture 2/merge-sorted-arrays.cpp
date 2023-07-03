#include <bits/stdc++.h>
using namespace std;

// pass by value/pass by reference
void mergeSortedArrays(vector<int> &a, int m, vector<int> &b, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            a[k] = a[i];
            i--;
        } else {
            a[k] = b[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        a[k] = b[j];
        j--;
        k--;
    }
}

int main() {
    
    vector<int> a = {1, 2, 3, 0, };
    vector<int> b = {4, 5, 6};
    int m = 3;
    int n = 3;
    
    mergeSortedArrays(a, m, b, n);
    
    
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}