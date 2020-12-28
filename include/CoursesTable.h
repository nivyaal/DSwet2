#ifndef HASHATABLE_h
#define HASHATABLE_h


#include <iostream>
#include "HashTable.h"
#include "Triplet.h"
#include "DynamicArray.h"
#include "exceptions.h"
#include "memory"
#include "Pair.h"

class CoursesTable{

    HashTable<Triplet<int, int, std::shared_ptr<DynamicArray<Pair<int,int>>>>> courses;
    public:
    void addCourse( int course_id);
    void removeCourse(const int course_id);
    void addClass(const int course_id);
    void watchClass(const int course_id,const int class_num,const int time);
    int getTimeOfClass(const int course_id,const int class_num) ;

};

#endif 