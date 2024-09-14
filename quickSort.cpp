#include <bits/stdc++.h>
using namespace std;
int Partition(int ar[],int p, int r){
    int pivot= ar[p];
    int i= p;
    int j=r;
    while (i<j)
    {
        while (pivot>ar[i])
        {
            i++;
        }
        while (pivot<ar[j])
        {
            j--;
        }
        if(i<j)
        {
            //swap(ar[i],ar[j]);
            int temp1= ar[i];
            ar[i]=ar[j];
            ar[j]=temp1;
        }
    }
   // swap(pivot,ar[j]);
   int temp2= pivot;
   pivot=ar[j];
   ar[j]=temp2;
    return j;
    
}

//Quick Sort
void quickSort(int ar[], int p, int r){
    if (p<r)
    {
        int pivot = Partition(ar,p,r);
        quickSort(ar,p,pivot);
        quickSort(ar,pivot+1,r);
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