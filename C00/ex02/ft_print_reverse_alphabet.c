#include<unistd.h>
void ft_print_reverse_alphabet(void);

int main(void){

ft_print_reverse_alphabet();
}

void ft_print_reverse_alphabet(void){

	char c = 'z';
	

	while(c >= 'a'){
		write(1,&c,1);
		c--;

	
	}

}
