#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,num;
    cin >> n >> m;
    vector<int> data;
    vector<bool> sum(2000001,0);

    for (int i=0; i<n;i++){
        cin >> num;
        data.push_back(num);
        for (int j=0;j<i;j++){
            sum[num+data[j]]=1;
        };
    };
    for(int j=0;j<m;j++){
        cin >> num;
        if (sum[num]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        };
    };

}
