#include "iris.h"
#include "data.h"

data::data(int s,double sLength, double sWidth, double pLength, double pWidth)
	:Iris(s, sLength, sWidth,  pLength, pWidth)
{
	ifstream inFile("data.csv", ios::in);
	string lineStr;
	
	while (getline(inFile, lineStr))
	{
		// 打印整行字符串
		cout << lineStr << endl;
		// 存成二维表结构
		stringstream ss(lineStr);
		string str;
		vector<string> lineArray;
		// 按照逗号分隔
		while (getline(ss, str, ','))
			lineArray.push_back(str);
		dataSet.push_back(lineArray);

		
    }
 }
    