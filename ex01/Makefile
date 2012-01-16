C_SRC=main.c
# No extension
HS_SRC=fibo.hs
OUTPUT=main
COMPILER=ghc
FLAGS_HS=-c -O
FLAGS_LKR=--make -no-hs-main -optc-O


all : $(C_SRC) $(HS_SRC)
	$(COMPILER) $(FLAGS_HS) $(HS_SRC)
	$(COMPILER) $(FLAGS_LKR) $(C_SRC) $(HS_SRC) -o $(OUTPUT)

clean :
	-rm -f *.o *.hi *_stub.[cho] $(OUTPUT)

