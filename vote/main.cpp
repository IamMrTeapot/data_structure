#include <iostream>
#include <map>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{

    int N,K ;
    string name;
    map<string,int> data;
    vector<int> forAns;

    cin >> N >> K;
    for (int i=0;i<N;i++ ){
        cin >> name;
        if (data.find(name)!=data.end()){
            data[name]+=1;
        } else {
            data[name]=1;
        };
    };

    int countt = 0;
    for (auto value : data){

        forAns.push_back(value.second);
        countt+=1;
    }

    sort(forAns.rbegin(),forAns.rend());

    if (countt >= K) {

        cout << forAns[K-1];
    } else {
        cout << *(forAns.end()-1) ;
    }




}
