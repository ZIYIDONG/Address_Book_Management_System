#include <string>
#include <iostream>
using namespace std;

#define MAX 1000

//个人信息结构体
struct personInformation {
	string name; //姓名
	int sex;   //性别
	int age;  //年龄
	string phone;  //联系电话
	string addr;   //家庭地址
};


//地址录结构体
struct addressBook {
	struct personInformation personArray[MAX];
	int size;
};

void addPerson(struct addressBook *adb);