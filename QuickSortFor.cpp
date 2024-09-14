#include <bits/stdc++.h>
using namespace std;
int Partition(int ar[], int p, int r) {
    int pivot = ar[p];  
    int i = p + 1;      
    int j = r;         

    for (; i <= j;) {
      
        for (; i <= r && ar[i] <= pivot; i++);

        for (; j >= p && ar[j] > pivot; j--);

        if (i < j) {
            swap(ar[i], ar[j]);
        }
    }

    swap(ar[p], ar[j]);

    return j; 
}

// Quick Sort
void quickSort(int ar[], int p, int r) {
    if (p < r) {
        int pivot = Partition(ar, p, r);  
        quickSort(ar, p, pivot - 1);      
        quickSort(ar, pivot + 1, r);      
    }
}
int main() {
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    quickSort(ar,0,n-1);
    //Show output
      for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}