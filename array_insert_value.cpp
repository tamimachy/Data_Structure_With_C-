#include<iostream>
using namespace std;
int insertA(int array[], int n, int pos, int value){
    n++;
    int i;
    for(i=n-1; i>pos; i--){
        array[i]=array[i-1];
    }
    array[pos] = value;
    return n;
}
int main(){
    int n,i;
    cout << "Array size: ";
    cin >> n;
    int array[n];
    cout<< "Array elements : ";
    for(i=0; i<n; i++){
        cin>> array[i];
        cout<<"Array values are: "<<array[i] << '\n';
    }
    n = insertA(array, n, 3, 25);
    cout << "Array values are updated is: " << '\n';
    for(i=0; i<n; i++){
        cout << array[i] << " ";
    }
    return 0;
}
