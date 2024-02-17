#include<iostream>
using namespace std;
int deleteA(int a[], int n, int pos){
    int i;
    for(i=pos; i<n-1; i++){
        a[i]=a[i+1];
    }
    n--;
    return n;
}
int main(){
    int i, n;
    cout << "Array size: ";
    cin >> n;
    int array[n];
    cout<< "Array elements : ";
    for(i=0; i<n; i++){
        cin>> array[i];
        cout<<"Array values are: "<<array[i] << '\n';
    }
    n = deleteA(array, n, );
    for(i=0; i<n; i++){
        cout << "Array values are updated is: " << array[i] << '\n';
    }

}
