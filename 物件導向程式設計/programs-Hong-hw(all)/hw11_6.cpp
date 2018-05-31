//hw11_6,
#include<iostream>
#include<cstdlib>
using namespace std;
void func(struct mydata a);
void idcmp(struct mydata &, struct mydata &, struct mydata &);
void scmp(struct mydata &, struct mydata &, struct mydata &);
struct mydata        
{
   string id;
   string name;
   int score1;
   int score2;
   int score3;
   float score4;
}student1={"95001","Dodu Huang",91,90,95},
 student2={"95003","Tippi Lee",91,82,87},
 student3={"95002","Alice Wu",83,89,84};

int main(void)
{
   student1.score4=student1.score1*0.3+student1.score2*0.3+
                   student1.score3*0.4;
   student2.score4=student2.score1*0.3+student2.score2*0.3+
                   student2.score3*0.4;
   student3.score4=student3.score1*0.3+student3.score2*0.3+
                   student3.score3*0.4;
   
   cout << "***** 以學號由小至大排列 *****" << endl;
   idcmp(student1,student2,student3);
   cout << endl << "***** 學期成績由高至低排列 *****" << endl;
   scmp(student1,student2,student3);
  
   system("pause");
   return 0;
}
void func(struct mydata a)      
{  
   cout << a.id << "\t" << a.name << "\t" << a.score4 << endl;
   return;
}
void idcmp(struct mydata &a, struct mydata &b, struct mydata &c)
{
   struct mydata max,min,mid; 
   
   max=(a.id>b.id)?a:b;       // 以學號由小至大排列
   max=(max.id>c.id)?max:c;
   min=(a.id<b.id)?a:b;
   min=(min.id<c.id)?min:c;
       
   if((max.id>a.id) && (a.id>min.id))
      mid=a;
   else if((max.id>b.id) && (b.id<min.id))
      mid=b;
   else 
      mid=c;
   a=min;
   b=mid;
   c=max; 
      
   func(a);
   func(b);
   func(c);
   return;
}
void scmp(struct mydata &a, struct mydata &b, struct mydata &c)
{
   struct mydata max,min,mid;
  
   max=(a.score4>b.score4)?a:b;      // 學期成績由高至低排列 
   max=(max.score4>c.score4)?max:c;
   min=(a.score4<b.score4)?a:b;
   min=(min.score4<c.score4)?min:c;
   if((max.score4 > a.score4) && (a.score4 > min.score4))
      mid=a;
   else if((max.score4 > b.score4) && (b.score4 > min.score4))
      mid=b;
   else 
      mid=c;
   a=max;
   b=mid;
   c=min; 
      
   func(a);
   func(b);
   func(c);
   return;
}

/* output---------------------------
***** 以學號由小至大排列 *****
95001   Dodu Huang      92.3
95002   Alice Wu        85.2
95003   Tippi Lee       86.7

***** 學期成績由高至低排列 *****
95001   Dodu Huang      92.3
95003   Tippi Lee       86.7
95002   Alice Wu        85.2
----------------------------------*/
