#include "showPerson.h"
#include "addPerson.h"

//��ʾ��ϵ�˺���
void showPerson(struct addressBook * adb)
{
	if ( adb->size == 0 ) {
		cout << "��ǰ��¼Ϊ�ա�" << endl;
	}
	else {
		for ( int i = 0; i < adb->size; i++ ) {
			cout << adb->personArray[i].name << "\t";
			cout <<(adb->personArray[i].sex == 1 ? "��": "Ů")<< "\t";
			cout << adb->personArray[i].age << "\t";
			cout << adb->personArray[i].phone << "\t";
			cout << adb->personArray[i].addr << endl;
		}
	}
	
	system("pause");
	system("cls");
}
