#include <iostream>

class LetDebug
{

public :
	void printNum()

	{
		short s1 = 32767;
		short s2 = 1;
		int s3 = (short) s1 + s2;
		//short�� 2����Ʈ 
		std::cout << s3 << std::endl;
	}

};

int main()
{
	LetDebug *ld = new LetDebug;
	//Ŭ������ �ּҸ� ���� ������
	ld->printNum();
	//�����Ϳ��� �Լ��� ����� �� ���� ����
	
	return 0;
}