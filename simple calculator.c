#include<stdio.h>
 
 int main(){
  float a,b,result;
  char op;
  
  printf("enter first no\n");
  scanf("%f",&a);
  
  printf("enter operator (+,-,*,/):\n");
  scanf(" %c",&op);
  
  printf("enter second no\n");
  scanf("%f",&b);
  
  switch(op){
  	case '+':
  		result=a+b;
  		printf("result is %.2f",result);
  		
  		break;
  		
  	case '-':
	  result=a-b;
	  printf("result is %.2f",result);
	  break ;
	  
	case '*':
	result=a*b;
	printf("result is %.2f",result);
	break ;
	
	case '/':
	result=a/b;
	if(b != 0){
	
	printf("result is %.2f",result);
}
else{
	printf("the division is not possible");
	
	
}
   break;
	default :
	printf("Invalid operator");
	  	
  }
  return 0;
 }
