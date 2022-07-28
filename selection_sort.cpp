#include <iostream>

using namespace std;

void selectionsort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = a[i];
        int minIndex=i;

        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min){
                min=a[j];
                minIndex=j;
            }
        }

        //swap

        int c=a[i];
        a[i]=a[minIndex];
        a[minIndex]=c;

    }
}

int main()
{
    int n;
    cout<<"Enter n:"<< " ";
    cin>>n;
    int a[n];

    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"The entered array is:";
    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";


    selectionsort(a,n);

    cout<<endl<<"Sorted array is:";

    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";

}
