 #include <stdio.h> 
 
   #define IN   1  /* inside a word */ 
   #define OUT  0  /* outside a word */ 
 
   /* Inputs one word per line */ 
   main() 
   { 
       int c, state;
       state = OUT; 
        
       while ((c = getchar()) != EOF) { 
           
           if (state == IN & c == ' ' || c == '\n' || c == '\t'){
			putchar('\n');
			state = OUT;
			}
           else if (state == IN)
				putchar(c);
			
			if (state == OUT && c != ' ' && c != '\n' && c != '\t'){
				state = IN;
				putchar(c);
			}
            
       } 
       
   } 