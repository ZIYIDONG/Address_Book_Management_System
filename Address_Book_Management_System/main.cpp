#include "showMenu.h"
#include "addPerson.h"
#include <iostream>
using namespace std;

int main()
{
	//����ͨѶ¼
	struct addressBook adb;

	//��ʼ��ͨѶ¼������
	adb.size = 0;

	while (true) {

		//��ʾ�˵�
		showMenu();

		int select = 0;
		cout << "����������ѡ��Ҫʹ�õĹ���:" << endl;
		cin >> select;

		switch (select) {
			case 1:
				//����1�������ϵ��
				addPerson(&adb);
				break;
			case 2:
				//����2����ʾ��ϵ��
				break;
			case 3:
				//����3��ɾ����ϵ��
				break;
			case 4:
				//����4��������ϵ��
				break;
			case 5:
				//����5���޸���ϵ��
				break;
			case 6:
				//����6�����ͨѶ¼��������Ϣ
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