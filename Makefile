all: clear ola ponteiro lista

ola:
	@echo "compilando programa ola" 
	@gcc ola.c -o ola
	@echo "tornando programa executavel"
	@chmod +x ola
	@echo "executando programa ola"
	@./ola

ponteiro:
	@echo "compilando programa ponteiro" 
	@gcc ponteiro.c -o ponteiro
	@echo "tornando programa executavel"
	@chmod +x ponteiro
	@echo "executando programa ponteiro"
	@./ponteiro

lista:
	@echo "compilando programa lista" 
	@gcc LinkedList.c LinkedList.h LinkedListTest.c -o lista
	@echo "tornando programa executavel"
	@chmod +x lista
	@echo "executando programa lista"
	@./lista

clear:
	@echo "removendo programa ola"
	@rm -f ola > /dev/null 2>&1
	@rm -f ponteiro > /dev/null 2>&1
	@rm -f lista > /dev/null 2>&1

help:
	@echo "ola= copila e executa o programa ola"
	@echo "clear= limpa"
	@echo "all= executa o programa clear e ola"
	