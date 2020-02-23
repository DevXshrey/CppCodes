
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    float c1 = 0, c2 = 0, c3 = 0;
    float c11 = 0, c22 = 0, c33 = 0;
    cin >> n;
    int  ar[n];
    for (int j = 0; j < n; j++)
    {
        cin >> ar[j];
        
    }

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            c1++;
        }
        else if (ar[i] < 0)
        {
            c2++;
        }
        else if(ar[i]==0)
        {
            c3++;
        }
    }
    c33 = (c3 / n);
    c22 = (c2 / n);

    c11 = (c1 / n);
    cout << c11 << endl
         << c22 << endl
         << c33 << endl;
}
