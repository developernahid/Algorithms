#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int minIndex = i;

    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }

    if (minIndex != i)
    {
      swap(arr[i], arr[minIndex]);
    }
  }
}

int main()
{
  int n;
  cout << "Enter Array Size: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  selectionSort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
