#include<iostream>
using namespace std;

int main() {
    int n; // Input no. of lines to be printed
    cin>>n;
        
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
        
            if (j==i || n-j+1 == i){
                char c = (char)(n - j + 65);
                cout<<c<<" ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :- 
// E       A
//   D   B
//     C
//   D   B
// E       A
