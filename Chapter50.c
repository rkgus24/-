#include <stdio.h>
#include <stdbool.h>
//구조체 선언
typedef struct Goods {
	char name[100];
	int price;
	bool limit;
} Goods;

int main()
{
	Goods* item1 = (Goods*)malloc(sizeof(Goods));
	strcpy(item1->name, "교향곡전집");
	item1->price = 100000;
	item1->limit = false;
	Goods* ptr;
	ptr = item1;
	ptr->limit = true;

	if (ptr->limit == true)
		printf("한정판\n");
	else
		printf("일반판\n");

	return 0;
}
