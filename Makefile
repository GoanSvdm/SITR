# Nom de l'exécutable
TARGET = sayHello

# Compilateur
CC = gcc

# Options de compilation
CFLAGS = -Wall -std=c11

# Fichiers source
SRCS = main.c functions.c

# Règle par défaut
all: $(TARGET)

# Comment créer l'exécutable à partir des fichiers source
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Supprime l'exécutable
clean:
	rm -f $(TARGET)