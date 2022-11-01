#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v(A);
    vector<T> t(A);
    sort(t.begin(),t.end());
    for (int i =0; i< B.size();i++){
        bool inside = false;
        auto it = lower_bound(t.begin(),t.end(),B[i]);
        if(*it == B[i]){
            inside = true;
        }
        if (!inside){
            v.push_back(B[i]);
        }

    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<T> t(B);
    sort(t.begin(),t.end());
    for (int i =0; i< A.size();i++){
        bool inside = false;
        auto it = lower_bound(t.begin(),t.end(),A[i]);
        if(*it == A[i]){
            inside = true;
        }
        if (inside){
            v.push_back(A[i]);
        }

    }

    return v;
}
