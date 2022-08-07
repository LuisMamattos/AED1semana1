#include <stdio.h>
int main(){
    char frase[30];int n,x,num;   
    printf("digite um numero: ");
    scanf("%d",&num);
    x = superFatorial(num);
    printf("o super fatorial de %d eh: %d", num,x);
    
}
int superFatorial(int n){
    if (n<=1){
        return 1;
    }else{
        return ( Fatorial(n) * superFatorial(n-1) );
    }
}
int Fatorial(int m){
    if (m<=1){
        return 1;
    }else{
        return ( m * Fatorial(m-1) );
    }
}