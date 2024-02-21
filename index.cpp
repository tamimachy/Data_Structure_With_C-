#include<iostream>
using namespace std;

int index(string T, string P)
{
    int i, j;
    for(i=0; i<T.size(); i++){
        for(j=0; j<P.size(); j++){
            if(T[i+j]!=P[j]){
                break;
            }
        }
        if(j==P.size()){
            return i;
        }
    }
    return -1;
}
int main(){
    string S = "ABCDEFG";
    int position = index(S,"EF");
    cout<<"Pattern start index no: " << position;
    cout<<endl;
    return 0;
}
