OBJS		=	test/main.o test/test.o test/testRegistrar.o test/testResult.o
TEST_OBJS	=	test/testError.o test/testFailure.o test/testSuccess.o test/testResult.o

LIBS		=	libtest.a
TESTS		=	testTest

include ../include/Makefile

# No libtest.a yet...
debug-test release-test:	INCLIBS		=	

