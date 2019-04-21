#include<iostream>
#include<string>

using namespace std;
//TEDADE RAGHAM HAYE HAR ADAD
int coutDigit(int digit) {
	int result = 0;
	while (digit >= 10) {
		if (digit / 10 >= 10) {
			result++;	
		}	
		else {
			result++;
		}
		digit = digit / 10;
	}
	result++;
	
	return result;
}

//FUNCTION HESAAB KARDANE ZARB 2 ADDADD BOZORG
long prod(long a,long b) {
	int N = coutDigit(a);
	int M = coutDigit(b);
	int n;
	if (N > M)
		n = N;
	else {
		n = M;
	}
	long x, y, z, w;
	if (a == 0 || b == 0) { return 0; }
	if (n<=2) {
		return a * b;
	}
	int newN = n / 2;
	x = a / pow(10, (double)(n-newN));
	y = a % (int) pow(10, (double)(n - newN));
	z = b / pow(10, (double)(n - newN));
	w = b % (int)pow(10, (double)(n - newN));
	long rr = prod(x, z)*pow(10, 2 * (double)(n-newN)) + (prod(w , x) + prod(y, z))*pow(10, (double)(n-newN)) + prod(y, w);
	cout << "\nwith n: " << n << " result is : " << rr;
	return (rr);

}
//MAIN
int main() {

	long a = 1212;
	long b = 121;
	cout << endl << prod(a, b)<<endl;



	//ending
	char x;
	cout << "press any key an Enter to exit.";
	cout << endl;
	cin >> x;


}