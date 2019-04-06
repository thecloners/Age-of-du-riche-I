CC=g++
CFLAGS= -Wall -ansi -pedantic -g2 -O0 -c -std=c++11
LDFLAGS= -lsfml-graphics -lsfml-window -lsfml-system  -lsfml-network
EXEC=ageofduriche
SRCDIR=src
ODIR=obj
INCLUDEDIR=include
SRC = $(wildcard $(SRCDIR)/*.cpp) \
	  $(wildcard $(SRCDIR)/*/*.cpp)
OBJ = $(subst $(SRCDIR),$(ODIR),$(SRC:.cpp=.o))


all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)


$(ODIR)/%.o: $(SRCDIR)/%.cpp
	$(CC)  -I $(INCLUDEDIR) -cpp -o $@ $< $(CFLAGS)
.PHONY: clean mrproper

clean:
	rm -rf $(ODIR)/*/*.o
	rm -rf $(ODIR)/*.o

mrproper: clean
	rm -rf $(EXEC)

rebuild: mrproper ageofduriche
