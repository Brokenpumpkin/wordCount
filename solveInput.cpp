#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
#include <sstream>
#include <stdlib.h>
using namespace std;

struct str{
	string name;
	int count;	//name���ִ��������ʼ����� 
	int flag;	//0Ϊ���ַ� 
	int flag1; 	//�ж��Ƿ������,���ʼ�����
	int flag2; 	//�ж��Ƿ������,���ʼ�����
	bool ifend; //�Ƿ�����ĩ����������� 
};

string change_small(string stri)
{
	for(int i =0; i < stri.length(); i++){
		if(stri[i] >= 'A' && stri[i] <= 'Z'){
			stri[i] += 32;
		}
	}
	return stri;
}
 
string readFileIntoString(char * filename)
{
ifstream ifile(filename);
//���ļ����뵽ostringstream����buf��
ostringstream buf;
char ch;
while(buf&&ifile.get(ch))
buf.put(ch);
//������������buf�������ַ���
return buf.str();
}
