#include "include/CoursesManager.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <time.h>
#include <algorithm>
#include "include/SpecialNodes.h"

#define TEST_ADD_REMOVE_PARMATER 3
#define TEST_ADDCLASS_PARMATER 1
#define TEST_CHECK_TIME 1
#define POLL 10   // 0-POLL is the range of courseIDs
int cnt = 0;      // Counter for each DS
int line_cnt = 0; // Counter for the printed lines in test.cpp

using namespace std;
typedef enum
{
    SUC = 3,
    FAIL = 4,
    NOVALUE = 5,
    INVALID = 6
} ResultType;
void writeAddCourse(ResultType res, int classID);
void writeRemove(ResultType res, int courseID);
void writeGet(ResultType res, int i, int askedCourse, int askedClass);
void writeAddClass(ResultType res, int courseID, int newClassNum);
void writeEmptyInit();
void writeWatchClass(ResultType res, int courseID, int newClassNum, int time);
bool ChanceOfThird();
bool ChanceOfTenth();
bool ChanceOfHalf();
int getRandomKey(map<int, int>);
int getRandomKey(map<int, map<int, int>>);
void checkTime();

void writeGet(ResultType res, int i, int askedCourse, int askedClass)
{
    std::cout << "//Line Number: " + to_string(line_cnt) << std::endl;
    line_cnt++;
    if (res == FAIL)
    {
        std::cout << "ASSERT_TEST(GetIthWatchedClass(DS" + to_string(cnt) + "," + to_string(i) + ",courseID,classID)==FAILURE);" << std::endl;
    }
    else if (res == SUC)
    {
        std::cout << "ASSERT_TEST(GetIthWatchedClass(DS" + to_string(cnt) + "," + to_string(i) + ",courseID,classID)==SUCCESS);" << std::endl;
        std::cout << "ASSERT_TEST(*courseID==" + to_string(askedCourse) + ");" << std::endl;
        std::cout << "ASSERT_TEST(*classID==" + to_string(askedClass) + ");" << std::endl;
    }
    else if (res == NOVALUE)
    {
        //std::cout << "AddCourse(DS" + to_string(cnt) + "," + to_string(i) + ");" << std::endl;
    }
    else
    {
        std::cout << "ASSERT_TEST(GetIthWatchedClass(DS" + to_string(cnt) + "," + to_string(i) + ",courseID,classID)==INVALID_INPUT);" << std::endl;
    }
}

void writeWatchClass(ResultType res, int courseID, int classNum, int added_time, int total_time)
{
    std::cout << "//Line Number: " + to_string(line_cnt) << std::endl;
    line_cnt++;
    if (res == FAIL)
    {
        std::cout << "ASSERT_TEST(WatchClass(DS" + to_string(cnt) + "," + to_string(courseID) + "," + to_string(classNum) + "," + to_string(added_time) + ")==FAILURE);" << std::endl;
        std::cout << "ASSERT_TEST(TimeViewed(DS" + to_string(cnt) + "," + to_string(courseID) + "," + to_string(classNum) + ",timeviewed)==FAILURE);" << std::endl;
    }
    else if (res == SUC)
    {
        std::cout << "ASSERT_TEST(WatchClass(DS" + to_string(cnt) + "," + to_string(courseID) + "," + to_string(classNum) + "," + to_string(added_time) + ")==SUCCESS);" << std::endl;
        std::cout << "ASSERT_TEST(TimeViewed(DS" + to_string(cnt) + "," + to_string(courseID) + "," + to_string(classNum) + ",timeviewed)==SUCCESS);" << std::endl;
        std::cout << "ASSERT_TEST(*timeviewed==" + to_string(total_time) + ");" << std::endl;
    }
    else if (res == INVALID)
    {
        if (added_time > 0)
        {
            std::cout << "ASSERT_TEST(WatchClass(DS" + to_string(cnt) + "," + to_string(courseID) + "," + to_string(classNum) + "," + to_string(added_time) + ")==INVALID_INPUT);" << std::endl;
            std::cout << "ASSERT_TEST(TimeViewed(DS" + to_string(cnt) + "," + to_string(courseID) + "," + to_string(classNum) + ",timeviewed)==INVALID_INPUT);" << std::endl;
        }
        else
        {
            std::cout << "ASSERT_TEST(WatchClass(DS" + to_string(cnt) + "," + to_string(courseID) + "," + to_string(classNum) + "," + to_string(added_time) + ")==INVALID_INPUT);" << std::endl;
        }
    }
    return;
}

