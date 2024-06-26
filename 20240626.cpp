
#include <iostream>
#include <vector>
#include <list>
#include <string>

//C++Standard Library : STL
//Generic Programming
//Contatiner Iterator Algorithmn

void StringPrinter(const std::string& input)
{
	std::cout << input.capacity() << "-" <<input.length() << ":" << input << std::endl;
}
int main()
{
	std::string str1;
	//StringPrinter(str1);

	//unsingned int
	//size_t a;

	std::string container("hello");
	//string(const string&str, size_t pos, size_t len = npos); npos = end 마지막;
	std::string str3(container, 0);

	std::string str4(10, 'a');
	//StringPrinter(str4);

	//std::string::iterator itr;
	//itr = container.begin(); //포인터 -> 시작 가르킨다
	//str2.end();// <- 끝을 가르킨다.

	//std::string::iterator result = std::find(str2.begin(), str1.end(), 'o');

	int result2 = std::count(container.begin(), container.end(), 'l');

	//std::vector<int> container{ 1,2,3,4,5, };

	//std::sort(container.begin(), container.end());

	std::string::iterator itr = container.begin();

	while (itr != container.end())
	{
		std::cout << *itr++ << std::endl;
	}

	// 문자열 <-> 숫자
	// "123"      123

	std::string s1;
	int number = 123;

	s1 = std::to_string(number);
	int num1 = std::stoi(s1);
	// std::stof(), std::stod()
	std::cout << num1 << std::endl;

}