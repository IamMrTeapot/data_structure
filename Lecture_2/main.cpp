#include <iostream>
#include <vector>

using namespace std;

int main()
{
    pair<int,bool> a1,a2;

    a1.first = 10;
    a1.second = false;

    a2.first = a1.first;

    a2.second = a1.second;

    a1.first = 100;
    cout <<a2.first << endl;

    vector<string> v1 ={"first","second","third","fourth"};
    //auto it = v1.begin();
    //cout << v1[*it] << endl;
    //cout << *it << endl;  //print first;
    vector<string>::iterator it1 = v1.begin();

    v1.insert(1,it1,(it1+2));
    for (int i=0; i<v1.size();i++){
        cout << v1[i];
    };


    return 0;
}
