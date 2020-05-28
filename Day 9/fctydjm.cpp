#include <bits/stdc++.h>

using namespace std;
int factorial(int);

// Complete the factorial function below.
int factorial(int n) {      
    if (n > 1) 
    {
        return n*factorial(n-1);
    }
    else 
    {
        return 1;
    }

}

int main()
{
    int n;
    cin >> n;
    factorial(n);
    cout << factorial(n);
    return 0;
}
