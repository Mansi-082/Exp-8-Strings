//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;
int main() {
    string a;
    int n;
    cout<<"Enter a word: ";
    cin>>a;
    n=a.length();
    for(int i=n-1;i>=0;i--){
        cout<<a[i];
    }
return 0;
}
