#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player {
  char name[50];
  int HP;
  int MP;
  char inv[10][10];
};

struct Item {
  char name[30];
  char itemType[20];
};

struct Potion {
  struct Item item;
  int healValue;
};

void PrintStats(struct Player plr) {
  printf("Name: %s\nHP:%d\nMP:%d", plr.name, plr.HP, plr.MP);
}

int main() {
  printf("Welcome to the Adventure Of C the small cube\n");
  printf("This is version 0.0.2\n");

  struct Player player1 = {"Player Playerson", 100, 100};

  struct Potion healPotion = {"Healing potion 15HP", "Healing Potion", 15};

  PrintStats(player1);
}
