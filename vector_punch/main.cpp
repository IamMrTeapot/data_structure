#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
 //write some code here
 //don’t forget to return something

 int index = it - v.begin();
 int start = max(index-k,0);
 int stop = min(index+k, (int)(v.end()-v.begin())-1);
 int distance = stop-start+1;


 for (int i=0; i<distance;i++){
    v.erase(v.begin()+start);
 };

 return v;

}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}
