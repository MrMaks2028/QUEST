#pragma once
#include <iostream>
#include <string>

struct heroClass {
	int power;
	int intellect;
	int agility;
};

struct Hero {
	std::string name;
	std::string age;
	heroClass classs;
};

void QUEST();
void crtCharacter();
void chooseClass();