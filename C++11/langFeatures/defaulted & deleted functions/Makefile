CC=/opt/rh/devtoolset-9/root/usr/bin/g++
CFLAGS=-std=c++17
def: ex_default.cpp
	$(CC) $(CFLAGS) ex_default.cpp -o ex_def.out
def_c: ex_default.cpp
	$(CC) $(CFLAGS) ex_default.cpp -DDEF_CONST -o ex_def.out
del: ex_delete.cpp
	$(CC) $(CFLAGS) ex_delete.cpp -o ex_del.out
del_c: ex_delete.cpp
	$(CC) $(CFLAGS) ex_delete.cpp -DDEL_NEW -o ex_del.out
clean:
	rm *.out