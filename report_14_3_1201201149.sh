#!bin/sh
dir=bk
INTERVAL=5

while true
do
	FILES=`ls`
	for i in $FILES
	do
		if test $i!=$dir
		then 
			cp "$i" "$dir"/.
			cd -
		fi
	done
	sleep $INTERVAL
done

#1201201149 山下周一郎
#cdの扱いが難しかったが、五秒ごとのバックアップを実装することができた。課題３でも`ls`を利用した。