#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int c = 0;
        for (int i = 0; s2[i] != '\0'; i++)
        {
        {     for (int j = 0; s1[j] != '\0'; j++)
                {
                    if (s2[i] == s1[j])
                    {
                        c++;
              break;
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
