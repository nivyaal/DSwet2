
#include "include/CoursesTable.h"
int main()
{   

    CoursesTable myTable;
    myTable.addCourse(1);
    myTable.addCourse(2);
    myTable.addCourse(3);

    myTable.addClass(1);
    myTable.addClass(2);
    myTable.addClass(3);
    myTable.watchClass(1,0,1);
    myTable.watchClass(2,0,2);
    myTable.watchClass(3,0,3);

    std::cout<<myTable.getTimeOfClass(1,0)<<std::endl;
    std::cout<<myTable.getTimeOfClass(2,0)<<std::endl;
    std::cout<<myTable.getTimeOfClass(3,0)<<std::endl;

    myTable.removeCourse(1);
    myTable.removeCourse(2);
    myTable.removeCourse(3);
}