#include <bits/stdc++.h>
using namespace std;
int main(){    
    float m; 
    double t,tax;
    
    cin >> m >> t >> tax;
    double x = m * t/100;
    double y = m * tax/100;
    double z= m + x + y;
    
    std::cout << round(z) << std::endl;
    
    return 0;   
}