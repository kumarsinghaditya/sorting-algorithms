#include <iostream>

using namespace std;

void bubblesort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {

        //integer flag to check whether any swaps happen or the array is already sorted.

        int flag=0;

        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;          // if swap happens, set flag to 1.
            }
        }

        if (flag==0)       // if the flag stays 0 after any 'jth' round, means array becomes sorted after that round. Thus, break command to make it adaptive sort so that no more rounds/passes take place.
        {
            break;
        }
    }
}

//Min time: O(n), if array is already sorted, after 1st round n-1 comparisons, flag will tell that no swaps happened
// and thus, loop will break and sorted array returned in order of 'N' time.

//Max and avg time: O(n*n)

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


    bubblesort(a,n);

    cout<<endl<<"Sorted array is:";

    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";

}
