#include<iostream>
using namespace std;
class Entity {
public:
	float X, Y;
	// Q1.测试没有构造函数的情况下X和Y的默认值是否是随机的
	// A1. 是随机的
	/*
	Entity() {
		X = 0.0f;
		Y = 0.0f;
		cout << "Created Entity!" << endl;
	}
	Entity(float x, float y) {
		X = x;
		Y = y;
		cout << "Created Entity with x = " << x << " and y = " << y << endl;
	}*/
	void Print() {
		cout << X << ", " << Y << endl;
	}
};

int main(){
	//Q2.测试直接在主函数里声明没有初始化的变量打印出来啥样
	//A2.C6001:使用了未初始化的内存
	float test_noninit{};
	//cout << test_noninit << endl;
	Entity e;
	e.Print();
	//Entity e1(10.0f, 5.0f);
	//e1.Print();
	cin.get();
}