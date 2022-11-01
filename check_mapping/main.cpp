#include <iostream>
#include <map>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    map<int,int> check;

    for(int i=1;i<=a;i++){
        cin >> b;
        if(b > a || b<=0){
            break;
        }
        check[b]=i;

    }
    if (check.size()!=a){
        cout << "NO";
    } else {
        cout<< "YES";
    }


}
