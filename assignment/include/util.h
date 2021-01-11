
#ifndef UTILS_H_
#define UTILS_H_
using namespace std;

#include <fstream>
#include <iostream>

#define ASSERT_TEST(x) if(!(x)){ \
 cout<<"Failed assertion at line "<<__LINE__<<" in "<<__func__<<endl;\
  return false; }

void printFunc(int numOfClasses,int *courses,int* classes,ofstream& myfile);


void printFunc(int numOfClasses,int *courses,int* classes,ofstream& myfile)
{
    myfile<<"Course\t|\tClass\n"<<std::endl;
    for (int i = 0; i < numOfClasses; i++)
    {
        myfile<<to_string(courses[i])+"\t|\t"+to_string(classes[i])+"\n"<<std::endl;
    }

    myfile<<"--End of most viewed classes--\n"<<std::endl;
}

#endif