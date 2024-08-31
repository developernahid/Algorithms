#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[], int n, int curr){
    int large=curr;
    int letf= 2*curr+1;
    int right= 2*curr+2;
    if (letf<n && arr[letf]>arr[large])
    {
        large=letf;
    }
    if (right<n && arr[right]>arr[large])
    {
        large=right;
    }
    if (large!=curr)
    {
         swap(arr[curr],arr[large]);
         heapify(arr,n,large);
    }
}
void heapSort(int arr[], int n){
    for (int i = n-1; i >=0; i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
    
}

//Print array
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int n;
    cout<<"Enter Size:";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
//Heapify
int nonLeaf = (n/2)-1;
printf("Before Heapify-");
    printArray(ar,n);
 for (int i = nonLeaf; i >=0; i--)
 {
    heapify(ar,n,i);
 }
 
    printf("After Heapify- ");
    printArray(ar,n);
    heapSort(ar,n);
    printf("After HeapSort- ");
    printArray(ar,n);
    return 0;
}
