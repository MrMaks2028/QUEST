#pragma once
#include <iostream>
#include <string>
#include <fstream>

struct Stats {
	int hunger;
};

struct heroClass {
	int power;
	int intellect;
	int agility;
};

struct Hero {
	std::string name;
	std::string age;
	heroClass classs;
	Stats heroStats;
};

void starving();
void showStats();
void crtTasks();

void QUEST();
void crtCharacter();
void chooseClass();
void part1();
void markus1();
void village1();
void village2();