void writeAddClass(ResultType res, int courseID, int newClassNum)
{
    std::cout << "//Line Number: " + to_string(line_cnt) << std::endl;
    line_cnt++;
    if (res == FAIL)
    {
        std::cout << "ASSERT_TEST(AddClass(DS" + to_string(cnt) + "," + to_string(courseID) + ",classID)==FAILURE);" << std::endl;
    }
    else if (res == SUC)
    {
        std::cout << "ASSERT_TEST(AddClass(DS" + to_string(cnt) + "," + to_string(courseID) + ",classID)==SUCCESS);" << std::endl;
        std::cout << "ASSERT_TEST(*classID==" + to_string(newClassNum) + ");" << std::endl;
    }
    else if (res == INVALID)
    {
        std::cout << "ASSERT_TEST(AddClass(DS" + to_string(cnt) + "," + to_string(courseID) + ",classID)==INVALID_INPUT);" << std::endl;
    }
}

std::vector<TripletKey> mapSort(map<int, map<int, int>> mymap)
{
    std::vector<TripletKey> watched_vector;
    {
        for (auto it1 = mymap.begin(); it1 != mymap.end(); ++it1)
        {
            int num_of_class = 0;
            for (auto it2 = it1->second.begin(); it2 != it1->second.end(); ++it2)
            {
                if (it2->second > 0)
                {
                    watched_vector.push_back(TripletKey(it2->second, it1->first, num_of_class));
                }
                num_of_class++;
            }
        }
    }
    std::sort(watched_vector.begin(), watched_vector.end());
    return watched_vector;
}

void writeAddCourse(ResultType res, int classID)
{
    std::cout << "//Line Number: " + to_string(line_cnt) << std::endl;
    line_cnt++;
    if (res == FAIL)
    {
        std::cout << "ASSERT_TEST(AddCourse(DS" + to_string(cnt) + "," + to_string(classID) + ")==FAILURE);" << std::endl;
    }
    else if (res == SUC)
    {
        std::cout << "ASSERT_TEST(AddCourse(DS" + to_string(cnt) + "," + to_string(classID) + ")==SUCCESS);" << std::endl;
    }
    else if (res == NOVALUE)
    {
        std::cout << "AddCourse(DS" + to_string(cnt) + "," + to_string(classID) + ");" << std::endl;
    }
    else
    {
        std::cout << "ASSERT_TEST(AddCourse(DS" + to_string(cnt) + "," + to_string(classID) + ")==INVALID_INPUT);" << std::endl;
    }
}

void writeRemove(ResultType res, int courseID)
{
    std::cout << "//Line Number: " + to_string(line_cnt) << std::endl;
    line_cnt++;
    if (res == FAIL)
    {
        std::cout << "ASSERT_TEST(RemoveCourse(DS" + to_string(cnt) + "," + to_string(courseID) + ")==FAILURE);" << std::endl;
    }
    else if (res == SUC)
    {
        std::cout << "ASSERT_TEST(RemoveCourse(DS" + to_string(cnt) + "," + to_string(courseID) + ")==SUCCESS);" << std::endl;
    }
    else if (res == NOVALUE)
    {
        std::cout << "RemoveCourse(DS" + to_string(cnt) + "," + to_string(courseID) + ");" << std::endl;
    }
    else
    {
        std::cout << "ASSERT_TEST(RemoveCourse(DS" + to_string(cnt) + "," + to_string(courseID) + ")==INVALID_INPUT);" << std::endl;
    }
}
bool ChanceOfHalf()
{
    int a = rand() % 2;
    return a == 1;
}

bool ChanceOfThird()
{
    int a = rand() % 3;
    return a == 2;
}

bool ChanceOfTenth()
{
    int a = rand() % 10;
    return a == 9;
}

