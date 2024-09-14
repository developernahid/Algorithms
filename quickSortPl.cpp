#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;       
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  
}

// Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = Partition(arr, low, high);  
        quickSort(arr, low, pivot - 1);        
        quickSort(arr, pivot + 1, high);       
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    // Show output
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
