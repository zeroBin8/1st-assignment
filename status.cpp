#include <iostream>

int status[4] = {};

int main() {
	int HP = 0; // status[0]
	int MP = 0; // status[1]
	int ATK = 0; // status[2]
	int DEF = 0; // status[3]

	while (true) {
		std::cout << "HP�� �Է��ϼ���: ";
		std::cin >> HP;
		if (HP < 50) {
			std::cout << "HP�� �ʹ� �����ϴ�. �ٽ� �Է��� �ּ���.\n";
			continue;
		}
		status[0] = HP;
		break;
	}

	while (true) {
		std::cout << "MP�� �Է��ϼ���: ";
		std::cin >> MP;
		if (MP < 50) {
			std::cout << "MP�� �ʹ� �����ϴ�. �ٽ� �Է��� �ּ���.\n";
			continue;
		}
		status[1] = MP;
		break;
	}

	while (true) {
		std::cout << "���ݷ��� �Է��ϼ���: ";
		std::cin >> ATK;
		if (ATK <= 0) {
			std::cout << "���ݷ��� �ʹ� �۽��ϴ�. �ٽ� �Է��� �ּ���.\n";
			continue;
		}
		status[2] = ATK;
		break;
	}

	while (true) {
		std::cout << "������ �Է��ϼ���: ";
		std::cin >> DEF;
		if (DEF <= 0) {
			std::cout << "������ �ʹ� �۽��ϴ�. �ٽ� �Է��� �ּ���.\n";
			continue;
		}
		status[3] = DEF;
		break;
	}

	// ���ǰ� ���� ���� �ý��� �����

	return 0;
}