int getRandomCourseNum()
{

    return rand() % POLL + 1;
}
int getRandomKey(map<int, int> M)
{
    if (M.size() == 0)
    {
        std::cout << "zain alyiha" << std::endl;
    }
    auto it = M.begin();
    std::advance(it, rand() % M.size());
    return it->first;
}
int getRandomKey(map<int, map<int, int>> M)
{
    auto it = M.begin();
    std::advance(it, rand() % M.size());
    return it->first;
}
void writeEmptyInit()
{
    std::cout << "//Line Number: " + to_string(line_cnt) << std::endl;
    line_cnt++;
    cnt++;
    std::cout << "void *DS" + to_string(cnt) + "=Init();" << std::endl;
}

void CheckAddRemove()
{
    vector<int> v;
    writeEmptyInit();
    for (int i = 0; i < TEST_ADD_REMOVE_PARMATER; i++)
    {
        int class_id = i;
        if (ChanceOfTenth()) // Every 10 inserts insert INVALID
        {
            class_id = -class_id;
            if (ChanceOfHalf())
            {
                writeAddCourse(INVALID, class_id);
            }
            else
            {
                writeRemove(INVALID, class_id);
            }
        }
        int courseID = getRandomCourseNum();
        if (ChanceOfHalf()) // 50% chance for add function
        {
            if (std::find(v.begin(), v.end(), courseID) != v.end())
            {
                writeAddCourse(FAIL, courseID); //in case the course already exists
            }
            else
            {
                writeAddCourse(SUC, courseID); // in case the course doesnt exist
                v.push_back(courseID);
            }
        }
        else // 50% chance or remove function
        {
            if (std::find(v.begin(), v.end(), courseID) != v.end())
            {
                writeRemove(SUC, courseID);
                v.erase(std::remove(v.begin(), v.end(), courseID), v.end());
            }
            else
            {
                writeRemove(FAIL, courseID);
            }
        }
    }

    std::cout << "/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/" << std::endl;
}

void CheckAddClass()
{
    map<int, int> M;
    int num_of_inserts = 5;

    writeEmptyInit();
    std::cout << "//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@VALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;

    //VALID INSERTS CASE
    for (int i = 0; i < TEST_ADDCLASS_PARMATER; i++)
    {

        for (int i = 0; i < num_of_inserts; i++)
        {
            int courseID = getRandomCourseNum();
            if (M.find(courseID) == M.end())
            {
                writeAddCourse(SUC, courseID);
                M[courseID] = 0;
            }
        }

        for (int i = 0; i < num_of_inserts; i++)
        {
            if (M.size() == 0)
            {
                continue;
            }
            int courseID = getRandomKey(M);
            writeAddClass(SUC, courseID, M[courseID]++);
        }
    }
    std::cout << "//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ INVALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
              << std::endl;
    //INVALID INSERTS
    int deleted_course1;
    int deleted_course2;
    if (M.size() != 0)
    {
        deleted_course1 = getRandomKey(M);
        writeRemove(SUC, deleted_course1);
        M.erase(deleted_course1);
    }

    if (M.size() != 0)
    {
        deleted_course2 = getRandomKey(M);
        writeRemove(SUC, deleted_course2);
        M.erase(deleted_course2);
    }

    for (int i = 0; i < TEST_ADDCLASS_PARMATER; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            int courseID = getRandomCourseNum();
            if (courseID == deleted_course1 || courseID == deleted_course2)
            {
                continue;
            }
            if (M.find(courseID) == M.end())
            {
                writeAddCourse(SUC, courseID);
                M[courseID] = 0;
            }
        }

        for (int i = 0; i < num_of_inserts; i++)
        {
            if (ChanceOfHalf())
            {
                if (M.size() == 0)
                {
                    continue;
                }
                int courseID = -(getRandomKey(M));
                writeAddClass(INVALID, courseID, 5);
            }
            else
            {
                if (M.size() == 0)
                {
                    continue;
                }

                if (ChanceOfHalf())
                {
                    writeAddClass(FAIL, deleted_course1, 5);
                }
                else
                {
                    writeAddClass(FAIL, deleted_course2, 5);
                }
            }
        }
        std::cout << "//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@RANDOM INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
                  << std::endl;
        //RANDOM INSERTIONS
        for (int i = 0; i < TEST_ADDCLASS_PARMATER; i++)
        {
            int courseID = getRandomCourseNum();
            if (ChanceOfThird()) // 30% for remove function
            {
                if (M.find(courseID) != M.end())
                {
                    writeRemove(SUC, courseID);
                    M.erase(courseID);
                }
                else
                {
                    writeRemove(FAIL, courseID);
                }
            }
            else // 70% chance for add function
            {
                if (M.find(courseID) != M.end())
                {
                    writeAddCourse(FAIL, courseID); //in case the course already exists
                }
                else
                {
                    writeAddCourse(SUC, courseID); // in case the course doesnt exist
                    M[courseID] = 0;
                }
            }
            for (int j = 0; j < 10; j++)
            {
                courseID = getRandomCourseNum();
                if (M.find(courseID) == M.end())
                {
                    if (ChanceOfHalf() * ChanceOfHalf())
                    {
                        writeAddClass(INVALID, -courseID, 5);
                    }
                    writeAddClass(FAIL, courseID, 5);
                }
                else
                {
                    writeAddClass(SUC, courseID, M[courseID]++);
                }
            }
        }
        std::cout << "/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/" << std::endl;
    }
}

