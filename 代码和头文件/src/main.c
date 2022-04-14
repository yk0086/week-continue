#include <stdio.h>
#include <stdlib.h>
#include "binary_sort_tree.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//system("color F0");
	printf("\t\t\t\t\t\t���ȹ���һ����\n\n\n\n\n");
	BinarySortTreePtr BST;
	BST = (BinarySortTree*)malloc(sizeof(BinarySortTree)); 
	BST->root = NULL;
	BST_init(BST);
	while(1){
		Menu();
		switch(GetNumber()){
			case 1 :
				printf("\t\t\t\t\t\t�������������ӵ�Ԫ��:");
				BST_insert(BST, GetNumber()); 
				break;
			case 2 :
				printf("\t\t\t\t\t\t����������ɾ����Ԫ��:");
				if( BST_delete( BST, GetNumber() ) ){
					printf("�����ɹ�\n");
				}
				else{
					printf("����ɾ��ʧ��\n");
				} 
				break;
			case 3 :
				printf("\t\t\t\t\t\t������������֤�Ƿ���ڵ�Ԫ��:");
				if(BST_search(BST, GetNumber())){
					printf("Ԫ�ش���\n");
				} 
				else{
					printf("Ԫ�ز�����\n");
				}
				break;
			case 4 :
				if(BST_preorderI(BST, visit)){
					printf("\n\n\n\n\n");
				}
				else{
					printf("����\n\n\\n\n\n");
				}
				break;
			case 5 :
				BST_preorderR(BST, visit);
				break;
			case 6 :
				if(BST_inorderI(BST, visit)){
					printf("\n\n\n\n\n");
				}
				else{
					printf("����\n\n\\n\n\n");
				}
				break;
			case 7 :
				BST_inorderR(BST, visit);
				break;
			case 8 :
				if(BST_postorderI(BST, visit)){
					printf("\n\n\n\n\n");
				}
				else{
					printf("����\n\n\\n\n\n");	
				}
				break;				
			case 9 :
				BST_postorderR(BST, visit);
				break;
			case 10 :
				if(BST_levelOrder(BST, visit)){
					printf("\n\n\n\n\n");
				}
				else{
					printf("����\n\n\\n\n\n");
				}
				break;
			case 11 :
				system("cls");
				break;
			case 12 :
				exit(0);
			default :
				printf("������[1,12]");
				break; 
		}
	}
	return 0;
}
