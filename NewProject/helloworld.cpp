#include<iostream>

int main() {
	std::cout << "Change" << std::endl;
	//hello라는 함수를 만들었을때 여러개의 라이브러리에 있을 수 있음
	//똑같은 이름을 방지하고자 name space라는 것을 넣음
	//std라는 name space에 있는 cout을 쓰겠다는 의미
	//줄바꿈의 의미 == endl
	//printf를 써도 되긴 함

	system("pause"); //콘솔 화면이 바로 사라짐 방지
	//디버깅모드로 실행하면 깜장색 화면이 떴다가 바로 사라짐

	
	return 0;

}