#!/bin/sh

#tests single commands

g++ main.cpp -o a.out

echo "Testing single commands now:"

a="ls"
b="echo helloworld"
c="echo he;;llo"
d="echo he;;llo;"
e="error test"

#echo  "$a" $'\n' "$b" $'\n' "$c" $'\n' "$d"| ./a.out
#echo "$b" | ./a.out

for tests in "$a" "$b" "$c" "$d" "$e"

do
	echo "Testing '$tests':"
	echo "$tests" | ./a.out
done
#echo "Testing '$a':"
#echo "$a" | ./a.out
#echo "Testing '$b':"
#echo "$b" | ./a.out
#echo "Testing '$c':"
#echo "$c" | ./a.out
#echo "Testing '$d':"
#echo "$d" | ./a.out
#echo "Testing '$e':"
#echo "$e" | ./a.out

echo "End testing single commands."

