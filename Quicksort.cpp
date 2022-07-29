#include <iostream>

using namespace std;

int partition1(int a[], int low, int high)
{
    int i=low;
    int j=high;
    int pivot=a[low];

    while(i<j)
    {
        while(pivot>=a[i])
        {
            i++;
        }

        while(pivot<a[j])
        {
            j--;
        }

        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }

    swap(a[low],a[j]);
    return j;

}

//recursive quicksort partition function called

void QuickSort(int a[], int low, int high)
{
    if(low<high)
    {
        int pivot = partition1(a,low,high);
        QuickSort(a,low,pivot-1);
        QuickSort(a,pivot+1,high);
    }
}

int main()
{
    int n;
    cout<<"Enter n:" ;
    cin>>n;
    int a[n];

    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"The entered array is:";
    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";


    QuickSort(a,0,n-1);

    cout<<endl<<"Sorted array is:";

    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";

}
