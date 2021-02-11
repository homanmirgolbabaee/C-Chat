#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PN_LEN 11 // phone number must be 12 example : 0911 xxx xxxx

int First_Digit(int num) // implementing a function to recognize the first digit of a number
                            // example : 1234 output: 1
{
	while(num >= 10)
	{
		num = num / 10;
	}
	return num;
}
int countDigit(double n)
{
    int count = 0;
    while (n != 0) 
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int main(){
    FILE * fp;
    int user_ch; //user choice in first menu
    double Upn=0;  // user phone number
    int uPn_len; // user phone number length 
    char uUser[15]; 
    int prmpt_pn,prmpt_pss; // prompting for phone number and password in login section
    int pss,re_pss; 
    int user_phones[3]; // array for max users
    int user_pss[3]; // array for max passwords
    int count; 
    int FirstDigit; // variable to store first digit of a number
    printf("\tWelcome to UTMessanger \n"); // main interface
    printf("1.To Signup \n2.To Login \n3.To Quit \n"); // main interface for menu
    scanf("%d",&user_ch);
    while(user_ch != 3 ){
        if(user_ch == 1 ){ // sing up page
            printf("enter your phone number:(must be 11 digits)"); 
            scanf("%d",&Upn);
            printf("entered phone number %d",Upn);
            printf("\n");
          //  FirstDigit =First_Digit(Upn); // this will output the first digit of the number
            //printf("First Digit in pn is :  %d ",FirstDigit);
            printf("Your Phone Number Total digits: %d \n",countDigit(Upn));
           // printf("Your Phone Number Total digits: %d \n", count); // total digits in a number 
            if(count != PN_LEN ){ // checking with max Length
                printf("Wrong Phone Number Format \n");
            }
            printf("enter your password:"); // prompting for password
            scanf("%d",&pss);
            printf("re-type your password:");
            scanf("%d",&re_pss);
            printf("enter a username:"); // prompting for username
            scanf("%s",&uUser);
            printf("user name entered is %s ",uUser);
            while(re_pss != pss ){ // checking for passwords and re-typed passwords
                printf("re-type your password:");
                scanf("%d",&re_pss);
            }
            user_phones[0] = Upn;
            user_pss[0] = pss;
        printf("user created successfully !\n");
        printf("LOGGED IN .....\n");
        printf("1.Send Message \n 2.Show Messages \n 3.Create Channel \n 4.Create Group \n 5.Log Out \n");
        int l_c;
        char s_u[15];
        char s_m[10];
        scanf("%d",&l_c);
        while(l_c != 5){
            if(l_c == 1 ){
                printf("User's Name : ");
                scanf("%s",&s_u);
                printf("Meesage : ");
                scanf("%s",&s_m);
                fp = fopen ("c:\\users\\Homan\\Desktop\\1.txt","w"); // change Homan TO YOUR Computer's username
                fprintf (fp,s_m);
                fclose (fp);
            }
            if(l_c == 2){
                printf("\n");
                printf("Message:%s",s_m);
                printf("\n");
            }
            if(l_c == 3){
                char c_n[15];
                printf("enter your channel's name:");
                scanf("%s",&c_n);
                printf("channel %s created successfully !\n",c_n);
            }
            if(l_c == 4 ){
                char c_n[15];
                printf("enter your channel's name:");
                scanf("%s",&c_n);
                printf("channel %s created successfully !\n",c_n);
            }            
            if(l_c == 5){
                printf("logging out ....");
            }
            printf("1.Send Message \n 2.Show Messages \n 3.Create Channel \n 4.Create Group \n 5.Log Out \n");
            scanf("%d",&l_c);
        }

    }
        if(user_ch == 2){
        printf("eneter phone number : ");
        scanf("%d",&prmpt_pn);
        printf("enter your password : ");
        scanf("%d",&prmpt_pss);
        if(prmpt_pn == user_phones[0] && prmpt_pss == user_pss[0]){
            printf("LOGGED IN .....\n");
            printf("1.Send Message \n 2.Show Messages \n 3.Create Channel \n 4.Create Group \n 5.Log Out \n");
        }
        else{
            printf("USERNAME/PASSWORD Wrong\n");
        }
    }
   printf("1.To Signup \n2.To Login \n3.To Quit \n");        
   scanf("%d",&user_ch);
    // free (iVar);
    }
    printf("quitting ... ");
}