#include <bits/stdc++.h>
using namespace std;
int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
   
    if(N%2 != 0)cout << "Weird" << endl;
    else if(!(N%2) && N >= 2 && N <= 5)cout << "Not Weird" << endl;
    else if(!(N%2) && N >= 6 && N <= 20)cout << "Weird" << endl;
    else if(!(N%2) && N > 20)cout << "Not Weird" << endl;
    return 0;  
}