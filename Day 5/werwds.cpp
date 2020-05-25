#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int mul;
  
    int j= 10;
    for(int i=1; i<=j;i++){
        mul = n*i;
        std::cout << n << " x " <<i << " = " << mul <<endl;;
    }
    return 0;
}
