#include<iostream>
using namespace std;


void combine(int a[], int s, int m, int e)
{
    int* buffer = new int [e+1]; // total size of the merged array
    int k = s;
    while (k<=e)
    {
        buffer[k] = a[k];
        k = k+1;
    }
    int i = s;
    int j = m+1;
    k = s;

    while (i<=m && j<=e)
    {
        if (buffer[i] <= buffer[j])
        {
            a[k] = buffer[i];
            i++;
        }
        else
        {
            a[k] = buffer[j];
            j++;
        }
        k = k+1;
    }
    while (i<=m)
    {
        a[k] = buffer[i];
        i++;
        k++;
    }
    while (j<=e)
    {
        a[k] = buffer[j];
        j++;
        k++;
    }
    

    delete[] buffer;
}



// auxiliary function (helper function)
void mrgSort(int a[], int s, int e)
{
    if (s>=e)
    {
        return;
    }
    int m = (s+e)/2;
    mrgSort(a, s, m);
    mrgSort(a, m+1, e);
    combine(a, s, m, e);
}



void mrgSort(int a[], int n) // wrapper function
{
    mrgSort(a, 0, n-1);
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
    mrgSort(arr, size);
    display(arr, size);

    return 0; 
}