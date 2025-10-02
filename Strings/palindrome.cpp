#include<iostream>
using namespace std;

bool isalpha(char a){
    if(( a<=90&&a>=65)||( a<=122&&a>=97)||(a<=57&& a>=48)){
        return true;
    }
    else return false;
}



    bool isPalindrome(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<=end){
            if(isalpha(s[st])&&isalpha(s[end])){
                if(tolower(s[st])==tolower(s[end])){
                    st++;
                    end--;
                }
                else{
                    return false;
                }
            }
            else if(!isalpha(s[st])&&isalpha(s[end])){
                st++;
            }
            else if(isalpha(s[st])&&!isalpha(s[end])){
                end--;
            }
            else if(!isalpha(s[st])&&!isalpha(s[end])){
                end--;
                st++;
            }
        }
        return true;
    }




int main(){
    string s="Race car";
    cout<<isPalindrome(s);
    return 0;
}