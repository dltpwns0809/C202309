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
	GAME_INFO game_info = { "��������", 2022, 50, "����ȸ��" };
	printf("%s %d %d %s\n", game_info.name, game_info.year, game_info.price, game_info.company);
	struct GameInfo* game_ptr;
	game_ptr = &game_info;
	printf("%s %d %d %s", game_ptr->name, game_ptr->year, game_ptr->price, game_ptr->company);
	
	GAME_INFO friend_game_info = { "�ʵ�����", 2022, 50, "�ʵ�ȸ��" };
	game_info.friendGame = &friend_game_info;
	printf("%s %d %d %s", game_info.friendGame->name, game_info.friendGame->year, game_info.friendGame->price, game_info.friendGame->company);

}
