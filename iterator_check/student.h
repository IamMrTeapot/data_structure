#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
    for (int i =0; i<size();i++){
        auto it2 = &mData[i];
        if (it2==it){
            return true;
        }


    }

    return false;
}

#endif
