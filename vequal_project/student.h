#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const {
  //write your code only in this function
    bool check = true;
    if(size()==other.size()){
        for (int i =0; i<size();i++){
            if(mData[i]!=other[i]){
                check = false;
            }
        }
    } else {
        check = false;
    }

    return check;

}

#endif
