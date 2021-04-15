PROJECT_NAME = DSMS
SRC = src/windows.c \
src/gotocoordinates.c

INC_H=inc

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJECT_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJECT_NAME).$(EXEC))
