#include <bits/stdc++.h>
using namespace std;

int knapSack(int cap, int wt[], int val[], int n) {
    // Base Case
    if (n == 0 )
        return 0;

    // If the weight of the nth item is more than the capacity, ignore this item
    if (wt[n-1]> cap)
        return knapSack(cap, wt, val, n - 1);

    // Return the maximum of two cases:
    // (1) nth item included
    // (2) nth item not included
    else
        return max(knapSack(cap, wt, val, n - 1),
                   val[n - 1] + knapSack(cap - wt[n - 1], wt, val, n - 1));
}

int main() {
    int n;
    int cap;
    
    cout << "Enter the number of items: ";
    cin >> n;
    
    cout << "Enter the knapsack capacity: ";
    cin >> cap;
    
    int w[n], val[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << " weight: ";
        cin >> w[i];
        
        cout << "Item " << i + 1 << " value: ";
        cin >> val[i];
    }
    
    // Call knapSack with correct argument order and print the result
    int maxValue = knapSack(cap, w, val, n);
    cout << "Maximum value in knapsack: " << maxValue << endl;

    return 0;
}
