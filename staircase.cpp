#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--)
        {
            cout<<((i<j)?" ":"#");
        }
        cout<<endl;
    }
    }



int main()
{
    long long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
