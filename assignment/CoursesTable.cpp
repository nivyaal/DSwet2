#include "CoursesTable.h"
#include <memory>
#include "Triplet.h"

void CoursesTable::addCourse(int course_id)
{
    if (courses.find(course_id) != nullptr)
    {
        throw Failure();
    }

    Triplet<int, int, std::shared_ptr<DynamicArray<Pair<int, int>>>> course_info(course_id, 0, std::shared_ptr<DynamicArray<Pair<int, int>>>(new DynamicArray<Pair<int, int>>));
    courses.insert(course_id, course_info);
}

void CoursesTable::removeCourse(const int course_id)
{
    if (courses.find(course_id) == nullptr)
    {
        throw Failure();
    }
    courses.erase(course_id);
}

int CoursesTable::addClass(const int course_id)
{
    Triplet<int, int, std::shared_ptr<DynamicArray<Pair<int, int>>>> *course_info = courses.find(course_id);
    if (course_info == nullptr)
    {
        throw Failure();
    }
    course_info->third->push(Pair<int, int>(0, 0));
    return course_info->second++;
}

void CoursesTable::watchClass(const int course_id, const int class_num, const int time)
{
    Triplet<int, int, std::shared_ptr<DynamicArray<Pair<int, int>>>> *course_info = courses.find(course_id);
    int current_time = getTimeOfClass(course_id, class_num);
    std::shared_ptr<DynamicArray<Pair<int, int>>> classes_table = course_info->third;
    (*classes_table)[class_num].second = time + current_time;
    (*classes_table)[class_num].first++;
}

int CoursesTable::getTimeOfClass(const int course_id, const int class_num)
{
    Triplet<int, int, std::shared_ptr<DynamicArray<Pair<int, int>>>> *course_info = courses.find(course_id);
    if (course_info == nullptr)
    {
        throw Failure();
    }
    int biggest_class = course_info->second;
    if (biggest_class <= class_num)
    {
        throw InvalidInput();
    }
    std::shared_ptr<DynamicArray<Pair<int, int>>> classes_table = course_info->third;
    int time_viewed = (*classes_table)[class_num].second;
    return time_viewed;
}

Triplet<int, int, std::shared_ptr<DynamicArray<Pair<int, int>>>> *CoursesTable::getCourseInfo(const int courseID)
{
    auto temp = courses.find(courseID);
    if (temp == nullptr)
    {
        throw Failure();
    }
    return temp;
}