#include<iostream>

using namespace std;


void insertIth(int a[], int n, int i)
{
    int key = a[i];
    int j = i-1;
    while (j>=0 && a[j]>key)
    {
        a[j+1] = a[j];
        j = j-1;
    }
    a[j+1] = key;
}


void insSort(int a[], int n)
{
    int i = 1;
    while (i<n)
    {
        insertIth(a, n, i);
        i++;
    }
    

}


void display(int a[], int n)
{
    int i = 0;
    while (i<n)
    {
        cout << a[i] << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    int arr[] =  {12 , 12, 312, 3, 12, 31, 2, 1, 432, 34, 2, 5, 634, 51, 312, 312, 5};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    insSort(arr, size);
    display(arr, size);



    return 0; 
}