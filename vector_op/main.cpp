#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int Q,data;
    string cmd;
    cin >> Q;
    vector<int> v;
    for (int i =0; i<Q;i++) {
        cin >> cmd;
        if (cmd=="pb"){
            cin>> data;
            v.push_back(data);

        } else if (cmd=="sa"){
            sort(v.begin(),v.end());

        } else if (cmd=="sd"){
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());

        } else if (cmd=="r"){
            reverse(v.begin(),v.end());

        } else if (cmd=="d"){
            cin >> data;
            v.erase(v.begin()+data);

        };
    };

    for (int x:v){
        cout << x << " ";
    };
}
