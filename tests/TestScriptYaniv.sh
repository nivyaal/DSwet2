#!/bin/bash

for i in {1..100}
do
	python3 StressTest.py
	 g++ *.cpp -o CoursesManagerApp
	./CoursesManagerApp<testStress1.in>myoutput.txt
	diff --strip-trailing-cr testStress1.out myoutput.txt > assertion.txt 
	if [ -s assertion.txt ]
	then
		echo "not the same"
		exit
	fi
	echo "Test number $i"
	rm testStress1.in testStress1.out
done


