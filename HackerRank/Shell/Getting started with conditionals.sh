#!/bin/bash

read ch

ch1='y'
ch2='Y'

if [ $ch = $ch1 ] || [ $ch = $ch2 ]
then
    echo "YES"
else
    echo "NO"
fi
