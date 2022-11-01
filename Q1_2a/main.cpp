#include <iostream>
#include <queue>
#include <vector>



using namespace std;

int main()
{
    int n,m,inp;
    cin >> n >> m ;
    vector<int> question;
    vector<int> profit;
    queue<int> q1,q2;

    for(int i =0;i<m;i++){
        cin >> inp;
        question.push_back(inp);

    }
    int com,res,value;
    int money=0;
    for(int i=0;i<n;i++){

        cin >> com;
        if (com == 1){
            cin >> res >> value;

            if (res ==1) {
                q1.push(value);
            } else {
                q2.push(value);
            }
        } else {
            if (!q1.empty() && !q2.empty()){
                if (q1.front()<=q2.front()){
                    money+=q1.front();
                    profit.push_back(money);
                    q1.pop();
                } else {
                    money+=q2.front();
                    profit.push_back(money);
                    q2.pop();
                }
            } else if (!q1.empty() && q2.empty()){
                money+=q1.front();
                profit.push_back(money);
                q1.pop();
            } else if (q1.empty() && !q2.empty()){
                money+=q2.front();
                profit.push_back(money);
                q2.pop();
            }

        }

    }

    for (int j=0;j<(question.end()-question.begin());j++){
        auto lower = lower_bound(profit.begin(),profit.end(),question[j]);
        int lower_index = lower - profit.begin();
        if (lower == profit.end()){
            cout << -1 << " ";
        } else {
            cout << (lower_index+1) << " ";
        }
    }


}
