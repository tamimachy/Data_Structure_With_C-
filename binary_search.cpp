#include<iostream>
using namespace std;
int BinarySearch(int A[], int Beg, int End, int item)
{
    if(Beg>End)
    {
        return -1;
    }
    int Mid = (Beg+End) / 2;
    if(A[Mid]==item)
    {
        return Mid;
    }
    else if(A[Mid]<item)
    {
        BinarySearch(A,Mid+1,End,item);
    }
    else
    {
        BinarySearch(A,Beg,Mid-1,item);
    }
}
int main()
{
    int n, i, k, Loc;
    cout<< "Enter the array Size: ";
    cin >> n;
    int A[n];
    cout << "Array Elements are: " << '\n';
    for(i=0; i<n; i++)
    {
        cin >> A[i];
        cout << A[i] << " ";
    }
    cout<<endl;
    cout << "Find the value = ";
    cin >> k;
    Loc = BinarySearch(A,0,n-1,k);
    cout << "Exact position no : " << Loc;
    cout<<endl;
    return 0;
}
