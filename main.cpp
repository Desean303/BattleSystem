#include<iostream>
using namespace std;

void BattleSystem();
int MonsterGen();
int PlayerHealth = 50;

int main() {
	int room = 1;
	char input = 'a';
	srand(time(NULL));
	while (PlayerHealth >= 0 && input != 'q') { //gameloop
		switch (room) {
		case 1:
			cout << "You're in room 1, you can go (s)outh" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;
		case 2:
			BattleSystem();
			cout << "You're in room 2, you can go (n)orth. there's a monster in the corner. (a) to attack!" << endl;
			cin >> input;
			if (input == 'n')
				room = 1;
			else if (input == 'a')
				BattleSystem();
			    if (PlayerHealth <= 0)
			        break;
			break;
		}
	}
	if (playerHealth <= 0)
		cout << "Game Over!" << endl;
}

int Monstergen() {
	int num = rand() % 100;
	if (num < 50) {
		cout << "a skeleton spawned!" << endl;
		return 1;
	}
	else {
		cout << "a skeleton spawned!" << endl;
		return 2;
	}
}
void BattleSystem() {
	int MonsterType = MonsterGen();
	int MonsterType = 0;
	int MonsterAtk = 0;

	if (MonsterType == 1)
		MonsterHealth = 40;
	else if (MonsterType == 2) {
		MonsterHealth = 20;

	}

	while (MonsterHealth > 0 && PlayerHealth > 0) {
		if (MonsterType == 1)
			MonsterAtk = rand() % 25;
		else if (MonsterType == 2)
			MonsterAtk = rand() % 10 + 5;
		cout << "the Monster attacks you for " << MonsterAtk << " dmg!" << endl;

		PlayerHealth -= MonsterAtk;

		PlayerAtk = rand() % 11 + 20;
		cout << "You attack the Monster for " << PlayerAtk << " dmg!" << endl;
		MonsterHealth -= PlayerAtk;
		system("pause");
		cout << "Your health is now " << PlayerHealth << ", and the monster's health is " << MonsterHealth << endl;
	}
	if (MonsterHealth <= 0) {
		cout << "you won!" << endl;
	}
	else
		cout << "you died..." << endl;

}








	}
}
































