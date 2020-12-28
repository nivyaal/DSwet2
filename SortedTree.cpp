#include <iostream>
#include "include/SortedTree.h"

void SortedTree::removeClass(int course_id, int class_num, int time)
{
    mega_tree.erase(TripletKey(time, course_id, class_num));
}

void SortedTree::addClassView(int course_id, int class_num, int time)
{

    mega_tree.insert(TripletKey(time, course_id, class_num), TripletKey(time, course_id, class_num));
}

int SortedTree::getSize() const
{
    return mega_tree.getTreeSize();
}

void SortedTree::GetIthWatchClass(const int i, int *course_id, int *class_id) const
{

    TripletKey *class_info = mega_tree.getIthElement(i);
    if (class_info == nullptr)
    {
        throw Failure();
    }
    *course_id = class_info->getCourseId();
    *class_id = class_info->getClassNum();
}