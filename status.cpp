#include <iostream>
#include <string>

int status[4] = {};//0 - HP, 1 - MP, 2 - ATK, 3 - DEF
std::string statusName[4] = {"HP", "MP", "ATK", "DEF"};
int MinStatus[4] = { 50, 50, 0, 0 };

int HPpotion = 5;
int MPpotion = 5;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	if (count == 1)
	{
		*p_HPPotion -= 1;
		HPpotion = *p_HPPotion;
	}
	else
	{
		*p_MPPotion -= 1;
		MPpotion = *p_MPPotion;
	}

}


int main() {
	for (int i = 0; i < 4; ++i)
	{
		while (true)
		{
			std::cout << statusName[i] << "을(를) 입력하세요: ";
			std::cin >> status[i];

			if (status[i] <= MinStatus[i])
			{
				std::cout << "입력한 수치가 너무 낮습니다." << statusName[i] << "은(는) " << MinStatus[i] << "보다 커야 합니다." << std::endl;
				continue;
			}
			else
			{
				break;
			}
		}
	}

	std::cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)\n" << "=============================================" << std::endl;
	std::cout << "<스탯 관리 시스템>\n" << "1. HP 회복\n" << "2. MP 회복\n" << "3. HP 강화\n" << "4. MP 강화\n" << "5. 공격 스킬 사용\n" << "6. 종료" << std::endl;
	//공격 스킬은 MP 50소모


	int choice;

	while (true)
	{
		std::cout << "번호를 선택해 주세요: ";
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == 1)
		{
			if (HPpotion <= 0)
			{
				std::cout << "HP 포션이 부족합니다" << std::endl;
				continue;
			}
			else
			{
				status[0] += 20;
				setPotion(choice, &HPpotion, &MPpotion);
				std::cout << "* HP가 20 회복되었습니다. 포션이 1개 차감됩니다.\n";
				std::cout << "현재 HP: " << status[0] << "\n";
				std::cout << "남은 포션 수: " << HPpotion << "개" << std::endl;
				continue;
			}			
		}
		else if (choice == 2)
		{
			if (MPpotion <= 0)
			{
				std::cout << "MP 포션이 부족합니다" << std::endl;
				continue;
			}
			else
			{
				status[0] += 20;
				setPotion(choice, &HPpotion, &MPpotion);
				std::cout << "* MP가 20 회복되었습니다. 포션이 1개 차감됩니다.\n";
				std::cout << "현재 MP: " << status[1] << "\n";
				std::cout << "남은 포션 수: " << MPpotion << "개" << std::endl;
				continue;
			}
		}
	}

	return 0;
}