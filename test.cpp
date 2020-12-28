#include "include/library2.h"
#include "include/util.h"
int main()
{
int* timeviewed=new int;
int* classID=new int;
int* courseID=new int;
//Line Number: 0
void *DS1=Init();
//Line Number: 1
ASSERT_TEST(AddCourse(DS1,8)==SUCCESS);
//Line Number: 2
ASSERT_TEST(AddCourse(DS1,-1)==INVALID_INPUT);
//Line Number: 3
ASSERT_TEST(RemoveCourse(DS1,9)==FAILURE);
//Line Number: 4
ASSERT_TEST(RemoveCourse(DS1,8)==SUCCESS);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//Line Number: 5
void *DS2=Init();
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@VALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 6
ASSERT_TEST(AddCourse(DS2,8)==SUCCESS);
//Line Number: 7
ASSERT_TEST(AddCourse(DS2,6)==SUCCESS);
//Line Number: 8
ASSERT_TEST(AddCourse(DS2,1)==SUCCESS);
//Line Number: 9
ASSERT_TEST(AddCourse(DS2,3)==SUCCESS);
//Line Number: 10
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 11
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 12
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 13
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 14
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ INVALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 15
ASSERT_TEST(RemoveCourse(DS2,3)==SUCCESS);
//Line Number: 16
ASSERT_TEST(RemoveCourse(DS2,8)==SUCCESS);
//Line Number: 17
ASSERT_TEST(AddCourse(DS2,5)==SUCCESS);
//Line Number: 18
ASSERT_TEST(AddCourse(DS2,9)==SUCCESS);
//Line Number: 19
ASSERT_TEST(AddCourse(DS2,4)==SUCCESS);
//Line Number: 20
ASSERT_TEST(AddClass(DS2,3,classID)==FAILURE);
//Line Number: 21
ASSERT_TEST(AddClass(DS2,-6,classID)==INVALID_INPUT);
//Line Number: 22
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 23
ASSERT_TEST(AddClass(DS2,3,classID)==FAILURE);
//Line Number: 24
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@RANDOM INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 25
ASSERT_TEST(RemoveCourse(DS2,3)==FAILURE);
//Line Number: 26
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 27
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 28
ASSERT_TEST(AddClass(DS2,7,classID)==FAILURE);
//Line Number: 29
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 30
ASSERT_TEST(AddClass(DS2,10,classID)==FAILURE);
//Line Number: 31
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 32
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 33
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 34
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 35
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@VALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 36
void *DS3=Init();
//Line Number: 37
ASSERT_TEST(AddCourse(DS3,2)==SUCCESS);
//Line Number: 38
ASSERT_TEST(AddCourse(DS3,7)==SUCCESS);
//Line Number: 39
ASSERT_TEST(AddCourse(DS3,8)==SUCCESS);
//Line Number: 40
ASSERT_TEST(AddCourse(DS3,4)==SUCCESS);
//Line Number: 41
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 42
ASSERT_TEST(AddClass(DS3,4,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 43
ASSERT_TEST(AddClass(DS3,2,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 44
ASSERT_TEST(AddClass(DS3,4,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 45
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 46
ASSERT_TEST(WatchClass(DS3,7,0,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,7,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 47
ASSERT_TEST(WatchClass(DS3,7,1,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,7,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 48
ASSERT_TEST(WatchClass(DS3,4,0,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,4,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 49
ASSERT_TEST(WatchClass(DS3,2,0,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@INVALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 50
ASSERT_TEST(WatchClass(DS3,7,-5,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,7,-5,timeviewed)==INVALID_INPUT);
//Line Number: 51
ASSERT_TEST(WatchClass(DS3,7,5,-5)==INVALID_INPUT);
//Line Number: 52
ASSERT_TEST(WatchClass(DS3,7,-5,-5)==INVALID_INPUT);
//Line Number: 53
ASSERT_TEST(WatchClass(DS3,6,-5,-5)==INVALID_INPUT);
//Line Number: 54
ASSERT_TEST(WatchClass(DS3,6,5,-5)==INVALID_INPUT);
//Line Number: 55
ASSERT_TEST(WatchClass(DS3,6,-5,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,6,-5,timeviewed)==INVALID_INPUT);
//Line Number: 56
ASSERT_TEST(WatchClass(DS3,6,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,6,5,timeviewed)==FAILURE);
//Line Number: 57
ASSERT_TEST(RemoveCourse(DS3,8)==SUCCESS);
//Line Number: 58
ASSERT_TEST(AddCourse(DS3,8)==SUCCESS);
//Line Number: 59
ASSERT_TEST(AddCourse(DS3,9)==SUCCESS);
//Line Number: 60
ASSERT_TEST(AddClass(DS3,8,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 61
ASSERT_TEST(AddClass(DS3,4,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 62
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 63
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 64
ASSERT_TEST(AddClass(DS3,2,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 65
ASSERT_TEST(WatchClass(DS3,3,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,3,5,timeviewed)==FAILURE);
//Line Number: 66
ASSERT_TEST(WatchClass(DS3,9,6,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,9,6,timeviewed)==INVALID_INPUT);
//Line Number: 67
ASSERT_TEST(WatchClass(DS3,5,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,5,5,timeviewed)==FAILURE);
//Line Number: 68
ASSERT_TEST(WatchClass(DS3,5,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,5,5,timeviewed)==FAILURE);
//Line Number: 69
ASSERT_TEST(WatchClass(DS3,10,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,10,5,timeviewed)==FAILURE);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@GETITH INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 70
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==FAILURE);
//Line Number: 71
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==FAILURE);
//Line Number: 72
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==0);
//Line Number: 73
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==4);
ASSERT_TEST(*classID==0);
//Line Number: 74
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==4);
ASSERT_TEST(*classID==0);
//Line Number: 75
ASSERT_TEST(WatchClass(DS3,5,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,5,0,timeviewed)==FAILURE);
//Line Number: 76
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==FAILURE);
//Line Number: 77
ASSERT_TEST(WatchClass(DS3,6,0,-5)==INVALID_INPUT);
//Line Number: 78
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==FAILURE);
delete timeviewed;
delete classID;
delete courseID;
Quit(&DS1);
Quit(&DS2);
Quit(&DS3);
}
