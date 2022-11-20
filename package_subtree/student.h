#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if ( n== NULL) {
    return 0;
  } else {
    return 1+process(n->left)+process(n->right);
  }

}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if(mRoot==NULL){
    return std::pair<KeyT,MappedT>();
  }
  left.clear();
  right.clear();
  if(mRoot->left==NULL){
    left.mRoot = NULL;
    left.mSize = 0;
  } else {
    auto Lsize = process(mRoot->left);
    left.mRoot = mRoot->left;
    left.mSize = Lsize;
    right.mRoot->parent = NULL;
  }
  if(mRoot->right == NULL){
    right.mRoot = NULL;
    right.mSize=0;
  } else {
    auto Rsize = process(mRoot->right);
    right.mRoot = mRoot->right;
    right.mSize = Rsize;
    right.mRoot->parent = NULL;
  }
  mRoot->left =NULL;
  mRoot->right = NULL;
  mSize=1;

  return mRoot->data;



}

#endif

