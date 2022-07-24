#!/bin/bash
#func.sh

func ()
{
	echo "func: $*"
	echo "func: argument number is $#."
}

func $*
