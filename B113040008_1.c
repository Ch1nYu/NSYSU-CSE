#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float base, height; //�ŧi���ׯB�I�� 
	
	printf("�п�J�T���Ϊ�������� : ");
	scanf("%f", &base); //�ϥ�%f�N����x�s��base��} 
	printf("�п�J�T���Ϊ����� : ");
	scanf("%f", &height); //�ϥ�%f�N����x�s��height��} 
	
	printf("�T���Ϊ����n�� : %f", base*height/2); //��X�̲׵��G, %f�w�]�O�d�p���I�᤻��  
	
	return 0;
}
