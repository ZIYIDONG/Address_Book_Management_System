#include "showMenu.h"
#include "addPerson.h"
#include "showPerson.h"
#include "findPerson.h"
#include "deletePerson.h"
#include "alterPerson.h"

#include <iostream>
#include <string>

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
		int location = 0;
		int personLocation = 0;
		string findName = "";
		cout << "����������ѡ��Ҫʹ�õĹ���:" << endl;
		cin >> select;

		switch (select) {
			case 1:
				//����1�������ϵ��
				addPerson(&adb);
				break;
			case 2:
				//����2����ʾ��ϵ��
				showPerson(&adb);
				break;
			case 3:
				//����3��ɾ����ϵ��
				cin >> findName;
				personLocation = findPerson(&adb,findName);
				if (personLocation == -1) {
					cout << "�����ҵ���ϵ�˲�����" << endl;
					break;
				}
				else {
					deletePerson(&adb, personLocation);
					cout << "ɾ���ɹ�" << endl;
				}
				break;
			case 4:
				//����4��������ϵ��
				cin >> findName;
				location = findPerson(&adb, findName);
				if (location == -1) {
					cout << "���޴���" << endl;
				}
				else {
					cout << "������" << adb.personArray[location].name << "\t";
					cout << "�Ա�" << adb.personArray[location].sex << "\t";
					cout << "���䣺" << adb.personArray[location].age << "\t";
					cout << "�绰��" << adb.personArray[location].phone << "\t";
					cout << "סַ��" << adb.personArray[location].addr << endl;
				}
				break;
			case 5:
				//����5���޸���ϵ��
				alterPerson(&adb);
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