//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;
int main() {
    string a;
    int n,p=0;
    cout<<"Enter a word: ";
    cin>>a;
    n=a.length();
    for(int i=n-1;i>=0;i--){
        if(a[i]==a[p]){
            p++;
        } else{
            break;
        }
    }
    if(p==0){        
        cout<<a<<" is not a pallindrome.";
    } else{
        cout<<a<<" is a pallindrome.";
    }
    return 0;
}
