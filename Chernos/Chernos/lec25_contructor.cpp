#include<iostream>
using namespace std;
class Entity {
public:
	float X, Y;
	// Q1.����û�й��캯���������X��Y��Ĭ��ֵ�Ƿ��������
	// A1. �������
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
	//Q2.����ֱ����������������û�г�ʼ���ı�����ӡ����ɶ��
	//A2.C6001:ʹ����δ��ʼ�����ڴ�
	float test_noninit{};
	//cout << test_noninit << endl;
	Entity e;
	e.Print();
	//Entity e1(10.0f, 5.0f);
	//e1.Print();
	cin.get();
}