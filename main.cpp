#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include<string.h>  
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

 void outputRes(char *output)
{
	char *data;
	data=output;
	char way[]="./";
	int charactersNumber,wordsNumb,linesNumb,showTimeLines;
	double showTime;
	string name="monday tuesday wednesday";
	charactersNumber=2;
	wordsNumb=1;
	linesNumb=1;
	showTimeLines=2;
	showTime=3;	
	strcat(way,output);
	cout<<way; 
	ofstream outfile;
	outfile.open(way);
	outfile<<"characters: "<<charactersNumber<<endl;
	outfile<<"words: "<<wordsNumb<<endl;
	outfile<<"lines: "<<linesNumb<<endl;
	
	for(int i=0;i<showTimeLines;i++)
	{
		outfile<<"<"<<name<<">: "<<showTime<<endl;
	}
	outfile.close();
}
int main()
{
	//�ļ���
	char fn[]="input.txt";
	char output[]="output.txt";
	
	string str;
	str=readFileIntoString(fn);
	outputRes(output);
  
}

