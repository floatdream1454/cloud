#include<iostream>
using namespace std;
const int MAX= 10000;
struct juzhen//�������ṹ��
{
	int arr[MAX][MAX];
	int row, column;
}a,b,c;
void input_size();//�������a b�Ĺ���С
void input_num();//�Ծ���a b���и�ֵ
int main()
{
	cout << "���������a�����b������������" << endl;
	input_size();
	while (1)
	{//����a�����������ھ���b�������ᱨ����Ҫ����������
		if ((a.column != b.row) || (a.row > MAX) || (a.column > MAX) || (b.row > MAX) || (b.column > MAX))
		{
			cout << "������ľ��󲻷���Ҫ������������" << endl;
			input_size();
		}
		else break;
	}
	input_num( );
	for (int i = 1;i <= a.row;i++)//���ݶ���������c
		for (int j = 1;j <= b.column;j++)
			for (int k = 1;k <= a.column;k++)
				c.arr[i][j] = c.arr[i][j] + a.arr[i][k] * b.arr[k][j];
	cout << "����cΪ";
	for (int i = 1;i <= a.row;i++)//�������c�Ľ��
	{
		cout << endl;
		for (int j = 1;j <= b.column;j++)
		{
			cout << c.arr[i][j] << " ";
		}
	}
	return 0;
}
void input_size()
{
	cout << "���������a������������" << endl;
	cin >> a.row >> a.column;
	cout << "���������b������������" << endl;
	cin >> b.row >> b.column;
}
void input_num()
{
	cout << "���������a��ֵ" << endl;
	for (int i = 1;i <= a.row;i++)
		for (int j = 1;j <= a.column;j++)
			cin >> a.arr[i][j];
	cout << "���������b��ֵ" << endl;
	for (int i = 1;i <= b.row;i++)
		for (int j = 1;j <= b.column;j++)
			cin >> b.arr[i][j];
}