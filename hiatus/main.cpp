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

        for (int k=n;k>-1;k--){
            //cout << k;

            if (data[k].first == year && data[k].second == month){
                cout << "0 0 ";
                break;
            } else if (data[k].first <= year ) {

                if (data[k].second < month){
                    cout << data[k].first << " " << data[k].second << " ";
                    break;
                }

            }
        }

    }


}
