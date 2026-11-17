#include <iostream>
#include <Windows.h>

#include "./src/utils.h"

#include "./src/odai01.h"
#include "./src/odai02.h"
#include "./src/odai03.h"

using namespace std;

void SetUp() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	return;
}

int main() {
	SetUp();

	cout << "レベルチェッカー" << endl;
	cout << "起動日: " + Utils::GetDate() << endl;

	int e = 0;

	cout << "作成したお題ページに飛びます [1, 2, 3]" << endl;
	cin >> e;

	bool flag = true;
	while (flag) {
		flag = !true;
		switch (e) {
		case 1:
			odai01();

			break;

		case 2:
			odai02();

			break;

		case 3:
			odai03();

			break;

		default:
			flag = true;

			cout << "1, 2, 3　のみ入力可能" << endl;
			cin >> e;
			break;
		}
	}

}
