all: clear ola ponteiro lista listadupla listageral

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

listadupla:
	@echo "compilando programa lista dupla" 
	@gcc DoublyLinkedList.c DoublyLinkedList.h DoublyLinkedListTest.c -o listadupla
	@echo "tornando programa executavel"
	@chmod +x listadupla
	@echo "executando programa lista dupla"
	@./listadupla

listageral:
	@echo "compilando programa lista generalizada" 
	@gcc GeneralizedLinkedList.c GeneralizedLinkedList.h GeneralizedLinkedListTest.c -o listageral
	@echo "tornando programa executavel"
	@chmod +x listageral
	@echo "executando programa lista generalizada"
	@./listageral

clear:
	@echo "removendo programa ola"
	@rm -f ola > /dev/null 2>&1
	@rm -f ponteiro > /dev/null 2>&1
	@rm -f lista > /dev/null 2>&1
	@rm -f listadupla > /dev/null 2>&1
	@rm -f listageral > /dev/null 2>&1

help:
	@echo "ola= copila e executa o programa ola"
	@echo "clear= limpa"
	@echo "all= executa o programa clear e ola"
	