// Main.cpp

#include <iostream>
#include <ctime>
#include <string>
#include "Player.h"
#include "Monster.h"
#include "Warrior.h"
#include "Archer.h"
#include "Magician.h"
#include "Thief.h"
#include "Goblin.h"

int main(void)
{
	srand(time(nullptr));

	std::string jobs[] = { "전사", "궁수", "도적", "마법사" };
	int jobchoice = 0;
	std::string nickname;

	Player* player = nullptr;

	std::cout << "\n닉네임을 입력해주세요: ";
	std::cin >> nickname;

	std::cout << "\n[전직]\n" << std::endl;
	std::cout << nickname << "님, 어서오세요." << std::endl;
	std::cout << "\n원하시는 직업으로 전직하세요." << std::endl;

	for (int i = 0; i < 4; ++i)
	{
		std::cout << (i + 1) << ". " << jobs[i] << std::endl;
	}

	std::cout << "\n선택: ";
	std::cin >> jobchoice;

	switch (jobchoice)
	{
	case 1:
		player = new Warrior(nickname);
		break;
	case 2:
		player = new Archer(nickname);
		break;
	case 3:
		player = new Thief(nickname);
		break;
	case 4:
		player = new Magician(nickname);
		break;
	default:
		std::cout << "\n입력이 잘못되었습니다." << std::endl;
		return 1;
	}
	
	int totalGoblin = 5;
	int Goblincount = 1;
	Monster* monster = new Goblin("고블린");
	int Num = 0;
	

	while (true)
	{
		int AI = rand() % 100;

		std::cout << "\n[1] 공격  [2] 정보 [3] 종료" << std::endl;
		std::cout << "번호를 입력하세요: ";
		std::cin >> Num;
		if (Num == 1)
		{
			player->attack(monster);
			if(monster->getHP() <= 0)
			{
				if (monster != nullptr)
				{
					delete monster;
					monster = nullptr;
				}
				break;
			}
			else
			{
				if (AI < 80)
				{
					monster->attack(player);
				}
			}
			if (player->getHP() <= 0)
			{
				std::cout << "\n" << player->getNickName() << " 님이 사망하셨습니다.\n" << std::endl;
				break;
			}
		}
		else if (Num == 2)
		{
			player->printPlayerStatus();
			monster->printMonsterStatus();
		}
		else if (Num == 3)
		{
			break;
		}
		else
		{
			std::cout << "\n입력이 잘못되었습니다." << std::endl;
		}

	}

	if (player != nullptr)
	{
		delete player;
		player = nullptr;
	}

	return 0;
}