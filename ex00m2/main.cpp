#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,M,A,number;
    cin >> N >> M >> A;
    map<int,map<int,int>> user_order;
    vector<int> item_count;
    vector<vector<pair<int,int>>> item_order;
    vector<vector<int>> ans;

    for (int i=0;i<N;i++){
        cin >> number;
        item_count.push_back(number);
    }

    string com;
    int U,I,V;

    for (int i=0;i<A;i++){
        cin >> com;
        if (com == "B"){
            cin >> U >> I >> V;
            user_order[U][I] = V;

        } else if (com == "W"){

            cin >> U >> I;
            auto pos = user_order[U].find(I);
            if (pos!= user_order[U].end()){
                user_order[U].erase(pos);
            }

        }

    }

    for (int i=0;i<N;i++){
        auto it = user_order.find(i);
        item_order.push_back(vector<pair<int,int>> {});
        if (it!= user_order.end()){
            for(auto e:user_order[i])
        }

    }




}
