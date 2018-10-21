git commit -m "did some work on pa3"
git status
git push
git status
exit
ls
vim scripts.sh
ls
hello
./hello
ls -l
touch ggg
ls
ls -l
chmod 700 ggg
ls -l
vim ggg
grep int *
grep -f int *
grep -l int *
vim ggf 
grep -l int *
grep -lw int *
vim readme.txt
grep '[^AS]' readme.txt
grep '^[AS]' readme.txt
vim readme.txt
grep ',$' readme.txt
cat readme.txt
grep '^AS' readme.txt
grep '^[AS]' readme.txt
ls
rm ggg
rm ggf
ls
vim readme.txt
grep 'int|float' readme.txt
grep 'int\|float' readme.txt
grep -e 'int|float' readme.txt
egrep 'int|float' readme.txt
find . -name '*.txt'
find . -name '*.txt' | grep -l
grep -l 

find . -name '*.txt'
find . -name '*.txt' -maxdepth 1
find . -maxdepth 1 -name '*.txt' 
find . -maxdepth 1 -type f
find . -maxdepth 1 -type f -name '*.txt'
find . -perm 744
find . -perm 755
find . -perm 700
find . -perm 701
ls
touch perm
chmod 701 perm
find . -perm 701
ls
find . -perm 701 -delete
find . -perm 701
ls
find . -perm 744 | ls -l
find . -perm 744
ls -l | find . -perm 744
ls -l
ls
vim f
./f
chmod 700 f
./f
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
vim f
./f 5
./f 99
./f 100
./f 10
./f 100
vim f
ls
exit
ls
vim f
./f

