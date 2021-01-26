#include <iostream> //입출력
using namespace std;// std::cout, std::cin, std::endl 을 사용

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int FuntionDefaultValue(int a = 1, int b = 1, int c = 1)
{
	return a * b * c;
}

int FuntionOverloading(int n1, int n2)
{
	return n1 * n2 * 1;
}

int FuntionOverloading(int n1, int n2, int n3)
{
	return n1 * n2 * n3;
}

int main()
{
	//io
	std::cout << "Hello C++" << std::endl;

	//swap
	int n1 = 20, n2 = 30;
	swap(&n1, &n2);
	std::cout << n1 << ' ' <<n2 << std::endl;

	//function default value
	std::cout << "[3,4,D] : " << FuntionDefaultValue(3,4) <<std::endl;

	//function overloading
	std::cout << "[3, 4, D]: " << FuntionOverloading(3, 4) << std::endl;
	std::cout << "[3, 4, 4]: " << FuntionOverloading(3, 4, 4) << std::endl;


}
