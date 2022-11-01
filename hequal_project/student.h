#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if(size()!=other.size()){
    return false;
  } else {
    CP::priority_queue<T,Comp> a(other);
    CP::priority_queue<T,Comp> b(*this);
    while(!b.empty()){
        if(b.top()!=a.top()){
            return false;
        }
        b.pop();
        a.pop();
    }
  }

  return true; // you can change this line
}

#endif
