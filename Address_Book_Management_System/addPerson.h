#include <string>
#include <iostream>
using namespace std;

#define MAX 1000

//������Ϣ�ṹ��
struct personInformation {
	string name; //����
	int sex;   //�Ա�
	int age;  //����
	string phone;  //��ϵ�绰
	string addr;   //��ͥ��ַ
};


//��ַ¼�ṹ��
struct addressBook {
	struct personInformation personArray[MAX];
	int size;
};

void addPerson(struct addressBook *adb);