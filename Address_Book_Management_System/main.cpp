#include "showMenu.h"
#include <iostream>

int main()
{
	while (true) {

		showMenu();

		int select = 0;
		cout << "����������ѡ��Ҫʹ�õĹ���:" << endl;
		cin >> select;



		switch (select) {
			case 1:
				//����1
				break;
			case 2:
				//����2
				break;
			case 3:
				//����3
				break;
			case 4:
				//����4
				break;
			case 5:
				//����5
				break;
			case 6:
				//����6
				break;
			case 0://�˳�ͨѶ¼����ϵͳ
				cout << "��ӭ�´�ʹ��!" << endl;
				system("pause");
				return 0;
				break;
		}
	}



	system("pause");

	return 0;
}