#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<int, string> m;

    m[1] = "love";
    m[2] = "babber";
    m[5] = "vsCode";
    m[13] = "kumar";

    m.insert({10, "adamya"});
    cout << "before delete" << endl;
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << "13 is present at map : " << m.count(13) << endl;
    cout << "before delete" << endl;
    m.erase(13);
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }
    return 0;
}