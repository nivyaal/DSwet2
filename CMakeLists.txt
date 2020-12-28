cmake_minimum_required(VERSION 3.0.0)
project(dynamic VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(CourseTable  CoursesTable.cpp library2.cpp  CoursesManager.cpp SortedTree.cpp SpecialNodes.cpp test.cpp)
#add_executable(CourseTable CoursesManagerTest.cpp SpecialNodes.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
