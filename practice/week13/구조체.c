#include<stdio.h>
#include<stdlib.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main() {
	struct GameInfo game_info1;
	game_info1.name = "나도게임";
	game_info1.year = 2022;
	game_info1.price = 50;
	game_info1.company = "나도회사";
	printf("%S %d %d %s\n", game_info1.name, game_info1.year, game_info1.price, game_info1.company);
	return 0;
}