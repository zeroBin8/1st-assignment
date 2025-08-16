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
			std::cout << statusName[i] << "��(��) �Է��ϼ���: ";
			std::cin >> status[i];

			if (status[i] <= MinStatus[i])
			{
				std::cout << "�Է��� ��ġ�� �ʹ� �����ϴ�." << statusName[i] << "��(��) " << MinStatus[i] << "���� Ŀ�� �մϴ�." << std::endl;
				continue;
			}
			else
			{
				break;
			}
		}
	}

	std::cout << "* ������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��)\n" << "=============================================" << std::endl;
	std::cout << "<���� ���� �ý���>\n" << "1. HP ȸ��\n" << "2. MP ȸ��\n" << "3. HP ��ȭ\n" << "4. MP ��ȭ\n" << "5. ���� ��ų ���\n" << "6. ����" << std::endl;
	//���� ��ų�� MP 50�Ҹ�


	int choice;

	while (true)
	{
		std::cout << "��ȣ�� ������ �ּ���: ";
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == 1)
		{
			if (HPpotion <= 0)
			{
				std::cout << "HP ������ �����մϴ�" << std::endl;
				continue;
			}
			else
			{
				status[0] += 20;
				setPotion(choice, &HPpotion, &MPpotion);
				std::cout << "* HP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�.\n";
				std::cout << "���� HP: " << status[0] << "\n";
				std::cout << "���� ���� ��: " << HPpotion << "��" << std::endl;
				continue;
			}			
		}
		else if (choice == 2)
		{
			if (MPpotion <= 0)
			{
				std::cout << "MP ������ �����մϴ�" << std::endl;
				continue;
			}
			else
			{
				status[0] += 20;
				setPotion(choice, &HPpotion, &MPpotion);
				std::cout << "* MP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�.\n";
				std::cout << "���� MP: " << status[1] << "\n";
				std::cout << "���� ���� ��: " << MPpotion << "��" << std::endl;
				continue;
			}
		}
	}

	return 0;
}