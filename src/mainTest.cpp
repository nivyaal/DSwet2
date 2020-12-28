#include <iostream>
#include "include/CoursesManager.h"
int main()
{
    CoursesManager op;
    int * classID = new int;
    int* courseID= new int;
    int* timeViewed= new int;
    op.addCourse(1);
    op.addClass(1,classID);
    op.watchClass(1,0,100);
    op.timeViewed(1,0,timeViewed);
    op.getIthViewedClass(1,courseID,classID);
    std::cout<<"kk"<<std::endl;
}