#include "iris.h"
#include "data.h"

data::data(int s,double sLength, double sWidth, double pLength, double pWidth)
	:Iris(s, sLength, sWidth,  pLength, pWidth)
{
	ifstream inFile("data.csv", ios::in);
	string lineStr;
	
	while (getline(inFile, lineStr))
	{
		// ��ӡ�����ַ���
		cout << lineStr << endl;
		// ��ɶ�ά��ṹ
		stringstream ss(lineStr);
		string str;
		vector<string> lineArray;
		// ���ն��ŷָ�
		while (getline(ss, str, ','))
			lineArray.push_back(str);
		dataSet.push_back(lineArray);

		
    }
 }
    