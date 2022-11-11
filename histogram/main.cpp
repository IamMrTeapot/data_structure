#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string word;
    map<string,int> data;

    for (int i=0;i<n;i++){
        cin >> word;
        if (data.find(word)==data.end()){
            data[word]=1;
        } else {
            data[word]+=1;
        }
    }

    for (auto each : data){

        if (each.second >1){
            cout << each.first << " " << each.second << "\n";
        }
    }
}
