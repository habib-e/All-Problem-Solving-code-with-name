#include<iostream>
#include<algorithm>

using namespace std;

inline int in()
{
    int x, y;
    y = scanf("%d", &x);
    return x;
}

const int MAXN = 205;
int cnt[2], v[MAXN], ind;

int main()
{
    int n = in();
    string s;
    cin >> s;
    for(int i = 0; i < n; i++)
        if(s[i] == 'W')
            cnt[0]++;
        else
            cnt[1]++;
    if(n % 2 == 0 && cnt[0] % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    char c = 'W';
    if(cnt[0] % 2 != n % 2)
        c = 'B';
    for(int i = 0; i < n; i++)
        if(s[i] != c)
        {
            v[ind++] = i;
            if(s[i + 1] == 'W')
                s[i + 1] = 'B';
            else
                s[i + 1] = 'W';
        }
    cout << ind << endl;
    for(int i = 0; i < ind; i++)
        cout << v[i] + 1 << ' ';
    cout << endl;
    return 0;
}
