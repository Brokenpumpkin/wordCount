#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "CountLine.h"
#include "solveInput.h"
#include "SummaryChars.h" 
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
	int line_num;	
	//�ļ���ȡ���дתСд 
	string str;
	str=readFileIntoString(input);
	line_num = countline(str);	//���� 
	str = change_small(str);	//��Сд 
	printf("�ַ�����%d",summaryChars(str));
	cout<<str;
return 0;
}
//int main()
//{
////�ļ���
//char fn[]="input.txt";
//string stri;
//stri=readFileIntoString(fn);
//printf("%c",stri[12]);
//printf("%d",countline(stri));  
//}


