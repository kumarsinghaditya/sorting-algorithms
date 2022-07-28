#include <iostream>
#include <climits>
using namespace std;

void insertion_sort(int a[], int n)
{
   for(int i=1;i<n;i++)
   {
       int current=a[i];
       int j=i-1;
       while(j>=0){
       if(current<a[j])
       {
           a[j+1]=a[j];
       }
       else{
       break;}
       j--;
       }
       a[j+1]=current;
   }
}



int main()
{
    int n;
    cout<<"Enter n:"<<" ";
    cin>>n;

    int a[n];

    cout<<"Enter elements:"<<" ";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"The entered array is:"<<" ";
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Sorted array is:"<< " ";

    insertion_sort(a,n);

    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
