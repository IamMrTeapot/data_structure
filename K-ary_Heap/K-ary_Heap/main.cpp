#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long k;
    cin >> n >> k;
    int height =0;
    long long old_value=1;
    long long maxx =1;
    while (n>maxx && k!=1){
        height++;
        old_value*=k;
        maxx+=(old_value);
    }
    if (k==1){
      cout << n-1;
    } else {
      cout << height;

    }

}
