#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
    bool check = false;
    if (a-begin()>=0 && b-begin()>=0 && m>0){
        if (b-a > 0){
            if ((a-begin()+m-1)<(b-begin())&& (b-begin()+m-1)<size()){

                check = true;
            }
        } else if (a-b >0){
            if ((b-begin()+m-1)<(a-begin())&& (a-begin()+m-1)<size()){

                check = true;
            }

        }

    }

    if(check){
        CP::vector<T> t(m);

        for (int i =0 ; i<m;i++){
            t[i] = *(a+i);
            *(a+i) = *(b+i);

        }
        for(int i=0;i<m;i++){
            *(b+i) = t[i];
        }
        return true;
    }


     return false;
}

#endif
