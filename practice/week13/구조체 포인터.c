#include<stdio.h>
#include<stdlib.h>

typedef struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
}GAME_INFO;

int main() {
	GAME_INFO game_info = { "나도게임", 2022, 50, "나도회사" };
	printf("%s %d %d %s\n", game_info.name, game_info.year, game_info.price, game_info.company);
	struct GameInfo* game_ptr;
	game_ptr = &game_info;
	printf("%s %d %d %s", game_ptr->name, game_ptr->year, game_ptr->price, game_ptr->company);
	return 0;
}
