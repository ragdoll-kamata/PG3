#include <stdio.h>
#include <iostream>

template <typename T1, typename T2>

class Math {
private:
	T1 a;
	T2 b;
public:
	Math(T1 a, T2 b) : a(a), b(b) {}

	T1 Min() {
		if (a <= b) {
			return static_cast<T1>(a);
		}
		return  static_cast<T2>(b);
	}
};

int main(){
	Math<int, float> a(10, 50.1f);
	Math<int, double> b(80, 13.23);
	Math<float, int> c(2.4f, 9);
	Math<float, double> d(11.9f, 3.5);
	Math<double, int> e(66.6, 33);
	Math<double, float> f(25.6, 51.2f);

	std::cout << "int(10)　と float(50.1f) を比べて小さい数字を表す：" << a.Min() << std::endl;
	std::cout << "int(80)　と double(13.23) を比べて小さい数字を表す：" << b.Min() << std::endl;
	std::cout << "float(2.4f)　と int(9) を比べて小さい数字を表す：" << c.Min() << std::endl;
	std::cout << "float(11.9f)　と double(3.5) を比べて小さい数字を表す：" << d.Min() << std::endl;
	std::cout << "double(66.6)　と int(33) を比べて小さい数字を表す：" << e.Min() << std::endl;
	std::cout << "double(25.6)　と float(51.2f) を比べて小さい数字を表す：" << f.Min() << std::endl;


	return 0;
}