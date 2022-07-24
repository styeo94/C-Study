#!/bin/bash
#var.sh
var="hello"
echo "var=$var or ${var}, but not \$var."
ls=$(ls)
echo "\$(ls)" is $ls.
var1="guest"
var2=""
#${변수:-word} -> 만약 설정되어 있으면 변수 값을, 그렇지 않으면 word를 출력
#${변수:=word} -> 만약 설정되어 있지 않으면, 변수 값을 word로 설정하고 출력 (똑같지 않나?)
#${변수:+word} -> 변수가 설정되었을 때에만 word 값으로 출력 인자들의 수
echo " "
echo "\${변수:-word} 테스트" 
echo "var1=${var1:-mem}"
echo "var2=${var2:-mem}"
echo " "
echo "\${변수:=word} 테스트" 
echo "var1=${var1:=mem}"
echo "var2=${var2:=mem}"
echo " "
echo "\${변수:+word} 테스트" 
echo "var1=${var1:+mem}"
echo "var2=${var2:+mem}"
echo " "
echo "\${변수:?변수설정 필요} 테스트" 
echo "var1=${var1:?변수설정 필요}"
echo "var2=${var2:?변수설정 필요}"
echo "var3=${var3:?변수설정 필요}"