void checkTime()
{
    //VALID INSERTIONS
    std::cout << "//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@VALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    writeEmptyInit();
    map<int, map<int, int>> M;
    int num_of_inserts = 5;
    int num_of_removes = 2;
    int MEGA_LOOP = 2;

    for (int i = 0; i < TEST_CHECK_TIME; i++)
    {
        //inserting course/removing courses
        for (int i = 0; i < num_of_inserts; i++)
        {
            int courseID = getRandomCourseNum();
            if (ChanceOfThird())
            {
                if (M.find(courseID) != M.end())
                {
                    writeRemove(SUC, courseID);
                    M.erase(courseID);
                }
            }
            else
            {

                if (M.find(courseID) == M.end())
                {
                    writeAddCourse(SUC, courseID);
                    M[courseID] = map<int, int>();
                }
            }
        }
        //inserting class
        if (M.size() != 0)
        {

            for (int i = 0; i < num_of_inserts; i++)
            {

                int courseID = getRandomKey(M);
                writeAddClass(SUC, courseID, M[courseID].size());
                M[courseID][M[courseID].size()] = 0;
            }
            //inserting watchTime
            for (int i = 0; i < num_of_inserts; i++)
            {
                int courseID = getRandomKey(M);
                if (M[courseID].size() == 0)
                {
                    continue;
                }
                int classID = getRandomKey(M[courseID]);
                int time = rand() % 10 + 1;
                M[courseID][classID] += time;
                writeWatchClass(SUC, courseID, classID, time, M[courseID][classID]);
            }
        }
    }

    std::cout << "//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@INVALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
              << std::endl;
    //INVALID INSERTIONS
    if (M.size() != 0)
    {

        int real_course = getRandomKey(M);
        int fake_course = rand() % POLL + 1;
        while (M.find(fake_course) != M.end())
        {
            fake_course = rand() % POLL + 1;
        }
        writeWatchClass(INVALID, real_course, -5, 5, 5);
        writeWatchClass(INVALID, real_course, 5, -5, 5);
        writeWatchClass(INVALID, real_course, -5, -5, 5);
        writeWatchClass(INVALID, fake_course, -5, -5, 5);
        writeWatchClass(INVALID, fake_course, 5, -5, 5);
        writeWatchClass(INVALID, fake_course, -5, 5, 5);
        writeWatchClass(FAIL, fake_course, 5, 5, 5);
    }
    //inserting course/removing courses
    for (int i = 0; i < num_of_inserts; i++)
    {
        int courseID = getRandomCourseNum();
        if (ChanceOfThird())
        {
            if (M.find(courseID) != M.end())
            {
                writeRemove(SUC, courseID);
                M.erase(courseID);
            }
        }
        else
        {

            if (M.find(courseID) == M.end())
            {
                writeAddCourse(SUC, courseID);
                M[courseID] = map<int, int>();
            }
        }
    }
    //inserting class
    for (int i = 0; i < num_of_inserts; i++)
    {
        if (M.size() == 0)
        {
            continue;
        }
        int courseID = getRandomKey(M);
        writeAddClass(SUC, courseID, M[courseID].size());
        M[courseID][M[courseID].size()] = 0;
    }
    //inserting invalid watchtime values
    for (int i = 0; i < num_of_inserts; i++)
    {
        if (ChanceOfHalf()) // course doesnt exist
        {
            int courseID = rand() % POLL + 1;
            while (M.find(courseID) != M.end())
            {
                courseID = rand() % POLL + 1;
            }
            writeWatchClass(FAIL, courseID, 5, 5, 5);
        }
        else // class doesnt exist
        {
            if (M.size() == 0)
            {
                continue;
            }
            int courseID = getRandomKey(M);
            writeWatchClass(INVALID, courseID, M[courseID].size() + 5, 5, 5);
        }
    }
    std::cout << "//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@GETITH INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
              << std::endl;
    for (int i = 0; i < num_of_inserts; i++)
    {
        if (M.size() == 0)
        {
            continue;
        }
        int real_course = getRandomKey(M);
        int fake_course = rand() % POLL + 1;
        while (M.find(fake_course) != M.end())
        {
            fake_course = rand() % POLL + 1;
        }
        if (ChanceOfThird()) //ADD OR REMOVE
        {
            if (ChanceOfHalf()) //good operation
            {
                if (ChanceOfThird()) //remove
                {
                    writeRemove(SUC, real_course);
                    M.erase(real_course);
                }
                else
                {
                    writeAddCourse(SUC, fake_course);
                    M[fake_course] = map<int, int>();
                }
            }
            else // bad operation
            {
                if (ChanceOfHalf()) //remove
                {
                    writeRemove(FAIL, fake_course);
                }
                else
                {
                    writeAddCourse(FAIL, real_course);
                }
            }
        }
        else if (ChanceOfThird()) // WATCHCLASS
        {
            if (ChanceOfHalf()) //good operation
            {
                if (M[real_course].size() == 0)
                {
                    continue;
                }
                int class_num = rand() % M[real_course].size();
                int time = rand() % 20;
                M[real_course][class_num] += time;
                writeWatchClass(SUC, real_course, class_num, 5, M[real_course][class_num]);
            }
            else // bad operation
            {
                if (ChanceOfHalf())
                {
                    writeWatchClass(FAIL, fake_course, 0, 5, 5);
                }
                else
                {
                    writeWatchClass(INVALID, fake_course, 0, -5, 5);
                }
            }
        }

        std::vector<TripletKey> myvector = mapSort(M);
        if (ChanceOfHalf() * ChanceOfHalf()) //failed ith operation
        {

            if (ChanceOfHalf() * ChanceOfHalf())
            {
                writeGet(INVALID, -5, 5, 5);
            }
            else
            {
                writeGet(FAIL, myvector.size() + 5, 5, 5);
            }
        }
        else // good ith operation
        {
            for (int i = 0; i < 3; i++)
            {
                if (myvector.size() == 0)
                {
                    continue;
                }
                int n = rand() % myvector.size() + 1;
                writeGet(SUC, n, myvector[n - 1].getCourseId(), myvector[n - 1].getClassNum());
            }
        }
    }
}

//RANDOM INSERTIONS

int main()
{
    srand(time(0));
    std::cout << "#include \"include/library2.h\"" << std::endl;
    std::cout << "#include \"include/util.h\"" << std::endl;
    std::cout << "int main()" << std::endl;
    std::cout << "{" << std::endl;
    std::cout << "int* timeviewed=new int;" << std::endl;
    std::cout << "int* classID=new int;" << std::endl;
    std::cout << "int* courseID=new int;" << std::endl;
    CheckAddRemove();
    CheckAddClass();
    checkTime();
    std::cout << "delete timeviewed;" << std::endl;
    std::cout << "delete classID;" << std::endl;
    std::cout << "delete courseID;" << std::endl;
    std::cout << "Quit(&DS1);" << std::endl;
    std::cout << "Quit(&DS2);" << std::endl;
    std::cout << "Quit(&DS3);" << std::endl;
    std::cout << "}" << std::endl;
}