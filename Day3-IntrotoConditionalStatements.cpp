#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    if ((n%2) != 0)

cout<<"Weird";

if (n%2 == 0)
{

if ((n>=2) and (n<=5))

cout<<"Not Weird";

if ((n>=6) and (n<=20))

cout<<"Weird";

if (n>20)

cout<<"Not Weird";
}
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}

