#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

void initial(struct GameInfo* game);
void display(const struct GameInfo* game);

int main() {
	int numGame;
	printf("enter the number of game:");
	scanf_s("%d", &numGame);

	struct GameInfo* games = (struct GameInfo*)malloc(numGame * sizeof(struct GameInfo));

	if (games == NULL) {
		return 1;
	}
	for (int i = 0; i < numGame; i++) {
		printf("\nEnter information for game %d:\n", i + 1);
		initial(&games[i]);
		display(&games[i]);
	}
	for (int i = 0; i < numGame; i++) {
		free(&games[i].name);
		free(&games[i].company);
	}
	free(games);
	return 0;
}

void initial(struct GameInfo* game) {
	printf("enter the name of game");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	game->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy_s(game->name, strlen(temp) + 1, temp);
	printf("enter the release year of the game:");
	scanf_s("%d", &game->year);
	printf("enter the price of the game:");
	scanf_s("%d", &game->price);
	printf("enter the company of the game");
	scanf_s("%s", temp, (int)sizeof(temp));
	game->company = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy_s(game->company, strlen(temp) + 1, temp);
}

void display(const struct GameInfo* game) {
	printf("Name : %s\n", game->name);
	printf("Year:%d\n", game->year);
	printf("Price:%d\n", game->price);
	printf("Company:%s\n", game->company);
}