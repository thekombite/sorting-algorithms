#include<iostream>

using namespace std;

void swap(int a[], int x, int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;

}

int locOfSmallest(int a[], int startp, int endp)
{
    int i = startp;
    int j = i;
    while (i<=endp)
    {
        if (a[i]<a[j])
        {
            j=i;
        }
        i = i+1;
        
    }
    return j;
}


void selSort(int a[], int size)
{
    int i = 0;
    while (i<size-1)
    {
        int j = locOfSmallest(a, i, size-1);
        swap(a, i, j);
        i++;
    }
    
}

void display(int a[], int size)
{
    int i = 0;
    while (i<size)
    {
        cout << a[i] << " ";
        i++;
    }
    cout << endl;
}

int main(){
    int arr[] =  {12 , 12, 312, 3, 12, 31, 2, 1, 432, 34, 2, 5, 634, 51, 312, 312, 5};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    selSort(arr, size);
    display(arr, size);
    return 0;
}