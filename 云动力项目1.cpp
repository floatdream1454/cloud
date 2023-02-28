#include<iostream>
using namespace std;
const int MAX= 10000;
struct juzhen//定义矩阵结构体
{
	int arr[MAX][MAX];
	int row, column;
}a,b,c;
void input_size();//定义矩阵a b的规格大小
void input_num();//对矩阵a b进行赋值
int main()
{
	cout << "请输入矩阵a与矩阵b的行数与列数" << endl;
	input_size();
	while (1)
	{//矩阵a的列数不等于矩阵b的行数会报错，并要求重新输入
		if ((a.column != b.row) || (a.row > MAX) || (a.column > MAX) || (b.row > MAX) || (b.column > MAX))
		{
			cout << "你输入的矩阵不符合要求，请重新输入" << endl;
			input_size();
		}
		else break;
	}
	input_num( );
	for (int i = 1;i <= a.row;i++)//根据定义计算矩阵c
		for (int j = 1;j <= b.column;j++)
			for (int k = 1;k <= a.column;k++)
				c.arr[i][j] = c.arr[i][j] + a.arr[i][k] * b.arr[k][j];
	cout << "矩阵c为";
	for (int i = 1;i <= a.row;i++)//输出矩阵c的结果
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
	cout << "请输入矩阵a的行数与列数" << endl;
	cin >> a.row >> a.column;
	cout << "请输入矩阵b的行数与列数" << endl;
	cin >> b.row >> b.column;
}
void input_num()
{
	cout << "请输入矩阵a的值" << endl;
	for (int i = 1;i <= a.row;i++)
		for (int j = 1;j <= a.column;j++)
			cin >> a.arr[i][j];
	cout << "请输入矩阵b的值" << endl;
	for (int i = 1;i <= b.row;i++)
		for (int j = 1;j <= b.column;j++)
			cin >> b.arr[i][j];
}