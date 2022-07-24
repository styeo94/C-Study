#!/bin/bash
#test.sh

#참이면 0, 거짓이면 1 반환 주의!!!!

# 수식1 -eq 수식2 : 두 수식이 같으면 참 (equal)
# 수식1 -ne 수식2 : 두 수식이 같지 않으면 참 (not equal)
# 수식1 -gt 수식2 : > 수식1이 수식2보다 크면 참 (greater than) 
# 수식1 -ge 수식2 : >= 수식1이 수식2보다 크거나 같으면 참 (greater then or equal)
# 수식1 -lt 수식2 : < 수식1이 수식2보다 작으면 참 (less than)
# 수식1 -le 수식2 : <= 수식1이 수식2보다 작거나 같으면 참 (less then or equal)
# !수식1 : 수식1이 거짓이면 참 (not)

test 2 -eq 3 
echo $?
test 2 -lt 3
echo $?
a=hong
test $a != "hong"
echo $?
[ -f test.sh ]
echo $?
