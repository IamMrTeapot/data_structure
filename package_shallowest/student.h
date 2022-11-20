#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
    if(n==NULL){
        return -1;
    } else {
        auto left = shallowest_leaf(n->left);
        auto right = shallowest_leaf(n->right);
        if(n->left ==NULL){
            left = right;
        }
        if(n->right == NULL){
            right = left;
        }

        return 1+std::min(left,right);
    }
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
    return shallowest_leaf(mRoot);
  //write your code here
}


#endif
