#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,w,number;
    cin >> n >> w;
    vector<int> data;
    vector<int> toSort;
    for (int i=0;i<n;i++){
        cin >> number;
        data.push_back(number);
        toSort.push_back(number);
    }

    toSort.resize(w+1);

    sort(toSort.begin(),toSort.end());

    for (int i=0;i<(n-w);i++){

        cout << toSort[w/2] << " ";
        toSort.erase(find(toSort.begin(),toSort.end(),data[i]));
        auto upper = upper_bound(toSort.begin(),toSort.end(),data[i+w+1]);
        toSort.insert(upper,data[i+w+1]);

    }


}