head -${howmany:-10} readme.txt
cat readme.txt
head readme.txtr
head readme.txt
head -${howmany: -10} readme.txt
cat readme.txt
sed /Ass/ readme.txt
sed '/Ass/' readme.txt
sed -e '/Ass/' readme.txt
grep Ass readme.txt
grep -v Ass readme.txt
grep ass readme.txt
grep -v ass readme.txt
grep '[A-Z]' readme.txt
grep '[^A-Z]' readme.txt
grep '^[A-Z]' readme.txt
exit
ls
cat readme.txt
vim readme.txt
ls
sed '/^The/' readme.txt
sed '/The/' readme.txt
sed '/The/g' readme.txt
sed '/^The/g' readme.txt
sed '/^The/p' readme.txt
sed -n '/^The/p' readme.txt
sed -n '/The/p' readme.txt
sed -n '/^The/p' readme.txt
sed -n '/^the/p' readme.txt
sed '/^The/p' readme.txt
cat readme.txxt
cat readme.txt
sed '/^The/d' readme.txt
cat readme.txt
find . -name '*.txt'
find . -name '*.txt' | grep -c
grep -c | find . -name '*.txt' 
find . -name '*.txt' 
awk '/the/ || /The/ {print}' readme.txt
awk '/the/ || /The/ {print}' *.txt
ls
vim farts.txt
awk '/the/ || /The/ {print}' *.txt
vim farts.txt
vim readme.txt
awk '/run time/ || /run-time/ {print}' *.txt
who | grep -c
who | wc-l
who | wc -l
find . -name '*.txt' | wc -l
awk '/\.$/ {print}' readme.txt
vim readme.txt
awk '/\.$/ {print}' readme.txt
ls
exit
x= 5
x= '5'
x=5
x
$x
echo x
echo $x
x= 9
echo $x
ls
ls -l
./hello
./f
ls
find . -name *.cpp
find . -name '*.cpp'
find . -name '*.cpp' -o '*.c'
find . -name '*.cpp' -o -name '*.c'
ls
head readme.txt
head farts.txt
cat readme.txt
head -${howmany: -10} readme.txt
cat readme.txt
head -${howmany: -10} readme.txt
3
cat readme.txt
head -${howmany: -10} readme.txt
head -${howmany: -1} readme.txt
head -${howmany: -1.0} readme.txt
head -${} readme.txt
head -{howmany: -1.0} readme.txt
head --help
head
man head
howmany
howmany --head
howmany --help
head -howmany
head -help
head --help
head -{howmany:} readme.txt
head -{howmany: 0} readme.txt
head -${howmany: 0} readme.txt
head -${howmany: } readme.txt
head -{howmany: } readme.txt
head -${$howmany: } readme.txt
head -${howmany: } readme.txt
head -${howmany:-10} readme.txt
head -${howmany:-1} readme.txt
head -${howmany:-7} readme.txt
head -${howmany:-3} readme.txt
cat readme.txt
vim readme.txt 
awk 'NF>5' readme.txt
ls
clear
ls
cd wolfe_pa3
ls
./fizzbuzz
./fizzbuzz 77
vim fizzbuzz
ls
cd gag
ls
cd ..
ls
./flcln gag
./flcln nnon
touch gag/thisis0
ls gag
touch gag/thisiszero
touch nnon/ttt
./flcln nnon
./flcln gag
./flcln nnon
./flcln gag
ls
rm abba
ls
rm -r gag
rm -r nnon
ls
cd ..
ls
~yousefis/cs2750/pa3/pa3_submit wolfe_pa3
git status
git add .
git status
git commit -m "wolfe_pa3 submitted"
git status
git push
ls
git status
ls
cat readme.txt
sed '/^The/d' readme.txt
sed -v '/^The/d' readme.txt
sed -r '/^The/d' readme.txt
sed  '/^The/d' readme.txt
awk '{/run time/ || /run-time/ print}' *.txt
awk '{/run time/ || /run-time/ {print}' *.txt
awk '/run time/ || /run-time/ {print}' *.txt
exit
ls
git status
ls
mkdir wolfe_pa4
ls 
cd wolfe_pa4
ls
pwd
ls
vim sieve
ls
vim sieve.c
ls
vim sieve.c
ls
exit
ls
cd wolfe_pa4
ls
vim sieve.c
gcc -o sieve sieve.c
vim sieve.c
gcc sieve.c
vim sieve.c
gcc sieve.c
vim sieve.c
gcc sieve.c
vim sieve.c
gcc sieve.c
ls
a.out
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
./a.out
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
clear
vim sieve.c
vim sieve.c
clear
vim sieve.c
gcc sieve.c
vim sieve.c
jobs
fg
gcc sieve.c
vim sieve.c
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
vim sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
./a.out
vim sieve.c
./a.out
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
vim sieve.c
ZZZZZZZ
ls
cd wolfe_pa4
ls
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
clear
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
vim sieve.c
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
vim sieve.c
gcc sieve.c
vim sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
vim net.c
ls
vim sieve.c
cp sieve.c net.c
vim net.c
gcc net.c
./a.out
ls
rm net.c
ls
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
vim sieve.c
gcc sieve.c
./a.out
gcc sieve.c
./a.out
ls
ls -l
ls -a
cd .
ls
cd ..
ls
cd 
ls
rm f
rm farts.txt
ls
git status
cat .viminfo
vim .viminfo
ls
git status
git add .
git status
git commit -m "sieve of Eratosthones working"
git status
git push
ls
cd wolfe_pa4
ls
vim sieve.c
cat sieve.c
ls
cd
ls
exit
jobs
kill `jobs -ps`
jobs
kill $( jobs -p )
jobs
jobs -p
kill 8421
jobs
exit
ls
jobs
exit
ls
cd wolfe_pa4
ls
vim sieve.c
ls
vim sieve.c
ls
rm a.out
ls
gcc -o sieve sieve.c
ls
sieve
./sieve
ls
jobs
exit
ls
cd wolfe_pa4
ls
vim main.c
gcc main.c
vim main.c
gcc main.c
vim main.c
gcc main.c
ls
vim avg.h
ls
exit
clear
ls
cd wolfe_pa4
ls
vim main.c
clear
ls
vim main.c
ls
vim main.c
ls
clear
ls
cat avg.h
vim avg.h
cat avg.h
sed '/avg/min' avg.h
sed '/avg/min/' avg.h
sed 's/avg/min/' avg.h
sed 's/avg/min/g' avg.h
sed 's/avg/min/i' avg.h
cat avg.h
cp avg.h min.h
clear
sed 's/avg/min/' avg.h
sed -i 's/avg/min/' min.h
ls
cat min.h
sed -i 's/AVG/MIN/' min.h
cat min.h
ls
cp avg.h max.h
sed -i 's/AVG/MAX/' max.h
sed -i 's/avg/max/' max.h
cat max.h
ls

