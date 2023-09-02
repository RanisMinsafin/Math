CC = gcc -c
FLAGS = -Wall -Werror -Wextra
SOURCE = *.c
TEST = tests/*.c
SOURCE_OBJ = s21*.o
TEST_OBJ = tests/test*.o
VALGRIND_FLAGS=--trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all --verbose

all: s21_math.a
	rm *.o

valgrind: valgrind_build

valgrind_build: s21_math.a
	gcc $(TEST) -L. -lcheck -lsubunit s21_math.a -lm -o test_exec
	CK_FORK=no valgrind $(VALGRIND_FLAGS) --log-file=RESULT_VALGRIND.txt ./test_exec

s21_math.a:
	$(CC) $(FLAGS) $(SOURCE)
	ar cr s21_math.a *.o
	ranlib 	s21_math.a

test: test_build
	./check_filetest

test_build: s21_math.a
	gcc s21_math.a $(TEST) $(FLAGS) -lm -lpthread -lcheck -o check_filetest

gcov_report: clean_r report clean

report:
	gcc -fprofile-arcs -ftest-coverage $(SOURCE) $(TEST) -o s21_test -lcheck
	./s21_test
	lcov -t "test" -o *.info -c -d .
	genhtml -o report/ *.info
	open ./report/index.html

clean:
	rm check_filetest | rm -rf *.o | rm -rf *.a && rm -rf *.so | rm -rf hello* | rm *filetest | rm source/*.gch | rm tests/*.gch | rm *.gcno | rm *.gcda | rm s21_test | rm *.info | rm *_exec | rm RESULT_VALGRIND.txt | rm -rf test_exec* 

clean_o:
	rm *.o

clean_r:
	rm -rf report

install_brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
	brew install lcov

