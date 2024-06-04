#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INV_SLOTS 30
#define GAME_VERSION 0.0.2

struct Item {
  int id;
  char name[30];
  char itemType[20];
};

struct Potion {
  struct Item item;
  int healValue;
};

struct Player {
  char name[50];
  int HP;
  int MP;
  int inv[INV_SLOTS];
};

struct Spell {
  char name[30];
  int dmg;
  char type[10]; // shadow, fire, water
};

void healPlayer(struct Player plr, int amount) { plr.HP += amount; }

void addToInventory(int id, int *inv) {
  for (int i = 0; i < INV_SLOTS; i++) {
    if (inv[i] < 0) {
      inv[i] = id;
      printf("%d was added to inventory", id);
      return;
    }
    if (i == INV_SLOTS - 1) {
      printf("All %d inventory slots are full", INV_SLOTS);
    }
  }
}

void PrintStats(struct Player plr) {
  printf("Name: %s\nHP:%d\nMP:%d", plr.name, plr.HP, plr.MP);
}

void LookupItemName(int id, ) {}

void printInventory(int *inv) {
  printf("-------------------");
  printf("const char *restrict, ...");
}

int main() {
  printf("Welcome to the Adventure Of C the small cube\n");
  struct Player plr = {"Player Playerson", 100, 100};

  struct Item ItemDictionary[200] = {

  };

  struct Potion healPotion = {1, "Healing potion 15HP", "Healing Potion", 15};

  addToInventory(healPotion.item.id, plr.inv);

  PrintStats(plr);
}
