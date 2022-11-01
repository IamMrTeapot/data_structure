#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string text;
    map<string,int> dict;
    map<string,int>::iterator it;
    for (int i=0;i<n;i++){
        cin >> text;
        if ((it = dict.find(text))==dict.end()){

            dict[text]=1;
        } else {
            dict[text]+=1;
        };
    };
    int max =0;
    map<string,int>::iterator max_pos;
    for(auto it= dict.begin();it!=dict.end();it++){
        if (it->second>= max) {
            max= it->second;
            max_pos = it;
        }
    };

    cout << max_pos->first << " " << max_pos->second;

}
