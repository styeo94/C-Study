#!/bin/bash
#read.sh
#echo에서 -n인자가 의미하는 바가 인상적임. 입력값을 같은 행에서 처리하겠다는 뜻.
echo -n "Your name: "
read name
echo -n "Your age: "
read age
echo "Your name is $name and your age is $age."
