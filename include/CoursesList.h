#ifndef COURSESLIST_H_
#define COURSESLIST_H_

#include "DynamicArray.h"
#include "exceptions.h"
#include "List.h"
#include "Triplet.h"
#include "Pair.h"

class CoursesList
{

private:
    List<Triplet<int, DynamicArray<Pair<int, int>>, int>> list;

public:
    void AddCourse(const int courseID);
    void RemoveCourse(int courseID);
    void addClass(const int courseID, int *classID);
    void addView(const int courseID, const int classID, const int time);
    int getTimeViewed(const int courseID, const int classID);
};

void CoursesList::AddCourse(const int courseID)
{
    Triplet<int, DynamicArray<Pair<int, int>>, int> new_course(courseID, DynamicArray<Pair<int, int>>(), 0);
    if (list.find(new_course) != nullptr)
    {
        throw Failure();
    }
    list.insertStart(new_course);
}

void CoursesList::RemoveCourse(int courseID)
{
    if (list.find(Triplet<int, DynamicArray<Pair<int, int>>, int>(courseID)) == nullptr)
    {
        throw Failure();
    }
    list.remove(Triplet<int, DynamicArray<Pair<int, int>>, int>(courseID));
}

void CoursesList::addClass(const int courseID, int *classID)
{
    auto tmp = list.find(Triplet<int, DynamicArray<Pair<int, int>>, int>(courseID));
    if (tmp == nullptr)
    {
        throw Failure();
    }
    else
    {
        auto classes_arr = tmp->second;
        *classID = tmp->third; //num of courses intialized so far counter
        (tmp->third)++;
        classes_arr.push(Pair<int, int>(0, 0));
    }
}

void CoursesList::addView(const int courseID, const int classID, const int time)
{
    auto tmp = list.find(Triplet<int, DynamicArray<Pair<int, int>>, int>(courseID));
    int curr_time = getTimeViewed(courseID, classID);
    tmp->second[classID].second = curr_time + time;
    tmp->second[classID].first++;
}

int CoursesList::getTimeViewed(const int courseID, const int classID)
{
    auto tmp = list.find(Triplet<int, DynamicArray<Pair<int, int>>, int>(courseID));
    if (tmp == nullptr)
    {
        throw Failure();
    }
    auto classes_array = tmp->second;
    auto num_of_classes = tmp->third;
    if (num_of_classes <= classID)
    {
        throw InvalidInput();
    }
    return classes_array[classID].second;
}
#endif