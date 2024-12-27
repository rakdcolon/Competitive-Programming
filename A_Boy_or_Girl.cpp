#include <iostream>
#include <vector>
#include <cstring>
#include <set>

using namespace std;

int countDistinctCharacters(string s)
{
    set<char> dc;

    for (int i = 0; i < s.length(); i++)
    {
        dc.insert(s[i]);
    }

    return dc.size();
}

void solve() 
{
    string s;
    cin >> s;

    int ndc = countDistinctCharacters(s);

    if (ndc % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}
