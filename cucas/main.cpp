#include <iostream>
#include <map>
#include <iomanip>



using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);
    int N,code,score;
    string tName;

    map<int,pair<int,int>> codeArr;
    map<string,pair<int,int>> nameArr;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> code >> tName >> score ;
        if ( codeArr.find(code)!= codeArr.end()){
            codeArr[code].first+=1;
            codeArr[code].second+=score;
        } else {
            codeArr[code].first = 1;
            codeArr[code].second = score;
        }

        if (nameArr.find(tName)!=nameArr.end()){
            nameArr[tName].first+=1;
            nameArr[tName].second+=score;

        } else {
            nameArr[tName].first=1;
            nameArr[tName].second = score;
        }


    }

    for (auto &each : codeArr) {
        cout << each.first << " " << (each.second.second+0.0)/each.second.first << endl;
    }
    for (auto &each : nameArr) {
        cout << each.first << " " << (each.second.second+0.0)/each.second.first << endl;
    }
}
