#include <stdio.h>
#include <stdlib.h>
#include "binary_sort_tree.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//system("color F0");
	printf("\t\t\t\t\t\t请先构建一棵树\n\n\n\n\n");
	BinarySortTreePtr BST;
	BST = (BinarySortTree*)malloc(sizeof(BinarySortTree)); 
	BST->root = NULL;
	BST_init(BST);
	while(1){
		Menu();
		switch(GetNumber()){
			case 1 :
				printf("\t\t\t\t\t\t请输入你想增加的元素:");
				BST_insert(BST, GetNumber()); 
				break;
			case 2 :
				printf("\t\t\t\t\t\t请输入你想删除的元素:");
				if( BST_delete( BST, GetNumber() ) ){
					printf("操作成功\n");
				}
				else{
					printf("空树删除失败\n");
				} 
				break;
			case 3 :
				printf("\t\t\t\t\t\t请输入你想验证是否存在的元素:");
				if(BST_search(BST, GetNumber())){
					printf("元素存在\n");
				} 
				else{
					printf("元素不存在\n");
				}
				break;
			case 4 :
				if(BST_preorderI(BST, visit)){
					printf("\n\n\n\n\n");
				}
				else{
					printf("空树\n\n\\n\n\n");
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
					printf("空树\n\n\\n\n\n");
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
					printf("空树\n\n\\n\n\n");	
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
					printf("空树\n\n\\n\n\n");
				}
				break;
			case 11 :
				system("cls");
				break;
			case 12 :
				exit(0);
			default :
				printf("请输入[1,12]");
				break; 
		}
	}
	return 0;
}
