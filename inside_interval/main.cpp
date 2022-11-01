#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int N,M,x;
    vector<int> toSort;
    cin >> N >> M;
    for(int i=0;i<(N*2);i++){
        cin >> x;
        toSort.push_back(x);
    }
    sort(toSort.begin(),toSort.end());
    for(int i=0;i<M;i++){
        cin >> x;
        auto upper = upper_bound(toSort.begin(),toSort.end(),x);
        int index = upper-toSort.begin();
        if (toSort[index-1]==x){
            cout << 1 << " ";
            continue;
        }
        if (index%2==0) {
            cout<< 0 << " ";
        } else {
            cout << 1 << " ";
        }

    }


}