sed -i 's/avg/sum/' sum.h
sed -i 's/AVG/SUM/' sum.h
cat sum.h
ls
vim avg.c
cat avg.h
cp avg.c sum.c
sed 's/avg/sum/' sum.c
sed -i 's/avg/sum/' sum.c
clear
cat sum.c
cp avg.c max.c
cp avg.c min.c
sed -i 's/avg/max/' max.c
sed -i 's/avg/min/' min.c
ls
cat min.c
cat max.c
gcc -o stats main.c min.c max.c sum.c avg.c
cat main.c
vim avg.c
vim min.c
vim max.c
vim sum.c
gcc -o stats main.c min.c max.c sum.c avg.c
vim min.c
clear
vim min.h
sed 's/int/float/' max.h
sed -i 's/int/float/' max.h
sed -i 's/int/float/' min.h
sed -i 's/int/float/' sum.h
sed -i 's/int/float/' avg.h
gcc -o stats main.c min.c max.c sum.c avg.c
vim avg.h
vim avg.c
gcc -o stats main.c min.c max.c sum.c avg.c
clear
vim min.h
vim max.h
vim min.h
clear
vim sum.h
vim avg.h
clear
gcc -o stats main.c min.c max.c sum.c avg.c
ls
./stats
sed -i 's/int/float/' avg.h
cat avg.h
cat min.h
sed -i 's/int/float/' min.h
cat min.h
sed -i 's/int/float/' max.h
sed -i 's/int/float/' sum.h
clear
cat avg.c
sed -i 's/int/float/' sum.c
sed -i 's/int/float/' min.c
sed -i 's/int/float/' max.c
sed -i 's/int/float/' avg.c
cat sum.c
cat min.c
cat max.c
cat avg.c
gcc -o stats main.c min.c max.c sum.c avg.c
./stats
cat main.c
clear
vim max.c
gcc -o stats main.c min.c max.c sum.c avg.c
vim max.c
gcc -o stats main.c min.c max.c sum.c avg.c
vim max.c
gcc -o stats main.c min.c max.c sum.c avg.c
vim max.c
gcc -o stats main.c min.c max.c sum.c avg.c
vim max.c
gcc -o stats main.c min.c max.c sum.c avg.c
vim max.c
gcc -o stats main.c min.c max.c sum.c avg.c
clear
./stats
vim max.c
clear
vim min.c
vim max.c
vim min.c
gcc -o stats main.c min.c max.c sum.c avg.c
clear
./stats
vim sum.c
gcc -o stats main.c min.c max.c sum.c avg.c
./stats
vim sum.c
gcc -o stats main.c min.c max.c sum.c avg.c
./stats
vim sum.c
gcc -o stats main.c min.c max.c sum.c avg.c
./stats
vim sum.c
gcc -o stats main.c min.c max.c sum.c avg.c
./stats
ls
rm stats
gcc -o stats main.c min.c max.c sum.c avg.c
clear
ls
./stats
vim main.c
clear
vim sum.c
vim main.c
clear
vim min.c
vim max.c
vim sum.c
vim max.c
clear
vim avg.c
clear
vim sum.c
clear
vim avg.c
gcc -o stats main.c min.c max.c sum.c avg.c
./stats
ls
lls
ls
sed '1,3s/^/Scott Wolfe\ncs2750 PA 4\ndate 14/10/2018/' avg.h
sed '1s/^/Scott Wolfe\ncs2750 PA 4\ndate 14/10/2018/' avg.h
sed '1s/^/Scott Wolfe/' avg.h
sed '1s/^/Scott Wolfe\ncs2750 PA 4\ndate 14\/10\/2018/' avg.h
sed '1s/^/#Scott Wolfe\n#cs2750 PA 4\n#date 14\/10\/2018/\n' avg.h
sed '1s/^/\#Scott Wolfe\n\#cs2750 PA 4\n\#date 14\/10\/2018/\n' avg.h
sed '1s/^/\#Scott Wolfe\n\#cs2750 PA 4\n\#date 14\/10\/2018\n/' avg.h
sed '1s/^/\#Scott Wolfe\n\#cs2750 PA 4\n\#date 14\/10\/2018\n\n/' avg.h
sed '1s/^/\#Scott Wolfe\n\#cs2750 PA 4\n#date 14\/10\/2018\n\n/' avg.h
clear
sed '1s/^/#Scott Wolfe\n#cs2750 PA 4\n#date 14\/10\/2018\n\n/' avg.h
cat avg.h
ls
sed '1s/^/#Scott Wolfe\n#cs2750 PA 4\n#date 14\/10\/2018\n\n/' avg.h
sed '1s/^/#Scott Wolfe\n#CS2750 PA 4\n#date 14\/10\/2018\n\n/' avg.h
sed '1s/^/#Scott Wolfe\n#CS2750 PA 4\n#Date 14\/10\/2018\n\n/' avg.h
sed '1s/^/#Scott Wolfe\n#CS2750 PA 4\n#Date 10\/14\/2018\n\n/' avg.h
clear
ls
find . -name '*.h' -exec sed -i '1s/^/#Scott Wolfe\n#CS2750 PA 4\n#Date 10\/14\/2018\n\n/' {} +
ls
cat avg.h
cat min.h
cat max.h
cat sum.h
find . -name '*.c' -exec sed -i '1s/^/#Scott Wolfe\n#CS2750 PA 4\n#Date 10\/14\/2018\n\n/' {} +
vim sieve.c
gcc -o stats main.c min.c max.c sum.c avg.c
clear
sed '1s/^/\/*/' avg.h
sed '1s/^/\/*\n/' avg.h
sed '1s,4s/^/\/*\n/' avg.h
sed '1,4s/^/\/*\n/' avg.h
sed '1/^/\/*\n/' avg.h
sed '1s/^/\/*\n/' avg.h
find . -name '*.h' -exec sed -i '1s/^/\/*\n/' {} +
sed '4s/^/\/*\n/' avg.h
sed '5s/^/\/*\n/' avg.h
clear
sed '5s/^/*\\\n/' avg.h
sed '5s/^/*\/\n/' avg.h
find . -name '*.h' -exec sed -i '5s/^/*\/\n/' {} +
cat sum.h
cat min.h
find . -name '*.c' -exec sed -i '5s/^/*\/\n/' {} +
find . -name '*.c' -exec sed -i '1s/^/\/*\n/' {} +
gcc -o stats main.c min.c max.c sum.c avg.c
clear
gcc -o stats main.c min.c max.c sum.c avg.c
./stats
ls
ls -a
rm sieve
ls
rm stats
./sieve
ls
cd ..
ls
vim hello.c
cat readme.txt
clear
ls
rm readme.txt 
ls
cat output.txt
rm output.txt 
ls
cat scripts.sh
rm scripts.sh 
ls
git status
git add .
git status
git commit -m "pa4 complete"
clear
ls
git status
git st
git status
git log
git push
git status
clear
git status
ls
git add .
git add --all
git status
git commit -m "added removals"
git status
git push
git status
clear
ls
cd wolfe_pa4
ls
gcc -o sieve sieve.c
ls
./sieve
clear
ls
gcc -o stats main.c sum.c avg.c min.c max.c
./stats
vim main.c
cd
clear
ls
ls wolfe_qui2
ls wolfe_quiz2
jobs
ls
exit
clear
ls
mkdir wolfe_quiz3
ls
cd wolfe_quiz3
ls
vim awk3
./awk3
vim awk3
./awk3
chmod 755 awk3
ls
./awk3
awk -f awk3
vim awk3
awk -f awk3
vim awk3
awk -f awk3
vim awk3
awk -f awk3
ls
vim awk3
awk -f awk3
vim awk3
awk -f awk3
ls
cd
ls
ls wolfe_pa3
cat wolfe_pa3/fizzbuzz
cat wolfe_pa3/flcln
ls
ls wolfe_pa2
cat wolfe_pa2/myawk
cd wolfe_pa4
ls
cd
cd wolfe_quiz3
ls
vim awk3
awk -f awk3
vim awk3
awk -f awk3
vim awk3
awk -f awk3
clear
vim awk3
awk -f awk3
vim awk3
awk -f awk3
vim awk3
awk -f awk3
vim awk3
awk -f awk3
vim awk3
awk -f awk3
ls
vim readme.txt
awk -f awk3
ls
vim readme.txt
ls
vim awk3
vim readme.txt
awk -f awk3
vim awk3
awk -f awk3
awk3
./awk3
vim awk3
./awk3
awk awk3
awk -f  awk3
vim awk3
./awk3 readme.txt
vim awk3
./awk3 readme.txt
./awk3
pwd
vim awk3
pwd
./awk3 readme.txt
vim awk3
./awk3 readme.txt
vim awk3
./awk3 readme.txt
./awk3
vim awk3
./awk3
vim awk3
./awk3
vim awk3
./awk3
vim awk3
./awk3
awk 'NF>5 {print}' readme.txt
cat readme.txt
vim awk3
./awk3
./awk3 readme.txt
vim awk3
./awk3 readme.txt
./awk3
./awk3 readme.txt
vim awk3
./awk3 readme.txt
ls
exit
