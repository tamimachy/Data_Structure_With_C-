#include <iostream>
using namespace std;
string subString(string text, int start, int len){
    int i;
    string subT = "";
    for(i=start; i<start+len; i++){
        subT = subT + text[i];
    }
    return subT;
}
string addString(string text, int pos, string newT){
    string s1 = subString(text,0,pos);
    string s2 = subString(text,pos,text.size()-s1.size());
    return s1+newT+s2;
}
string removeString(string text, int pos, int len){
    string s1 = subString(text,0,pos);
    string s2 = subString(text,pos+len,text.size()-(pos+len));
    return s1+s2;
}
int main(){
    string t = "To Be Honest";
    string s = subString(t,3,2);
    string addS = addString(t,5,"The");
    string removeS = removeString(t,3,6);
    cout << s;
    return 0;
}
