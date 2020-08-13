SRC = unity/unity.c\
src/BreakString.c\
test/test_string.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = Break_the_string.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -f $(PROJECT_NAME) 
