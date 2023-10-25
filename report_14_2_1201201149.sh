#!bin/sh
dir=test_dir

if test -e $dir 
then
    cd $dir
else
    mkdir $dir
    cd $dir
fi

FILES=`ls`
count=0

for i in $FILES
do
	count=`expr $count + 1`
	mv "$i" "travel$count.jpg"
done

#1201201149 山下周一郎
#`ls`で辞書順での全ファイルを取得した。あとはmvでフェイル名を変換した。