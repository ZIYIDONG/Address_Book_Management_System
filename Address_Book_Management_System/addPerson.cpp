#include "addPerson.h"

//�����ϵ�˺���
void addPerson(struct addressBook *adb)
{
	//�ж�ͨѶ���Ƿ�����
	if (adb->size > 1000) {
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else {

		//����
		string name = "";
		cout << "����������" << endl;
		cin >> name;
		adb->personArray[adb->size].name = name;


		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				adb->personArray[adb->size].sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		adb->personArray[adb->size].age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		adb->personArray[adb->size].phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ" << endl;
		string address = "";
		cin >> address;
		adb->personArray[adb->size].addr = address;

		//����ͨѶ¼����
		adb->size++;

		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");
	}
}
