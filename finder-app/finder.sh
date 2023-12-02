#!/bin/bash


if [ "$#" -ne 2 ] 
then
	echo Missing parameters!
	exit 1
fi

filesdir=$1
searchstr=$2

if [ -d "$filesdir" ]
then
	echo The number of files are $(find "$filesdir" -type f | wc -l) and the number of matching lines are $(grep -r "$searchstr" "$filesdir" | wc -l)
	exit 0
else
	echo Directory not found!
	exit 1
fi
