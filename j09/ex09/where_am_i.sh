#! /bin/sh

a=$(ifconfig | grep "inet " | cut -d' ' -f2 | grep ^10)
if [[ -n "$a" ]]
then
	ifconfig | grep "inet " | cut -d' ' -f2 | grep ^10
else
	echo "I am lost!"
fi
