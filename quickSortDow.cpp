#include <bits/stdc++.h>
using namespace std;

int Partition(int ar[], int p, int r) {
    int pivot = ar[p];  
    int i = p;          
    int j = r;          

    do {
        do {
            i++;
        } while (ar[i] <= pivot);

        do {
            j--;
        } while (ar[j] > pivot);

        if (i < j) {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    } while (i < j);

    int temp = ar[p];
    ar[p] = ar[j];
    ar[j] = temp;

    return j;
}

void quickSort(int ar[], int p, int r) {
    if (p < r) {
        int pivot = Partition(ar, p, r);
        quickSort(ar, p, pivot);
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

    quickSort(ar, 0, n);

    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }

    return 0;
}
