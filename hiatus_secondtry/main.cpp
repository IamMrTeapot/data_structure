#include <iostream>
#include <vector>
#include <algorithm>>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m , year , month;
    cin >> n >> m;
    vector<pair<int,int>> data;
    data.push_back(pair<int,int> (-1,-1));
    for (int i=0;i<n;i++){

        cin >> year >> month ;
        data.push_back(pair<int,int> (year,month));
    }

    sort(data.begin(),data.end());


    for (int j=0;j<m;j++){
        cin >> year >> month;

        pair<int,int> temp(year,month);

        auto lower = lower_bound(data.begin(),data.end(),temp);
        int indexLower = lower-data.begin();

        if (data[indexLower]==temp){
            cout << "0 0 " ;
            continue;
        }
        cout << data[indexLower-1].first << " " << data[indexLower-1].second << " ";

    }
}
