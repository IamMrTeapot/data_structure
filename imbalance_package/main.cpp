#include <iostream>
#include "map_bst.h"
using namespace std;

int main()
{
    CP::map_bst<int, int> m;
    int n,k;
    cin >> n;
    for(int i =0;i<n;i++){
        cin>>k;
        m[k];
    }
    std::cout<<m.getValueOfMostImbalanceNode()<<endl;
    return 0;
}
