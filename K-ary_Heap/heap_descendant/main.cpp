#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,a;
    cin >> n >> a;
    int child=a;
    int level = 2;
    vector<int> result = {a};
//    cout << a << " ";
    bool flag = false;
    while (child<n){
        child = child*2 +1;
        for (int j=0;j<level;j++){
            if(child+j<n){
                //cout << child+j << " ";
                result.push_back(child+j);
            } else {
                break;
                flag = true;
            }
        }
        level*=2;
        if (flag) {
            break;
        }

    }
    cout << result.size() << "\n";
    for (auto e : result){
        cout << e << " ";
    }

}
