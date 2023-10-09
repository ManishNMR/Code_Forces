// link - https://codeforces.com/problemset/problem/320/A

#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
    ll i,j,k;
    string s;
    bool flag=true;
    cin>>s;
    for(i=0;i<s.length();){
        if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4'){
            i+=3;
        }else if(s[i]=='1' && s[i+1]=='4'){
            i+=2;
        }else if(s[i]=='1'){
            i++;
        }else{
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

// inputCopy
// 114114
// outputCopy
// YES
// inputCopy
// 1111
// outputCopy
// YES
// inputCopy
// 441231
// outputCopy
// NO
