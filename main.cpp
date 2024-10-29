#include <stdio.h>

template <typename T1, typename T2>

class Math {
private:
	T1 a;
	T2 b;
public:
	Math(T1 a, T2 b) : a(a), b(b) {}

	T1 Min() {
		if (a <= static_cast<T1>(b)) {
			return static_cast<T1>(a);
		}
		return  static_cast<T1>(b);
	}
};

int main(){
	Math<int, int> a(10, 20);
	Math<float, float> b(1.2f, 0.4f);
	Math<double, double> c(0.01, 0.023);
	Math<int, float> d(10, 1.6f);
	Math<float, double> e(11.1f, 22.2);
	Math<double, int> f(25.6, 64);


	printf("a = %d\n", a.Min());
	printf("b = %f\n", b.Min());
	printf("c = %lf\n", c.Min());
	printf("d = %d\n", d.Min());
	printf("e = %f\n", e.Min());
	printf("f = %lf\n", f.Min());


	return 0;
}