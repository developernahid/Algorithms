#include <bits/stdc++.h>
using namespace std;

int Partition(int ar[], int p, int r) {
    int pivot = ar[r];
    int i = p - 1;
    int j = r;

    do {
        do {
            i++;
        } while (ar[i] < pivot);

        do {
            j--;
        } while (ar[j] > pivot);

        if (i < j) {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    } while (i < j);

    int temp = ar[i];
    ar[i] = ar[r];
    ar[r] = temp;

    return i;
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
