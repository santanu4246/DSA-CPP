#include <bits/stdc++.h>
using namespace std;
vector<char> convert(const vector<char> &name)
{
    vector<char> result;
    for (int i = 0; i < name.size(); i++)
    {
        char ans = name[i] - 'a' + 'A';
        result.push_back(ans);
    }
    return result;
}
int main()
{
    string name;
    cin >> name;
    bool flag = false;
    vector<char> char_convert = convert(vector<char>(name.begin(), name.end()));
    cout << "Your convertion:" << endl;
    for (int i = 0; i < name.size(); i++)
    {
        if ('a' <= name[i] && name[i] <= 'z')
        {
            flag = true;
            cout << char_convert[i];
        }
        else
        {
            flag = false;
            cout << endl;
            cout << name[i] << " not is lowercase";
            break;
        }
    }
    return 0;
}