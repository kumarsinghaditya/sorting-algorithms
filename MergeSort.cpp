#include <bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int mid, int r)
    {
         // Your code here
         int b[r+1];  // make a third array to merge the values while traversing

         int i=l; int j=mid+1;
         int k=l;

         while(i<=mid && j<=r)
         {
             if(a[i]>a[j])
             {
                 b[k++]=a[j++];
             }
             else{
                 b[k++]=a[i++];
             }
         }

         while(i<=mid)
         {
             b[k++]=a[i++];
         }

         while(j<=r)
         {
             b[k++]=a[j++];
         }

         for(int i=l;i<=r; i++)   //copy all the values of b[] back to initial array a[];
         {
             a[i]=b[i];
         }

    }

void mergeSort(int a[], int l, int r)
    {
        //code here
        if(l<r)
        {
            int mid=(l+r)/2;
            mergeSort(a, l , mid);
            mergeSort(a, mid+1, r);
            merge(a, l , mid, r);
        }
    }

    void printarray(int a[], int n)
    {
        for(int i=0; i<n ;i++)
        {
            cout<<a[i]<< " ";
        }
    }

int main()
{
    int a[7]={4,6,7,9,1,3,5};
    int l=0;
    int r=6;

    mergeSort(a,l,r);
    printarray(a,7);

}

