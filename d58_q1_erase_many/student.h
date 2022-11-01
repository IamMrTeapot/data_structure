#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  CP::vector<T> a;
  int j=0;

  for (size_t i = 0;i<size();i++){

    if (j<pos.size() && i==pos[j]){
        j++;
    } else {
        a.push_back(mData[i]);
    }

  }
  mData = new T[a.capacity()]();
  mCap = a.capacity();
  mSize = a.size();
  for (size_t i = 0;i < a.size();i++) {
    mData[i] = a[i];
  }

}

#endif
