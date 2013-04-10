#include "timeFunc.h"
//implementation for various time related functions

void delay(int wait) //makes delays in seconds
{
	
	time_t currTime;
	
    //gettimeofday(&currTime,NULL);
	time(&currTime);
	time_t start = currTime;

	struct tm *pCT;
	struct tm *pST;
	pST = gmtime(&start);
    do{
        time(&currTime);
		pCT = gmtime(&currTime);
        //cout << start.tv_sec << "\t" << currTime.tv_sec << endl;
	}while((currTime-start) < wait);
}
