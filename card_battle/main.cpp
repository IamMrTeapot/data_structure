#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,k,p,number,round ,countt;
    cin >> n >> m ;
    vector<int> deck;
    vector<int> enemy;
    for (int i=0;i<n;i++){
        cin >> number;
        deck.push_back(number);
    }

    sort(deck.begin(),deck.end());



    for (int j=0;j<m;j++){
        cin >> k;
        enemy.push_back(k);
        for (int i=0;i<k;i++){
            cin >> number;
            enemy.push_back(number);
        }
    }
    round=1;
    p=0;
    for (int j=0;j<m;j++){
        k=enemy[p];
        countt=0;
        for (int i=p+1;i<(p+1+k);i++){

            //enemy[i] = number;
            auto upper = upper_bound(deck.begin(),deck.end(),enemy[i]);
            if (upper == deck.end()){
                break;
            } else {
                deck.erase(upper);
            }
            countt+=1;
        }
        if (countt!=k){
            break;
        }
        p+=(k+1);
        round+=1;
    }

    cout << round;

}
