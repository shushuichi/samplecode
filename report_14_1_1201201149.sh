#!/bin/sh

a=0
b=1
while test $a -lt 1000 
do
  echo -n "$a "

  a=`expr $a + $b`
  b=`expr $a - $b`
	#a=a+b 足した後のa
	#b=(a+b)-b=a 足す前のa
done


#1201201149 山下周一郎
#毎回足し合わせる作業があるため、aには足し合わせたものと、bには足す前のaを更新することで繰り返しの計算を可能にした。
