#include <iostream>
#include <string>
#include <cctype>
#include <conio.h>
#include <map>
#include <stdlib.h>
#include <time.h>
using namespace std;
map<char,int> m;//used to print movie name after each guess
map<char,int> maping;//used to contain all the characters of the string except vowels
map<int,int> random;//used to store random indexes
class movie_easy
{ string name;
  string hint1;
  string hint2;
  string hint3;
  public:
  void movie_init(string n,string h1,string h2,string h3)//putting info of the movie
  {name=n;
    hint1=h1;
    hint2=h2;
    hint3=h3;
  }
   int dislen()//returns the length of the movie name
    {return name.length();
    }
    void dis_hints(int n)//displays hints
    {switch(n)
     { case 1:cout<<hint1<<"\n";
              break;
       case 2:cout<<hint2<<"\n";
              break;
       case 3:cout<<hint3<<"\n";
              break;
       default : cout<<"Hint limit Exceeded\n";
              break;              
     }
    }
   void dis_init() // displays the initial movie name with blanks;
    {int len=name.length();
    for(int i=0;i<5;i++)
         cout<<"\t";
      for(int i=0;i<len;i++)
       if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
         printf(" %c ",name[i]);
       else
         printf(" ___ ");
      printf("\n");     
      for(int i=0;i<5;i++)
         cout<<"\n";
    }
  void dis_comp()//displays the name after each guess
    {int len=name.length();
    for(int i=0;i<5;i++)
         cout<<"\n";
      for(int i=0;i<5;i++)
         cout<<"\t";       
      for(int i=0;i<len;i++)
       if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
         printf(" %c ",name[i]);
       else 
         { if(m.find(name[i])!=m.end())
            printf(" %c ",name[i]);
           else 
            printf(" ___ ");
         }
      printf("\n");
      for(int i=0;i<5;i++)
         cout<<"\n";  
   }
  void add_map()//maps all the characters of the name to "maping" to check whether all characters have been guessed
  {int len=name.length();
   for(int i=0;i<len;i++)
    if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
      continue;
    else if(maping.find(name[i])==maping.end())
      maping.insert({name[i],1});
  }  
};
class movie_medium
{ string name;
  string hint1;
  string hint2;
  string hint3;
  public:
  void movie_init(string n,string h1,string h2,string h3)//putting info of the movie
  {name=n;
    hint1=h1;
    hint2=h2;
    hint3=h3;
  }
   int dislen()//returns the length of name of the movie
    {return name.length();
    }
    void dis_hints(int n)//displays hints
    {switch(n)
     { case 1:cout<<hint1<<"\n";
              break;
       case 2:cout<<hint2<<"\n";
              break;
       case 3:cout<<hint3<<"\n";
              break;
       default : cout<<"Hint limit Exceeded\n";
              break;              
     }
    }
   void dis_init() // displays the initial movie name with blanks;
    {int len=name.length();
    for(int i=0;i<5;i++)
         cout<<"\n";
      for(int i=0;i<len;i++)
       if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
         printf(" %c ",name[i]);
       else
         printf(" ___ ");
      printf("\n");
      for(int i=0;i<5;i++)
         cout<<"\n";     
    }
  void dis_comp()//displays the name after each guess
    {int len=name.length();
    for(int i=0;i<5;i++)
         cout<<"\n";
      for(int i=0;i<len;i++)
       if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
         printf(" %c ",name[i]);
       else 
         { if(m.find(name[i])!=m.end())
            printf(" %c ",name[i]);
           else 
            printf(" ___ ");
         }
      printf("\n");
      for(int i=0;i<5;i++)
         cout<<"\n";  
  }  
  void add_map()//maps all the characters of the name to "maping" to check whether all characters have been guessed
  {int len=name.length();
   for(int i=0;i<len;i++)
    if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
      continue;
    else if(maping.find(name[i])==maping.end())
      maping.insert({name[i],1});
  }
};
class movie_hard
{ string name;
  string hint1;
  string hint2;
  string hint3;
  public:
   void movie_init(string n,string h1,string h2,string h3)//putting info of the movie
  {name=n;
    hint1=h1;
    hint2=h2;
    hint3=h3;
  }
   int dislen()//returns the length of name of the movie
    {return name.length();
    }
    void dis_hints(int n)//displays hints
    {switch(n)
     { case 1:cout<<hint1<<"\n";
              break;
       case 2:cout<<hint2<<"\n";
              break;
       case 3:cout<<hint3<<"\n";
              break;
       default : cout<<"Hint limit Exceeded\n";
              break;              
     }
    }
   void dis_init() // displays the initial movie name with blanks;
    {int len=name.length();
     for(int i=0;i<5;i++)
         cout<<"\n";
      for(int i=0;i<len;i++)
       if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
         printf(" %c ",name[i]);
       else
         printf(" ___ ");
      for(int i=0;i<5;i++)
       cout<<"\n";     
    }
  void dis_comp()//displays the name after each guess
    {int len=name.length();
     for(int i=0;i<5;i++)
       cout<<"\n";
      for(int i=0;i<len;i++)
       if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
         printf(" %c ",name[i]);
       else 
         { if(m.find(name[i])!=m.end())
            printf(" %c ",name[i]);
           else 
            printf(" ___ ");
         }
      for(int i=0;i<5;i++)
       cout<<"\n";
  }  
  void add_map()//maps all the characters of the name to "maping" to check whether all characters have been guessed
  {int len=name.length();
   for(int i=0;i<len;i++)
    if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' ')
      continue;
    else if(maping.find(name[i])==maping.end())
      maping.insert({name[i],1});
  }
};
void dis_inst() // instructions
{printf("Hello and \"Welcome to Name the movie\" \n");
 printf("Following are the instruction to play it : \n");
 printf("1.You will have to guess the name of the movie where only vowels will be shown\n");
 printf("2.Each player will get 3 wrong guesses at lvl 1 and they get decreased as the game continues\n");
 printf("3.For each correct alphabet( or digit ) you will enter, blanks(---) will be replaced by the alphabet\n");
 printf("4.There will be 3 hints available at lvl 1\n As the game continues and lvl goes higher the no. of hints will decrease and the names of movies get complex \n");
 printf("5.TYPE AN ALPHABET TO GUESS IT OR TYPE '?' TO ASK FOR A HINT\n");
 printf("  Note :-  Guessing a vowel will count as a try so please refrain from it.\n");
 printf("Good Luck :-)\n Press Any Key to continue\n");
 getch();
}
int get_hint(int lvl)//returns eligible hints at current lvl
{if(lvl<=3)
   return 3;
  else if(lvl<=7)
   return 2;
  else 
   return 1;
}
int legal(int lvl,int j)//legal tries based on current lvl(change the function such that it returns len+5 for easy,len+3 for medium and len+1 for hard) 
{if(lvl<=3)
   return j+3;
  else if(lvl<=7)
   return j+2;
  else 
   return j+1;
}
int format_choice(string input)//formats the string and gives the choice
{if(input.length()>1)
  return -1;
 else if (('a'<=input[0]&&input[0]<='z')||('A'<=input[0]&&input[0]<='Z')||('1'<=input[0]&&input[0]<='9'))
  return 1;
 else if(input[0]=='?')
  return 2; 
 else 
  return -1;
}
int gen_rand(int lvl)//generates random index for movie selection
{if((lvl==4)||(lvl==8))//clear the data structure
  random.clear();
 int r; 
  do
  {r=rand()%10;
  }while(random.find(r)!=random.end());
  random.insert({r,1});
  return r;
}
int main()
{int lvl=1,current_easy,current_medium,current_hard;
 srand(time(0));
 dis_inst();
 string input_string;
 movie_easy m1[10];
 movie_medium m2[10];
 movie_hard m3[10];
 //Easy Movies
 m1[0].movie_init("3 idiots","Amir khan's Movie","Kareena Kapoor's Movie","Based on education system");
 m1[1].movie_init("wanted","Salman Khan's Movie","Ayesha Takia's Last movie","Released in 2009");
 m1[2].movie_init("jodhaa akbar","hritik's Movie","Aishwarya Rai's Movie","Based on Akbar");
 m1[3].movie_init("queen","Kangana's Movie","No bollywood male leads","kangana goes to honeymoon alone");
 m1[4].movie_init("go goa gone","Saif's Movie","Kunal Khemu and Vir Das Starring","bollywood's first ever zombie movie");
 m1[5].movie_init("padosan","Sunil Dutt's Movie","Kishore Kumar starring","Has an iconic song - Mere samne wali khidki me");
 m1[6].movie_init("piku","Amitabh Bacchan's Movie","Deepika Padukon's movie","Amitabh acts as deepika's father");
 m1[7].movie_init("welcome","Akshay Kumar's Movie","Anil Kapoor starrer","contains  a character named Majnu Bhai ");
 m1[8].movie_init("hera pheri","Sunil Shetty's Movie","Akshay Kumar and Paresh Rawal also appear as leads","Most memed bollywood movie");
 m1[9].movie_init("pk","Amir Khan's Movie","Anushka Sharma's movie","Challanges current religious system");
 //Medium Movies
 m2[0].movie_init("dilwale dulhania le jayenge","Shah Rukh khan and Kajol starring","Has the record for longest duration to feature in cinema halls","Romantic");
 m2[1].movie_init("gol maal","Amol Palekar's Movie","Amitabh Bacchan's movie","Based on fake identities");
 m2[2].movie_init("veer zaara","Shahrukh's Movie","Cross-Border Love story","Based on Akbar");
 m2[3].movie_init("sholay","Amitabh and Dharmendra's Movie","Released in 1975","Villian is Gabbar");
 m2[4].movie_init("kabhi khushi kabhie gham","Amitabh and jaya bhaduri's Movie","Released in 2001","ab");
 m2[5].movie_init("devdas ","Shahrukh's Movie","Aishwarya Rai's movie","Not required");
 m2[6].movie_init("mohabbatein","Shahrukh's Movie","Three separate love stories","not required");
 m2[7].movie_init("angrezi medium","Irfan's Movie","Radhika Madan's movie","not required");
 m2[8].movie_init("life in a metro","Multi star cast with kangana and shilpa shetty","Based on busy life style","not required");
 m2[9].movie_init("tanu weds manu","Kangana and R Madhavan's Movie","Based in kanpur city","not required");
 //Hard Movies
 m3[0].movie_init("the lunchbox","Irfan khan's Movie","Love through a letter","Released in 2013");
 m3[1].movie_init("zindagi na milegi dobara","Hritik and Farhaan's Movie","Based on living the life to fullest","Released in 2011");
 m3[2].movie_init("haider","Shahid's Movie","Based on Jammu and Kashmir's situation","Released in 2014");
 m3[3].movie_init("sanam teri kasam","Harshvardhan Rane's Movie","Shy girl's love story against her father","kangana goes to honeymoon alone");
 m3[4].movie_init("goliyon ki raasleela ram leela","Ranveer and Deepika's Movie","not required","not required");
 m3[5].movie_init("gangubai kathiawadi","Alia is main lead","not required","not required");
 m3[6].movie_init("hum dil de chuke sanam","Salman and aishwarya's Movie","not required","not required");
 m3[7].movie_init("Sarbjit","A man crosses indo-pak border mistakenly","not required","not required");
 m3[8].movie_init("kai po che","based on cricket and hindu muslim riots","not required","not required");
 m3[9].movie_init("taare zameen par ","Based on autism and its struggles in the life of a little boy","not required","not required");
 while(true)
 { system("cls");
  int tries=0,hints=1,len;//have to make tries such that tries>=no of unique alphabets
   if(lvl<=3)
    {current_easy=gen_rand(lvl);
     m1[current_easy].dis_init();
     m1[current_easy].add_map();
     len=maping.size();
    }
   else if(lvl<=7)
    {current_medium=gen_rand(lvl);
     m2[current_medium].dis_init();
     m2[current_medium].add_map();
     len=maping.size();
    }
   else
    {current_hard=gen_rand(lvl);
     m3[current_hard].dis_init();
     m3[current_hard].add_map();
     len=maping.size();
    }
   while(tries<legal(lvl,len))   
    {int choice;
     cin>>input_string; 
     choice=format_choice(input_string);
     if(choice==-1)
     {printf("Please Enter a valid choice\n");
      continue;
     }
     else if(choice==1)//guessing an alphabet
     { char c=input_string[0];
        if(('a'<=c&&c<='z')||('A'<=c&&c<='Z')||('1'<=c&&c<='9'))
        {c=tolower(c);
         if((maping.find(c)!=maping.end())&&(m.find(c)==m.end()))
           m.insert({c,1});
        if(lvl<=3)
          m1[current_easy].dis_comp();
        else if(lvl<=7)
          m2[current_medium].dis_comp();
        else
          m3[current_hard].dis_comp();
         tries++;
        if(m.size()==maping.size()) //check whether all the alpabets have been guessed or not
        {lvl++;//levelling up
         if(lvl<=10)
         printf("Congratulations, You have Proceeded to the next lvl i.e lvl %d\n",lvl);
         m.clear();//deleting the previous un related info
         maping.clear();//deleting the previous un related info
          break;
        } 
        else if(tries==legal(lvl,len))
         {printf("Sorry,You have used all your guesses\n");
          lvl=1;
          current_easy++;//moving to next movie in the list
          m.clear();//deleting the previous un related info
          maping.clear();//deleting the previous un related info
          break;
         } 
        }
        else
         {printf("Enter a valid alphabet\n");
           continue;
         }    
     }
     else// requesting a hint
     {if(hints<=get_hint(lvl))
       {if(lvl<=3)
          m1[current_easy].dis_hints(hints);
        else if(lvl<=7)
          m2[current_medium].dis_hints(hints);
        else
          m3[current_hard].dis_hints(hints);
         hints++;
        }
       else
        {printf("No more hints left\n");
           continue;
        }   
     }
    }
    if(lvl>10)
     {printf("I bow to the master of the game. Cheers Professor :-)\n");
      getch();
      break;
     }
   printf("Enter n/N to stop playing\n");
   string ch;
  cin>>ch;
  if((ch[0]=='n'||ch[0]=='N')&&(ch.length()==1))
   break;
  else 
   continue;  
 }
    return 0;
}