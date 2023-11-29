#include<stdio.h>
#include<stdlib.h>

typedef struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
}GAME_INFO;

int main() {
	GAME_INFO game_info = { "나도게임", 2022, 50, "나도회사" };
	printf("%s %d %d %s\n", game_info.name, game_info.year, game_info.price, game_info.company);
	struct GameInfo* game_ptr;
	game_ptr = &game_info;
	printf("%s %d %d %s", game_ptr->name, game_ptr->year, game_ptr->price, game_ptr->company);
	
	GAME_INFO friend_game_info = { "너도게임", 2022, 50, "너도회사" };
	game_info.friendGame = &friend_game_info;
	printf("%s %d %d %s", game_info.friendGame->name, game_info.friendGame->year, game_info.friendGame->price, game_info.friendGame->company);

}
