#include<iostream>
using namespace std;
int main() {
    int num, n, a;
    printf("Enter number : ");
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n + 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
                printf("%X ", j);
            else
                cout << "  ";

        }
        cout << "\n";
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * n + 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
                printf("%X ", j);
            else
                cout << "  ";

        }
        cout << "\n";
    }
}