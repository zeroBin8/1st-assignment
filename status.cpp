#include <iostream>

int status[4] = {};

int main() {
	int HP = 0; // status[0]
	int MP = 0; // status[1]
	int ATK = 0; // status[2]
	int DEF = 0; // status[3]

	while (true) {
		std::cout << "HP를 입력하세요: ";
		std::cin >> HP;
		if (HP < 50) {
			std::cout << "HP가 너무 적습니다. 다시 입력해 주세요.\n";
			continue;
		}
		status[0] = HP;
		break;
	}

	while (true) {
		std::cout << "MP를 입력하세요: ";
		std::cin >> MP;
		if (MP < 50) {
			std::cout << "MP가 너무 적습니다. 다시 입력해 주세요.\n";
			continue;
		}
		status[1] = MP;
		break;
	}

	while (true) {
		std::cout << "공격력을 입력하세요: ";
		std::cin >> ATK;
		if (ATK <= 0) {
			std::cout << "공격력이 너무 작습니다. 다시 입력해 주세요.\n";
			continue;
		}
		status[2] = ATK;
		break;
	}

	while (true) {
		std::cout << "방어력을 입력하세요: ";
		std::cin >> DEF;
		if (DEF <= 0) {
			std::cout << "방어력이 너무 작습니다. 다시 입력해 주세요.\n";
			continue;
		}
		status[3] = DEF;
		break;
	}

	// 포션과 스탯 관리 시스템 만들기

	return 0;
}