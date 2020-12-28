#ifndef SORTEDTREE_H_
#define SORTEDTREE_H_

#include "AVLtree.h"
#include "SpecialNodes.h"
#include "exceptions.h"

class SortedTree
{
    private:
    AVLtree<TripletKey,TripletKey> mega_tree;
    public:
    void removeClass(int course_id,int class_num,int time);
    void addClassView(int course_id,int class_num,int time);
    int getSize() const;
    void GetIthWatchClass(const int i, int* course_id, int* class_id) const;
};

#endif
