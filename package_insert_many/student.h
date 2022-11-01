#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
    CP::vector<T> a;
    sort(data.begin(),data.end());
    int j =0;
    for (int i = 0 ; i<= size();i++){

        if (j<data.size() && i==data[j].first){
            a.push_back(data[j].second);
            j++;
        }
        if(i!=size()){
            a.push_back(mData[i]);
        }

    }

    *this = a;




}

#endif
