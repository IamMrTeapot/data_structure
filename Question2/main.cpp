#include <iostream>

using namespace std;

int main()
{
    int N,M,R;
    cin >> N >> M >> R;
    int arr[N][M];
    for (int i=0; i<N ; i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
        };
    };

    int r1,c1,r2,c2, maxx;

    for (int r=0; r<R ; r++) {
        cin >> r1 >> c1 >> r2 >> c2;
        r1-=1;
        c1-=1;
        r2-=1;
        c2-=1;
        int temp = c1;

        if (r1>r2 || c1>c2) {
            cout << "INVALID" << endl;
        } else if (r1+1 > N || c1+1>M) {
            cout << "OUTSIDE" << endl;
        } else {
            maxx= arr[r1][c1];
            for (r1; r1<=r2 && r1<N; r1++) {
                for (c1; c1<=c2 && c1<M;c1++) {
                    if (arr[r1][c1]>maxx) {
                        maxx=arr[r1][c1];
                    }
                }
                c1=temp;

            }
            cout << maxx << endl;
        }
    }


    return 0;
}
