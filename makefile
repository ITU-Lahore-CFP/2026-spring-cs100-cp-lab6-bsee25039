all: ./a.out

compRun:
	g++ -std=c++11 main.cpp functions.cpp -o r.out

compTest:
	g++ -std=c++11 test.cpp functions.cpp -o a.out

compTestHidden:
	g++ -std=c++11 test_h.cpp functions.cpp -o h.out

test: clean compTest; ./a.out

test_h: clean compTestHidden; ./h.out

run: clean compRun; ./r.out

clean:
	rm -f *.out
