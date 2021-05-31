#include <iostream>

using namespace std;
//스마트 포인터는 메모리 누수를 막기위한 수단
//즉 포인터처럼 동작하는 클래스 탬플릿 
//기본적으로 힙영역에 동적 할당된 메모리를 해제하기 위해서는 delete 키워드 사용
//스마트 포인터를 이용하면 메모리 누수를 더 효과적으로 방지
//스마트 포인터에 할당된 내용을 넣어주면 알아서 해제함
int main(void) {
	unique_ptr<int> p1(new int(10)); //특정한 객체를 처리할때==>소유권을 갖고 있을 때 
	unique_ptr<int> p2;
	cout << "스마트 포인터 1: " << p1 << "\n";
	cout << "스마트 포인터 2: " << p2 << "\n";
	cout << "--- 소유권 이전 ---\n";
	p2 = move(p1); //소유권 이전
	cout << "스마트 포인터 1: " << p1 << "\n";
	cout << "스마트 포인터 2: " << p2 << "\n";
	cout << "--- 메모리 할당 해제 ---\n";
	p2.reset(); //메모리 할당 해제
	cout << "스마트 포인터 1: " << p1 << "\n";
	cout << "스마트 포인터 2: " << p2 << "\n";
	system("pause");
}