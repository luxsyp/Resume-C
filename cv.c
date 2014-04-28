
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 
typedef         struct s_me
{
        int     skills;
        char    *name;          // Damien Locque
        char    *email;         // locquedamien@gmail.com
        char    *phone_number;  // +33 6 85 19 32 97
} Me;
typedef Me New_Me;
typedef Me Someone;
typedef Me Student;
typedef Me Graduate_Student;
 
enum e_skills {
        BORN                    = 0,
        UNIX                    = 1,
        lang_C                  = 1,
        lang_CPP                = 1,
        iOS                     = 1,
        ObjectiveC              = 1,
        Java                    = 1,
        HTML                    = 1,
        CSS                     = 1,
        JavaScript              = 1,
        jQuery                  = 1,
        Android                 = 1,
        ComputerScienceSkills   = 2,
        Bachelor_Degree         = 2,
        Master_Degree           = 2
};
 
#define FRENCH                                  true
#define ENGLISH                                 !FRENCH
#define KOREAN                                  !(FRENCH && ENGLISH)
 
 
 
/*
* Hi, my name is Damien Locque
* I am actually 22 year old
* I can speak french and english
*/
New_Me                                  GrowUP(Me damien)
{
        damien.skills += 22;   
        damien.skills += FRENCH;
        damien.skills += ENGLISH;
        return damien;
}
 
/*
* I went to a French Computer Science school named EPITECH
* I mainly learned C / C++
* Daily usage of UNIX system (Fedora/Freebsd/Mac)
*/
Graduate_Student                GoToSchool_EPITECH(Student damien)
{
        damien.skills += UNIX;
        damien.skills += lang_C;
        damien.skills += lang_CPP;
        damien.skills += Bachelor_Degree;
        damien.skills += Master_Degree;
        return (Graduate_Student)(damien);
}
 
/*
* I have been working for start-up company
* Development of a commercial website in Java.
* Commercial platform using Google map API.
*/
New_Me                                  GoTo_FirstInternship(Me damien)
{
        damien.skills += Java; 
        damien.skills += HTML; 
        damien.skills += CSS;  
        damien.skills += JavaScript;   
        damien.skills += jQuery;       
        return damien;
}
 
/*
* I have been working for a company named : CSC (Computer Science Corporation)
* Development of an iOS application and web application Geomedica.
* Visualize the location of health professionals everywhere in France.
*/
New_Me                                  GoTo_SecondInternship(Me damien)
{
        damien.skills += iOS;
        damien.skills += ObjectiveC;
        return damien;
}
 
/*
* I went abroad in Korea for a year between 2012 and 2013
* Where i learned some korean basics
* mainly improve my english
* And improve my computer science skills
*/
New_Me                                  GoTo_Korea(Me damien)
{
        damien.skills += KOREAN;
        damien.skills += ENGLISH;
        damien.skills += ComputerScienceSkills;
        return damien;
}
 
/*
* I have been working for start-up named GoFindIt Technologies
* Developed android apps for hotels located in Paris and London.
* More than 80 published apps.
*/
New_Me                                  GoTo_FirstJob(Me damien)
{
        damien.skills += Java; 
        damien.skills += Android;
        return damien;
}
 
/*
*
*/
int     main(int arch, char ** argv)
{
        Me damien;
 
        damien.name = "Damien Locque";
        damien.phone_number = "+33 6 85 19 32 97";
        damien.email = "locquedamien@gmail.com";

        damien.skills += BORN;
 
        damien = GrowUP(damien);
        damien = GoToSchool_EPITECH(damien);
        damien = GoTo_FirstInternship(damien);
        damien = GoTo_SecondInternship(damien);
        damien = GoTo_Korea(damien);
        damien = GoTo_FirstJob(damien);
 
        printf("%s\n\nWhy would you hire me ?\n%d\n\nContacte me at :\t%s\nOr\t\t\t%s\n", damien.name, damien.skills, damien.email, damien.phone_number);
 
        return (0);
}