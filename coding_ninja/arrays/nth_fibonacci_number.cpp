#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       int prev2 = 1;
       int prev = 1;

       for(int i = 2; i<n; i++){
               int curi = prev + prev2;
               prev2 = prev; // Update prev2
               prev = curi;
       }

       cout << prev;
       return 0;
}

