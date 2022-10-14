#include<iostream>
#include<math.h>
using namespace std;
void main() {

	int num;
	cout << "Enter Number : ";
	cin >> num;
	int digit = 0, ans = 0,i=0;
	
	while (num!=0) {
		digit = num % 10;
		if (digit==1) {
			 ans = (pow(2,i)*pow(10,i)) + ans;
			i++;
			num = num / 10;
		}
		cout << "Answer is : " << ans << endl;
	}

}