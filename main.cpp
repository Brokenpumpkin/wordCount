#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
  
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

struct final_word{	//���ʽ�� 
	
};
struct final_group{	//������ 
	
};

string readFileIntoString(char * filename)		//�����ļ����� 
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
  
int main()
{
//�ļ���
char * fn="input.txt";
string str;
str=readFileIntoString(fn);
printf("%c",str[12]);
  
}

