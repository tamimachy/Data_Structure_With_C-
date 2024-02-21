#include<iostream>
using namespace std;
void bubbleSort(int A[],int n)
{
    int i,j, temp;
    for(i=0; i<n-1; i++){
        for(j=0;j<n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n, i;
    cout << "Enter the array size: ";
    cin >> n;
    int A[n];
    cout << "Array Elements are: " << '\n';
    for(i=0; i<n; i++)
    {
        cin >> A[i];
        cout << A[i] << " ";
    }
    bubbleSort(A,n);
    cout << '\n' <<"After Bubble sorting: " << '\n';
    for(i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout<<endl;
    return 0;
}
