#!/bin/bash
#skip.sh

i=0
while [ $i -le 10 ]
do
	let "i += 1"
	if [ $i -ge 3 ]
	then
		continue
	fi
	echo "$i"
done
