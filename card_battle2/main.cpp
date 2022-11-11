#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,number ;
    map<int,int> deck;

    cin >> n >> m;
    for(int i=0;i<n;i++){

        cin >> number;

        if (deck.find(number)==deck.end()){

            deck[number]=1;

        } else {
            deck[number]+=1;
        }

    }
    int round =1;
    int l;
    int answer = -1;
    bool won = true;
    for(int j=0;j<m;j++){

        cin>>l;

        for (int k=0;k<l;k++){
            cin >> number;
            auto it = deck.upper_bound(number);
            if (it == deck.end()){
                won = false;
            } else {
                if (deck[it->first]==1){
                    deck.erase(it);
                } else {
                    deck[it->first]-=1;
                }
            }

        }

        if (won) {
            round+=1;
        } else {
            answer= round;
        }

    }

    if (answer!=-1){
        cout<< answer;
    } else {
        cout << round;
    }



}
