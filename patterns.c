 #include <stdio.h>
 #include <cs50.h>
 int main (void){
 int x = get_int("Enter type of pattern (1 or 2) ");
 int n = get_int("Number of rows");
 if (x==1) {
 for(int i=1; i<=n; i++){
 for(int j=1; j<=(n+1)-i; j++){		
  printf("#");
}
printf("\n");
} 	
}
else if(x==2){
for(int i=1; i<=n; i++){
for(int j=1; j<=n-i; j++){		
printf(" ");
}
for(int k=1; k<=i;k++){
printf("#");
}
printf("\n");
} 	
}	                
}
