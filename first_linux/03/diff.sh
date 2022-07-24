#!/bin/bash
#diff.sh

#여기도 공백주의! [$1 -ne $2] 이렇게 중괄호 앞뒤 조건 내용을 붙여 넣었다가 에러!
if [ $1 -ne $2 ]
then
	echo "The number $1 is different from $2."
fi
if [ $1 != $2 ]
then
	echo "The string $1 is different from $2."
fi
