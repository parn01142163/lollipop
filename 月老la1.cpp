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
    printf("輸入生日,格式為:\n年 月 日\n**輸入西元年跟民國年的結果是一樣的\n");
	scanf("%d %d %d",&year, &month, &day);
	if(month>12 || month<0 || day>31 || day<0 ) {
	    printf("87你逆\n");
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
    		printf("身價等級為%d,根本不認識魯蛇2個字\n",a);
			break;
		case 2:
		    printf("身價等級為%d,雖然魯但總有一天會脫魯的\n",a);
			break;
		case 0:
		    printf("身價等級為3,別傻了,大法師,不妨找個男朋友吧\n"); 
		    break;
		}
		reset(); 
	} 
luckybE() {
    printf("Type your birthday.\nYYYY MM DD\n");
	scanf("%d %d %d",&year, &month, &day);
	if(month>12 || month<0 || day>31 || day<0 ) {
	    printf("87你逆\n");
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
	    printf("87你逆\n");
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
    printf("輸入生日,格式為:\n年 月 日\n**輸入西元年跟民國年的結果是一樣的\n");
	scanf("%d %d %d",&year, &month, &day);
	if(month>12 || month<0 || day>31 || day<0 ) {
	    printf("87你逆\n");
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
    		printf("異性吸引力為100分,根本西施\n");
			break;
		case 2:
		    printf("異性吸引力為87分,是多數異性喜歡的類型\n");
			break;
		case 0:
		    printf("異性吸引力為0分,但同性吸引力卻有87分,可以考慮看看\n"); 
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
		printf("看不懂中文?幫你轉成英文?\nWould you prefer to read in English?");
		printf("Show English please press 1,Chinese please press 2"); 
		printf("顯示英文請按 1 ,英文請按 2 ");  
		scanf("%d",&choice);
		switch(choice) {
			case 1: 
				printf("Translating...");
				Sleep(3000); 
				system("cls");
				sexjdEng();
			case 2:
				printf("阿幹不然你是在銃三小?\n");
				printf("重置倒數:3\n");
				Sleep(1000);
				printf("重置倒數:2\n");	
				Sleep(1000);
				printf("重置倒數:1\n");
				Sleep(1000);  
				system("cls");
				reset();
			default:
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("檢測到記憶體崩潰\n");
				Sleep(500);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);				
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("嘗試儲存資料");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".\n");
				Sleep(1500);
				system("cls");
				printf("儲存完畢!\n");
				Sleep(500);
				printf("重置中");
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
	printf("輸入性別,男性為1,女性為2\n"); 
	scanf("%d",&sex);
	if(sex==1) {
	    luckyb(); 
	}else if(sex==2){
	    luckyg();
	} else {
		printf("看不懂中文?幫你轉成英文?\nWould you prefer to read in English?\n");
		printf("Show English please press 1,Chinese please press 2\n"); 
		printf("顯示英文請按 1 ,中文請按 2 \n");  
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
				printf("阿幹不然你是在銃三小?\n");
				printf("重置倒數:3\n");
				Sleep(1000);
				printf("重置倒數:2\n");	
				Sleep(1000);
				printf("重置倒數:1\n");
				Sleep(1000);  
				system("cls");
				sexjd();
			default:
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("檢測到記憶體崩潰\n");
				Sleep(500);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);				
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
				Sleep(300);
				printf("嘗試儲存資料");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".");
				Sleep(1500);
				printf(".\n");
				Sleep(1500);
				system("cls");
				printf("儲存完畢!\n");
				Sleep(500);
				printf("重置中");
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
    printf("繼續請按1 離開請按2\n");
	scanf("%d",&i); 
	if(i==1) {
		system("cls");
		sexjd(); 
	} else if(i==2) {
		exit (0);
	    } else {
		    printf("87你逆!\n"); 
		    reset(); 
	    } 
}
int main (){ 
	sexjd(); 
}
