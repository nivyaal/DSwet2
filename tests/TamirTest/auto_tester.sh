#!/bin/bash

g++ -std=c++11 -DNDEBUG -Wall *.cpp -o test.a

TEST_DIR="tests/"
IN_DIR="${TEST_DIR}in/*"
OUT_DIR="${TEST_DIR}out/"
TEMP_DIR="${TEST_DIR}temp/"
for t in $IN_DIR;
do 
F_NAME="$(basename -- $t)"
F_OUT=${F_NAME:2}
valgrind --error-exitcode=1 --leak-check=full --log-file="/dev/null" ./test.a <$t > tests/temp/out_for_${F_NAME}
diff_res=$(diff tests/temp/out_for_${F_NAME} "${OUT_DIR}out${F_OUT}" 2> testdiff)
if [[ -s testdiff ]]
then
cat testdiff
else
if [[ $diff_res != "" ]];
then
	echo "${F_NAME} FAILED:("
else
	echo "${F_NAME} PASSED!"
fi
fi
if [[ $? -eq 0 ]];
then 
	echo "${F_NAME} PASSED VALGRIND !"
else
	echo "${F_NAME} FAILED VALGRIND !"
fi
done
rm testdiff