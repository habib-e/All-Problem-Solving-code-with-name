#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec(10);
    fill_n(vec.begin()+3,vec.end()-2,9);
    for(int i=0;i<vec.size();i++)
        cout<<' '<<vec[i];
    cout<<endl;

    fill_n(vec.begin()+2,vec.end(),3);
    for(int i=0;i<vec.size();i++)
        cout<<' '<<vec[i];
    cout<<endl;

    return 0;
}
