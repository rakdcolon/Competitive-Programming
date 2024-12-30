#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int *a = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = 0;
    int j = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max) 
        {
            max = a[i];
            j = i;
        }
    }

    int second_max = 0;

    for (int i = 0; i < n; i++)
    {
        if (i != j && a[i] > second_max)
        {
            second_max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == j)
        {
            cout << a[i] - second_max << " ";
        }
        else
        {
            cout << a[i] - max << " ";
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases--) solve();
}