#include <bits/stdc++.h>
using namespace std;

int Partition(int ar[], int p, int r) {
    int pivot = ar[r];  
    int i = p - 1;      

    for (int j = p; j < r; j++) {
        if (ar[j] <= pivot) {
            i++;
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }

    int temp = ar[i + 1];
    ar[i + 1] = ar[r];
    ar[r] = temp;

    return i + 1;
}

void quickSort(int ar[], int p, int r) {
    if (p < r) {
        int pivot = Partition(ar, p, r);  
        quickSort(ar, p, pivot - 1);      
        quickSort(ar, pivot + 1, r);      
    }
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    quickSort(ar, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }

    return 0;
}
