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
string subString(string text, int start, int len){
    int i;
    string subT = "";
    for(i=start; i<start+len; i++){
        subT = subT + text[i];
    }
    return subT;
}
string insertS(string text, int pos, string newT){
    string s1 = subString(text,0,pos);
    string s2 = subString(text,pos,text.size()-s1.size());
    return s1+newT+s2;
}
string deleteString(string text, int pos, int len){
    string s1 = subString(text,0,pos);
    string s2 = subString(text,pos+len,text.size()-(pos+len));
    return s1+s2;
}
string rePlace(string T, string P1, string P2)
{
    int k = index(T, P1);
    if(k==-1){
        return T;
    }
    else{
        string d = deleteString(T, k, P1.size());
        string i = insertS(d, k, P2);
        return i;
    }
}
int main(){
    string S = "ABCDEFGH";
    string Replace = rePlace(S,"CD","IJ");
    cout<<"Replace string is: "<<Replace;
    cout<<endl;
}
