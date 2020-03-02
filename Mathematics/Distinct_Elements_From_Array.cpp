#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, counter;
    int a[] = {6, 10, 5, 4, 9, 20, 4, 6, 10, 3, 4};
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    cout<<"Distinct elements of the Array: ";
    counter=0;
    for(i=0; i<n; i++)
    {
        while(i<n-1 && a[i]==a[i+1])
        {
            i++;
        }
        
        cout<<a[i]<<" ";
        counter++;
    }
    
    cout<<"\nThe number of distinct elements: "<<counter<<endl;
}

Output: 
Distinct elements of the Array: 3 4 5 6 9 10 20                                       
The number of distinct elements: 7
