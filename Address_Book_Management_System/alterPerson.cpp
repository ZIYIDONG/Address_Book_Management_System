#include "alterPerson.h"
#include "findPerson.h"
#include "addPerson.h"

using namespace std;

void alterPerson(addressBook* adb){

	cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name = "";
	cin >> name;

	int alterLocation = 0;
	alterLocation = findPerson(adb, name);
	if (alterLocation == -1) {
		cout << "�����������������" << endl;
	}
	else {

		//�޸�����
		string alterName = "";
		cout << "�������޸ĺ��������" << endl;
		cin >> alterName;
		adb->personArray[alterLocation].name = alterName;

		//�޸��Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int alterSex = 0;
		while (true) {
			cin >> alterSex;
			if (alterSex == 1 || alterSex == 2) {
				adb->personArray[alterLocation].sex = alterSex;
				break;
			}
			cout << "������������������";
		}

		//�޸�����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		adb->personArray[alterLocation].age = age;

		//�޸���ϵ��ʽ
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		adb->personArray[alterLocation].phone = phone;

		//�޸�סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		adb->personArray[alterLocation].addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
}
