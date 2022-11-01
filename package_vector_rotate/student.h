#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
    CP::vector<T> a(last-first);
    int j =0;
    for (auto it = first;it!=last;it++){
        a[j++]=(*it);
    }
    for (auto it = first;it!=last;it++){
        if (k>(last-first-1)){
            k-=(last-first);
        }
        *it = a[k++];
    }




}

#endif
