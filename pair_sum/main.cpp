#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int num;
    vector<int> toSearch;
    set<int> sum,data,double_data;

    for (int i=0;i<n;i++){
        cin >> num;
        if (data.find(num) == data.end()){

            for (int x : data) {
              sum.insert(num+x);
            };
            data.insert(num);
        } else {
            sum.insert(num*2);
        };

    };




    for (int j=0;j<m;j++){
        cin >> num;
        if (sum.find(num)!=sum.end()){
            cout << "YES" <<endl;
        } else {
            cout << "NO" << endl;
        };
    };




}
