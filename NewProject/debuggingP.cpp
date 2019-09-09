#include <iostream>

class LetDebug
{

public :
	void printNum()

	{
		short s1 = 32767;
		short s2 = 1;
		int s3 = (short) s1 + s2;
		//short는 2바이트 
		std::cout << s3 << std::endl;
	}

};

int main()
{
	LetDebug *ld = new LetDebug;
	//클래스의 주소를 갖는 포인터
	ld->printNum();
	//포인터에서 함수를 사용할 땐 위와 같이
	
	return 0;
}