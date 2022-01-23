#include<iostream>

using namespace std;


void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;

}

void bubble(int a[], int n)
{
    int i = n-1;
    while (i > 0)
    {
        if (a[i]<a[i-1])
        {
            swap(a, i, i-1);

        }
        i--;
    }
    

}

void bblSort(int a[], int n)
{
    int i = 0;
    while (i<n-1)
    {
        bubble(a, n);
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
    bblSort(arr, size);
    display(arr, size);



    return 0;
}