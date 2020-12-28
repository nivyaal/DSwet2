#include <iostream>
#include "include/library2.h"
#include "include/CoursesManager.h"

//    CoursesTable courses_table;
//    SortedTree watch_tree;
StatusType CoursesManager::addCourse ( const int courseID)
{
   try
   {
       courses_table.addCourse(courseID);
   }
    catch(Failure&)
    {
        return FAILURE;
    }
    catch (InvalidInput&)
    {
        return INVALID_INPUT;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;
}

StatusType CoursesManager::addClass ( const int courseID,int* classID)
{
    try
    {
        *classID = courses_table.addClass(courseID);
    }
    catch(Failure&)
    {
        return FAILURE;
    }
    catch (InvalidInput&)
    {
        return INVALID_INPUT;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;
}

StatusType CoursesManager::removeCourse(const int courseID)
{
    try
    {
        Triplet<int, int, std::shared_ptr<DynamicArray<Pair<int,int>>>>* course_info = courses_table.getCourseInfo(courseID); 
        int num_of_classes = course_info->second;
        std::shared_ptr<DynamicArray<Pair<int,int>>> classes_table = course_info->third;
        for (int i=0; i< num_of_classes ; i++)
        {
            int class_time_viewed = (*classes_table)[i].second;
            if ( class_time_viewed > 0)
            {
                watch_tree.removeClass(courseID, i, class_time_viewed);
            }
        }
        courses_table.removeCourse(courseID);
    }
    catch(Failure&)
    {
        return FAILURE;
    }
    catch (InvalidInput&)
    {
        return INVALID_INPUT;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;
}


StatusType CoursesManager::watchClass(const int courseID,const int classID,const int time)
{
    try
    {
        int old_time=courses_table.getTimeOfClass(courseID,classID);
        courses_table.watchClass(courseID,classID,time);
        int updated_time=time+old_time;
        watch_tree.removeClass(courseID,classID,old_time);
        watch_tree.addClassView(courseID,classID,updated_time);
    }
    catch(Failure&)
    {
        return FAILURE;
    }
    catch (InvalidInput&)
    {
        return INVALID_INPUT;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;
}
StatusType CoursesManager::timeViewed(const int courseID, const int classID, int *timeViewed)
{
    try
    {
        *timeViewed=courses_table.getTimeOfClass(courseID,classID);
    }
    catch(Failure&)
    {
        return FAILURE;
    }
    catch (InvalidInput&)
    {
        return INVALID_INPUT;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;
}
StatusType CoursesManager::getIthViewedClass(const int i, int *courseID, int *classID)
{
    try
    {
        watch_tree.GetIthWatchClass(i,courseID,classID);
    }
    catch(Failure&)
    {
        return FAILURE;
    }
    catch (InvalidInput&)
    {
        return INVALID_INPUT;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;
}