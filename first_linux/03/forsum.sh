#!/bin/bash
#forsum.sh

LIMIT=10
sum=0
for ((a=1; a <= LIMIT; a++))
do
	((sum+=a))
done
echo "The sum is $sum"
