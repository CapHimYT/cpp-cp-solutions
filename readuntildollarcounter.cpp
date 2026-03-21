#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    int count=0;
    int alpha=0;
    int white=0;
    int special=0;
    while(cin.get(ch)){
        if(65<=ch && ch<=90 || 97<=ch && ch<=122){
            alpha++;
        }
        if(ch ==' ' || ch=='\n' || ch=='\t'){
            white++;
        }
        if(ch=='$'){
            break;
        }
        if(ch=='%' || ch=='#' || ch=='@' || ch=='!' || ch=='&' || ch=='*' || ch=='(' || ch==')'){
            special++;
        }
    }
    cout<<alpha<<" "<<white<<" "<<special<<endl;
return 0;
}
