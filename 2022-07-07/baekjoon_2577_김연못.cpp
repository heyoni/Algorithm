#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int sum[10] = { };
	int mul;
	cin >> a;
	cin >> b;
	cin >> c;
	mul = a * b * c;

	if ((a >= 100 && a < 1000) && (b >= 100 && b < 1000) && (c >= 100 && c < 1000))
	{
		while (mul != 0) {
			sum[mul % 10]++;	// res���� ������ 10�� ���� �ڸ����� ��� �ε����� Ȱ��
			mul /= 10;			//  �� ȸ �ڸ����� ���̱� ���� 10�� ������.
		}
		for (int i = 0; i < 10; i++)
		{

			cout << sum[i] << endl;
		}
	}
	else
	{
		cout << "error...";
	}
	

	return 0;
}

