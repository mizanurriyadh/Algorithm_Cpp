/* Consuder a series of numbers composed of only 4 and 7. First few numbers in the series are
   4, 7, 44, 47, 74, 77, .........etc
   Given a number n, we need to find n-th number in the series.  */

#include <bits/stdc++.h>

using namespace std;

int printNthElement(int n)
{
    int arr[n+1];

    arr[1] = 4;
    arr[2] = 7;

    for(int i=3; i<=n; i++)
    {
        // If i is odd
        if(i%2 != 0)
            arr[i] = arr[i/2]*10+4;
        else
            arr[i] = arr[(i/2)-1]*10+7;
    }

    return arr[n];
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The "<<n<<"th element of the series: "<<printNthElement(n);

    return 0;
}

/*
Input : n = 2
Output : 7

Input : n = 3
Output : 44

Input  : n = 5
Output : 74

Input  : n = 6
Output : 77

*/


