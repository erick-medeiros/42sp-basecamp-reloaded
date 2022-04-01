# descompactar:
# tar -xf exo.tar
clear
mkdir test0 test2
touch test1 test3 test4
ln test3 test5
ln -s test0 test6
echo "000" > test1
echo "" > test3
echo "0" > test4
touch -t 202106012047 test0
touch -t 202106012146 test1
touch -t 202106012245 test2
touch -t 202106012344 test3
touch -t 202106012343 test4
touch -ht 202106012220 test6
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
rm exo.tar
tar -cf exo.tar test*
ls -l --time-style=full-iso
rm -rf test*