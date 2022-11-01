#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N,M;
    long long F,S,x,y;
    cin >> N >>M;
    map<long long , long long> data;
    map<long long , long long>::iterator it;
    for (int i =0; i<N;i++){
        cin >> F >> S;
        data[S]=F;
    };
    for (int j =0;j<M;j++){
        cin >> x>> y;
        if (x==y){
            cout<< "NO" << endl;
            continue;
        };
        if (((it = data.find(x))!=data.end())&&((it = data.find(y))!=data.end())){
            if (((it = data.find(data[x]))!=data.end())&&((it = data.find(data[y]))!=data.end())){
                if (data[data[x]]==data[data[y]]){
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                };
            } else {
                cout << "NO" << endl;
            };
        } else {
            cout << "NO" << endl;

        };
    };
}
