#
# 'make depend' uses makedepend to automatically generate dependencies 
#               (dependencies are added to end of Makefile)
# 'make'        build executable file 'mycc'
# 'make clean'  removes all .o and executable files
#

# define the C compiler to use
CC = gcc

# define any compile-time flags
CFLAGS = -Wall -g

# define any directories containing header files other than /usr/include
#
INCLUDES = include/
SRC=src/
OBJ=obj/
# define the C source files
SOURCES = $(wildcard $(SRC)*.c)
# define library paths in addition to /usr/lib
#   if I wanted to include libraries not in /usr/lib I'd specify
#   their path using -Lpath, something like:
LFLAGS = -L./lib
# define any libraries to link into executable:
#   if I want to link in libraries (libx.so or libx.a) I use the -llibname 
#   option, something like (this will link in libmylib.so and libm.so:
LIBS = -lm

# define the C object files 
#
# This uses Suffix Replacement within a macro:
#   $(name:string1=string2)
#         For each word in 'name' replace 'string1' with 'string2'
# Below we are replacing the suffix .c of all words in the macro SRCS
# with the .o suffix
#
OBJS = $(patsubst .%.c, %.o, $(SOURCES))


# define the executable file 
MAIN = builds/my-prog

#
# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
#

.PHONY: clean

all:    $(MAIN)
	@echo  Simple compiler named $(MAIN) has been compiled



$(OBJ)/%o: $(SOURCES)
	mkdir -p ${OBJ}
	$(CC) $(CFLAGS)  -I$(INCLUDES) -c -o $@ $<

$(MAIN):$(OBJS) 
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

# this is a suffix replacement rule for building .o's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# (see the gnu make manual section about automatic variables)
.c.o:
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $<  -o $@

clean:
	$(RM) $(OBJ)*.o *~ $(MAIN)

# DO NOT DELETE THIS LINE -- make depend needs it