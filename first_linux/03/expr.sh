#!/bin/bash
#expr.sh
a=1
a=`expr $a + 1`
echo $a
#b=`expr $a + 10/2` 이렇게 공백없이 사용하면 에러난다는 거
b=`expr $a + 10 / 2`
echo $b
#리다이렉션 > 은 expr식으로 평가되어 결과가 출력되기 때문에
#보여지는 그대로 표출하기 위해서는 \ (역슬래시)를 함께 넣어줘야 함.
c=`expr $a \> $b`
echo $c
