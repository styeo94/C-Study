#!/bin/bash
#args.sh

echo "전체인자: $@"
echo "$0 : $1 $2 $3"
echo "총 인자수 : $#"
echo "이 쉘의 프로세스ID : $$"
echo "이 쉘의 백그라운드 명령의 프로세스ID : $!"
echo "set 명령에 의해 할당된 쉘 옵셥 : $-"
