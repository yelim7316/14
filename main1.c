#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//자꾸 이전 파일이 컴파일되는게 오류인것 같아요 다시만들어볼게ㅛㅇ  

int main(int argc, char *argv[]) {
	int n[5];
	
	printf("input  5 integer: ");
	scanf("%d %d %d %d %d", n, n+1, n+2, n+3, n+4);
	
	insertDataToTail(n[0]);
	insertDataToTail(n[1]);
	insertDataToTail(n[2]);
	insertDataToTail(n[3]);
	insertDataToTail(n[4]);

	print_list();
	print_node(2);
	
	return 0;
}
