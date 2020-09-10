#include<unistd.h>

int main(){

	int a = 48%10;

	write(1,&a,1);

}

