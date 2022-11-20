void replace(const T& x, list<T>& y) {
  //write your code here
    auto it = begin();
    while(it!=end()){

        if(*it == x){
            list<T> ltmp = y;

            auto tmp = it.ptr;
            it.ptr = tmp->next;
            tmp->prev->next = ltmp.mHeader->next;
            tmp->next->prev = ltmp.mHeader->prev;
            ltmp.mHeader->next->prev = tmp->prev;
            ltmp.mHeader->prev->next = tmp->next;

        } else {
            ++it;
        }

    }
}
