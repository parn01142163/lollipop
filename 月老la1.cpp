#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
int luckyb();
int luckybE();
int luckyg();
int luckygE(); 
int sexjd(); 
int reset(); 
int year, month, day, total, a, i, sex;
luckyb() {
    printf("��J�ͤ�,�榡��:\n�~ �� ��\n**��J�褸�~�����~�����G�O�@�˪�\n");
	scanf("%d %d %d",&year, &month, &day);
	if(month>12 || month<0 || day>31 || day<0 ) {
	    printf("87�A�f\n");
		luckyb();
    }
	if(year>1000) {
		year=year-1911;
		total=year+month+day;
	} else {
		total=year+month+day;
	}
	a=total%3;
    switch(a) {
    	case 1:
    		printf("�������Ŭ�%d,�ڥ����{�Ѿ|�D2�Ӧr\n",a);
			break;
		case 2:
		    printf("�������Ŭ�%d,���M�|���`���@�ѷ|��|��\n",a);
			break;
		case 0:
		    printf("�������Ŭ�3,�O�̤F,�j�k�v,������Өk�B�ͧa\n"); 
		    break;
		}
		reset(); 
	} 
luckybE() {
    printf("Type your birthday.\nYYYY MM DD\n");
	scanf("%d %d %d",&year, &month, &day);
	if(month>12 || month<0 || day>31 || day<0 ) {
	    printf("87�A�f\n");
		luckybE();
    }
	if(year>1000) {
		year=year-1911;
		total=year+month+day;
	} else {
		total=year+month+day;
	}
	a=total%3;
    switch(a) {
    	case 1:
    		printf("Your level: %dst,absolutly a God.\n",a);
			break;
		case 2:
		    printf("Your level is %dnd,you will have a gf some day.\n",a);
			break;
		case 0:
		    printf("Your level is 3rd,\nuh...\nwhat a poor guy..\n"); 
		    break;
		}
		reset(); 
	} 
luckygE() {
    printf("Type your birthday.\nYYYY MM DD\n");
	scanf("%d %d %d",&year, &month, &day);
	if(month>12 || month<0 || day>31 || day<0 ) {
	    printf("87�A�f\n");
		luckybE();
    }
	if(year>1000) {
		year=year-1911;
		total=year+month+day;
	} else {
		total=year+month+day;
	}
	a=total%3;
    switch(a) {
    	case 1:
    		printf("Your level: %dst,absolutly an angle.\n",a);
			break;
		case 2:
		    printf("Your level is %dnd,you will have a bf some day.\n",a);
			break;
		case 0:
		    printf("Your level is 3rd,\nuh...\nwhat a poor girl..\n"); 
		    break;
		}
		reset(); 
	} 
luckyg() {
    printf("��J�ͤ�,�榡��:\n�~ �� ��\n**��J�褸�~�����~�����G�O�@�˪�\n");
	scanf("%d %d %d",&year, &month, &day);
	if(month>12 || month<0 || day>31 || day<0 ) {
	    printf("87�A�f\n");
		luckyg();
    }
	if(year>1000) {
		year=year-1911;
		total=year+month+day;
	} else {
		total=year+month+day;
	}
	a=total%3;
    switch(a) {
    	case 1:
    		printf("���ʧl�ޤO��100��,�ڥ���I\n");
			break;
		case 2:
		    printf("���ʧl�ޤO��87��,�O�h�Ʋ��ʳ��w������\n");
			break;
		case 0:
		    printf("���ʧl�ޤO��0��,���P�ʧl�ޤO�o��87��,�i�H�Ҽ{�ݬ�\n"); 
		    break;
		}
		reset(); 
	} 
int sexjdEng() {
	int choice; 
	printf("Type the sex, Male:1 , Female:2\n"); 
	scanf("%d",&sex);
	if(sex==1) {
	    luckybE(); 
	}else if(sex==2){
	    luckygE();
	} else {
		printf("�ݤ�������?���A�ন�^��?\nWould you prefer to read in English?");
		printf("Show English please press 1,Chinese please press 2"); 
		printf("��ܭ^��Ы� 1 ,�^��Ы� 2 ");  
		scanf("%d",&choice);
		switch(choice) {
			case 1: 
				printf("Translating...");
				Sleep(3000); 
				system("cls");
				sexjdEng();
			case 2:
				printf("���F���M�A�O�bඤT�p?\n");
				printf("���m�˼�:3\n");
				Sleep(1000);
				printf("���m�˼�:2\n");	
				Sleep(1000);
				printf("���m�˼�:1\n");
				Sleep(1000);  
				system("cls");
				reset();
			default:
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("�˴���O����Y��\n");
				Sleep(500);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);				
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("�����x�s���");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".\n");
				Sleep(1500);
				system("cls");
				printf("�x�s����!\n");
				Sleep(500);
				printf("���m��");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				system("cls");
				sexjd();
			}
				
				
			
	
    }
}
sexjd() {
	int choice; 
	printf("��J�ʧO,�k�ʬ�1,�k�ʬ�2\n"); 
	scanf("%d",&sex);
	if(sex==1) {
	    luckyb(); 
	}else if(sex==2){
	    luckyg();
	} else {
		printf("�ݤ�������?���A�ন�^��?\nWould you prefer to read in English?\n");
		printf("Show English please press 1,Chinese please press 2\n"); 
		printf("��ܭ^��Ы� 1 ,����Ы� 2 \n");  
		scanf("%d",&choice);
		switch(choice) {
			case 1: 
				printf("Translating");
				printf(".");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".\n");
				Sleep(3000); 
				system("cls");
				sexjdEng();
			case 2:
				printf("���F���M�A�O�bඤT�p?\n");
				printf("���m�˼�:3\n");
				Sleep(1000);
				printf("���m�˼�:2\n");	
				Sleep(1000);
				printf("���m�˼�:1\n");
				Sleep(1000);  
				system("cls");
				sexjd();
			default:
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("�˴���O����Y��\n");
				Sleep(500);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);				
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("�����x�s���");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".\n");
				Sleep(1500);
				system("cls");
				printf("�x�s����!\n");
				Sleep(500);
				printf("���m��");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				system("cls");
				sexjd();
			}
				
				
			
	
    }
}

 
reset() { 
    printf("�~��Ы�1 ���}�Ы�2\n");
	scanf("%d",&i); 
	if(i==1) {
		system("cls");
		sexjd(); 
	} else if(i==2) {
		exit (0);
	    } else {
		    printf("87�A�f!\n"); 
		    reset(); 
	    } 
}
int main (){ 
	sexjd(); 
}
