# Variáveis
CC = gcc
CFLAGS = -Wall -Iinclude
EXEC = app

# Definição dos arquivos de código-fonte
SRC_MAIN = src/main.c
SRC_HELLO = src/hello.c

# Definição dos arquivos objetos
OBJ_MAIN = src/main.o
OBJ_HELLO = src/hello.o

# Regra principal
$(EXEC): $(OBJ_MAIN) $(OBJ_HELLO)
	@echo "Regra principal"
	$(CC) $(OBJ_MAIN) $(OBJ_HELLO) -o $(EXEC)
    
# Regra específica para compilar main.o
src/main.o: src/main.c
	@echo "Regra específica para compilar main.o"
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o

# Regra específica para compilar hello.o
src/hello.o: src/hello.c
	@echo "Regra específica para compilar hello.o"
	$(CC) $(CFLAGS) -c src/hello.c -o src/hello.o

# Limpeza dos arquivos objetos e executável
clean:
	rm -f src/*.o $(EXEC)
