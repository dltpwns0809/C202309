#include<stdio.h>
#include<stdlib.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main() {
	struct GameInfo game_info[2];
	game_info[0].name = "나도게임";
	game_info[0].year = 2022;
	game_info[0].price = 50;
	game_info[0].company = "나도회사";

	game_info[1].name = "너도게임";
	game_info[1].year = 2022;
	game_info[1].price = 100;
	game_info[1].company = "너도회사";
	for (int i =0 ; i < 2; i++) {
		printf("%s %d %d %s\n", game_info[i].name, game_info[i].year, game_info[i].price, game_info[i].company);
	}
	return 0;
}