#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int result=0;
    for(int i=1; i<11; i++)
    {
        result=n*i;
    
    cout<<n<<" x "<<i<<" = "<<result<<"\n";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}

