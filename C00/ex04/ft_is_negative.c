#include<unistd.h>
void ft_is_negative(int n);

int main(void){
ft_is_negative(-1);
}

void ft_is_negative(int n){
char y = 'p';
char p = 'n';

	if(n < 0){
		write(1,&p,1);
	}else{
	
		write(1,&y,1);
	}


}
