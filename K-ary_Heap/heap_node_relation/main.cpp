#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,m,n,cal;
    cin >> n >> m;
    for (int i =0 ; i< m ;i++){
        cal=1;
        cin >> a >> b;
        if (a==b){
            cout << "a and b are the same node\n";
        } else if ((log2(a)/1)<(log2(b)/1)) {
            while(a<b){
                b=(b-1)/2;
            }
            if (b==a){
                cout << "a is an ancestor of b\n";
            } else {
                cout << "a and b are not related\n";
            }

        } else if ((log2(a)/1)>(log2(b)/1)){
            while(b<a){
                a=(a-1)/2;
            }
            if (b==a){
                cout << "b is an ancestor of a\n";
            } else {
                cout << "a and b are not related\n";
            }

        } else {
            cout << "a and b are not related\n";
        }
    }

}
