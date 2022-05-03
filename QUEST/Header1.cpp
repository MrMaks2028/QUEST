#include "Header1.h"
#include <iostream>
#include <string>

heroClass character = { 0, 0, 0 };
Hero player = { "Player", "Age", character };

void QUEST() {
	crtCharacter();
}

void crtCharacter() {
	std::cout << "\t\t\tMAGIC QUEST\nПриветствую тебя, странник!\n";
	std::cout << "Назови своё имя -> ";
	std::cin >> player.name;
	std::cout << "\nОтлично, " << player.name << "!\n Назови свой возраст -> ";
	std::cin >> player.age;
	std::cout << "\nХорошо!\n Определи свой класс: Воин(1), Маг(2) или Разбойник(3) -> ";
	chooseClass();
	std::cout << "Хорошо! Теперь ты готов!\nДа начнётся квест!\n\n...........................................................";
}

void chooseClass() {
	int clas;
	std::cin >> clas;
	switch (clas) {
	case 1: std::cout << "\nТеперь твой класс - Воин\n\n";
		character.power = 3; break;
	case 2: std::cout << "\nТеперь твой класс - Маг\n\n";
		character.intellect = 3; break;
	case 3: std::cout << "\nТеперь твой класс - Разбойник\n\n";
		character.agility = 3; break;
	default: std::cout << "ОШИБКА! Введите номер класса 1-3 -> ";  chooseClass(); break;
	}
}