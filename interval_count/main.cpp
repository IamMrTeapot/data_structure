#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,k,p,countt;
    vector<int> data;
    cin >> n >> m >> k ;
    for (int i=0;i<n;i++){
        cin >> p;
        data.push_back(p);
    }
    sort(data.begin(),data.end());

    for (int i=0;i<m;i++){
        cin >> p;
        auto lower = lower_bound(data.begin(),data.end(),(p-k));
        auto upper = upper_bound(data.begin(),data.end(),(p+k));
        int lowerIndex = lower-data.begin();
        int upperIndex = upper-data.begin();

        cout << upperIndex-lowerIndex << " ";

    }
}
