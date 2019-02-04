#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    vector<int>count(n);
    int max,i,x;
    for(i=0;i<n;i++)
    {
        count[ar[i]]++;
    }
    max=count[1];
    for(i=1;i<n;i++)
    {
        if(max<count[i])
            max=count[i];
    }

     for(i=1;i<n;i++)
     {
         if(max==count[i])
         { x=i;
         break;}
     }

    return x;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
