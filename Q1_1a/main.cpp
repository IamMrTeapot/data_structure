#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v,vector<pair<vector<int>::iterator,int>> &multiply) {
 //write your code here
    vector<pair<int,int>> indexes;
    vector<int> temp;
    int index;
    int start =0;
    for(auto e : multiply){
        index = e.first-v.begin();
        indexes.push_back(pair<int,int> (index,e.second));
    }

    sort(indexes.begin(),indexes.end());
    for (int go=0;go<v.end()-v.begin();go++ ){
        if (go==indexes[start].first){
            for (int i = 0 ; i<indexes[start].second;i++){
                temp.push_back(v[go]);
            }
            if (start < (indexes.end()-indexes.begin()-1)){
                start++;
            }
        }
        temp.push_back(v[go]);
    }

    v = temp;
}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n);
 vector<pair<vector<int>::iterator,int>> multiply(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) {
 int a,b;
 cin >> a >> b;
 multiply[i].first = v.begin()+a;
 multiply[i].second = b;
 }
 member_multiply(v,multiply);
 cout << "======= result ========" << endl;
 cout << v.size() << endl;
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
