#include <iostream>
#include <algorithm>
#include "vector"
using namespace std;


int factorial(int i)
{
    if (i==0) return 1;
    else return i*factorial(i-1);
}


bool perestanovka(int *urna, int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (urna[i] == i)
        {
            return true;
        }
    }
    return false;
}

int main() {
    int ans = 0, n, fac;
    cout<<"enter the number of balls: ";
    cin>>n;
    fac = factorial(n);
    int *urna{new int[]{}};
    for(int i = 0; i<n; ++i){
        urna[i]=i;
    }
    for (int i = 0; i < fac; ++i) {
        next_permutation(urna, urna + n);
        if (perestanovka(urna, n))
            ans++;
    }
    cout<<ans;
    return 0;
}