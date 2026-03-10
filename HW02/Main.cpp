// Main.cpp

#include <iostream>
#include <ctime>
#include "Actor.h"
#include "player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"
#include "Ork.h"

int main(void)
{
	std::string jobs[] = { "전사", "궁수", "마법사", "도적" };
	int job_choice = 0;
	std::string nickname;

	Player* player = nullptr;
	std::cout << "닉네임을 입력해주세요: ";
	std::cin >> nickname;

	std::cout << "\n전직을 시작합니다" << std::endl;
	std::cout << nickname << "님, 어서오세요." << std::endl;
	std::cout << "직업을 선택해주세요" << std::endl;

	for (int i = 0; i < 4; ++i)
	{
		std::cout << (i + 1) << ". " << jobs[i] << std::endl;
	}

	std::cout << "번호를 입력해주세요: ";
	std::cin >> job_choice;

	switch (job_choice)
	{
	case 1:
		player = new Warrior(nickname);
		break;
	case 2:
		player = new Archer(nickname);
		break;
	case 3:
		player = new Magician(nickname);
		break;
	case 4:
		player = new Thief(nickname);
		break;
	default:
		std::cout << "\n번호를 잘못 입력하셧습니다." << std::endl;
		return 1;
	}

	Ork monster;

	int num = 0;

	while (true)
	{
		int avoid = rand() % 100;
		std::cout << "1.정보 2.공격\n" << std::endl;
		std::cout << "번호를 선택해주세요: ";
		std::cin >> num;

		if (player->getHP() <= 0)
		{
			std::cout << "\n체력이 다해 쓰러졋습니다." << std::endl;
			break;
		}

		if (num == 1)
		{
			player->PlayerStatus();
			monster.MonsterStatus();
		}
		else if (num == 2)
		{
			player->attack(monster);
			monster.MonsterStatus();
			if (monster.getHP() <= 0)
			{
				break;
			}
			else
			{
				if (avoid < 20)
				{
					std::cout << "\n공격을 피했습니다.\n" << std::endl;
					
				}
				else
				{
					monster.attack(*player);
					player->PlayerStatus();
				}
			}
		}
		else
		{
			break;
		}
	}
	if (player != nullptr)
	{
		delete player;
	}

	return 0;
}