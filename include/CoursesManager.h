#ifndef COURSESMANAGER_H_
#define COURSESMANAGER_H_

#include "CoursesTable.h"
#include "SortedTree.h"
#include "library2.h"

class CoursesManager
{
    private:
    CoursesTable courses_table;
    SortedTree watch_tree;
    public:
    StatusType addCourse ( const int courseID);
    StatusType addClass ( const int courseID,int* classID);
    StatusType removeCourse(const int courseID);
    StatusType watchClass(const int courseID,const int classID,const int time);
    StatusType timeViewed(const int courseID, const int classID, int *timeViewed);
    StatusType getIthViewedClass(const int i, int *courseID, int *classID);
};

#endif