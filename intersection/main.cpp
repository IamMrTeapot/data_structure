#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,num;
    vector<int> v1,v2,intersected;

    cin >> n >> m;

    for (int i=0;i<n;i++){
        cin >> num;
        v1.push_back(num);

    };

    for (int j=0; j<m ; j++) {
        cin >> num;
        v2.push_back(num);
    };

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    auto checkPoint = v2.begin();
    int temp;

    for (auto it = v1.begin();it!=v1.end();it++){
        //cout << "v1 :" << *it << endl;

        if (*it < v2[0]){
            continue;
        }

        for (checkPoint;checkPoint!=v2.end();checkPoint++){
            //cout << "v2 :" << *checkPoint << endl;
            if (*it==*checkPoint){
                //cout << "found :" << *it << endl;
                temp=*it;
                intersected.push_back(*it);
                while (*it==temp && it!=v1.end()){
                    it++;
                };
                while (*checkPoint==temp && checkPoint!=v2.end()) {
                    checkPoint++;
                };
                it--;
                checkPoint--;
                break;
            };
            if (*it<*checkPoint){
                break;
            };
        };

    };

    for(auto print = intersected.begin();print!=intersected.end();print++){
        cout << *print << " ";
    };



}
