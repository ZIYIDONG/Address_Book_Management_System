#include "showMenu.h"
#include <iostream>

int main()
{
	while (true) {

		showMenu();

		int select = 0;
		cout << "请输入数字选择要使用的功能:" << endl;
		cin >> select;



		switch (select) {
			case 1:
				//功能1
				break;
			case 2:
				//功能2
				break;
			case 3:
				//功能3
				break;
			case 4:
				//功能4
				break;
			case 5:
				//功能5
				break;
			case 6:
				//功能6
				break;
			case 0://退出通讯录管理系统
				cout << "欢迎下次使用!" << endl;
				system("pause");
				return 0;
				break;
		}
	}



	system("pause");

	return 0;
}