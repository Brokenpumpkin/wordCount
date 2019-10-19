#include <iostream>
#include <fstream>
#include <string>
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

int main (int argc,char *argv[]){
	int m = -1, n = 10;
	char *input;
	char *output;
	for(int i = 0 ; i < argc; i++){
		if(strcmp(argv[i], "-i") == 0){
			i++;
			input = argv[i];
		}
		if(strcmp(argv[i], "-o") == 0){
			i++;
			output = argv[i];
		}
		if(strcmp(argv[i], "-m") == 0){
			i++;
			m = *argv[i] - 48;
		}
		if(strcmp(argv[i], "-n") == 0){
			i++;
			n = *argv[i] - 48;
		}
	}	
	//�ļ���ȡ���дתСд 
	string str;
	str=readFileIntoString(input);
	for(int i =0; i < str.length(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
	}
	cout<<str;
	
return 0;
}
