#include "Header1.h"
#include <iostream>
#include <string>

heroClass character = { 0, 0, 0 };
Hero player = { "Player", "Age", character };

void QUEST() {
	crtCharacter();
}

void crtCharacter() {
	std::cout << "\t\t\tMAGIC QUEST\n����������� ����, ��������!\n";
	std::cout << "������ ��� ��� -> ";
	std::cin >> player.name;
	std::cout << "\n�������, " << player.name << "!\n ������ ���� ������� -> ";
	std::cin >> player.age;
	std::cout << "\n������!\n �������� ���� �����: ����(1), ���(2) ��� ���������(3) -> ";
	chooseClass();
	std::cout << "������! ������ �� �����!\n�� ������� �����!\n\n...........................................................";
}

void chooseClass() {
	int clas;
	std::cin >> clas;
	switch (clas) {
	case 1: std::cout << "\n������ ���� ����� - ����\n\n";
		character.power = 3; break;
	case 2: std::cout << "\n������ ���� ����� - ���\n\n";
		character.intellect = 3; break;
	case 3: std::cout << "\n������ ���� ����� - ���������\n\n";
		character.agility = 3; break;
	default: std::cout << "������! ������� ����� ������ 1-3 -> ";  chooseClass(); break;
	}
}