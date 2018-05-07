test.dylib: Makefile test.cpp rd_route/rd_route.c
	$(CXX) test.cpp rd_route/rd_route.c -o test.dylib --std=c++11 -shared -fvisibility=hidden

preload: test.dylib
	DYLD_INSERT_LIBRARIES="$(PWD)/test.dylib" "$(TARGET)"

testbed: testbed.c
	$(CC) testbed.c -o testbed
