PROJECT_NAME = complex.exe

SRC = complex_calculator.c\
complex_number.c\
unity\unity.c

INC = inc
UNITY = unity

$(PROJECT_NAME) : $(SRC)
	gcc -I $(INC) -I $(UNITY) $(SRC) -o complex.exe

RUN: $(PROJECT_NAME)
	$(PROJECT_NAME)

CLEAN:
	del /q *.exe