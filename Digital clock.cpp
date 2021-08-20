#include<bits/stdc++.h>
using namespace std;
bool is_leap_year(int year)
{
    //return 1 for leap year.
    if(year%4==0)
    {
        return 1;
    }
    else if(year%100==0 and year%400==0)
    {
        return 1;
    }
    else
        return 0;
}
void set_routine_for_tahmid(int h,int m,int k)
{
    if(h==5 and k<10)
    {
        cout<<"Hello Tahmid Nubra!Please wake up from the sleep\n";
        k++;
    }
    else if(h==6 || (h==7 and m<=30))
    {
        cout<<"Please go through your Text Book very attentively\n";
    }
    else if(h>=8 and h<10)
    {
        cout<<"Hello Nubray! Join your on-line class.But be careful to not traverse other site of Internet\n";
    }
    else if(h>=10 and h<11)
    {
        cout<<"Hello dear Nubray,we think you are so tired.You can take some rest now\n";
    }
    else if(h>=11 and h<12)
    {
        cout<<"Please go through your Text Book very attentively\n";
    }
    else if(h>=12 and h<14)
    {
        cout<<"Oh! dear Tahmid.It is time for taking bath and then, say your prayer and after then,take your lunch\n";
    }
    else if(h>=14 and h<17)
    {
        if(h==16 and k<600)
        {
            cout<<"Hello dear, say your Asar prayer\n";
            k++;
        }
        else
            cout<<"Hello Nubray!Please go through your text book very attentively\n";
    }
    else if(h>=17 and h<19)
    {
        cout<<"Hello Tahmid,It is leisure time.\n";
    }
    else if(h>=19 and (h<=20 and m<=30))
    {
         if(h==19 and k<600)
        {
            cout<<"Hello dear, say your Magrive prayer\n";
            k++;
        }
        else
        cout<<"Please go through your Text Book very attentively\n";
    }
    else if((h==20 and m>30) and (h<=21 and m<=30))
    {
        cout<<"Hello Tahmid, It is time to say your Isha prayer and then take your Dinner\n";
    }
    else
    {
        cout<<"Oh! my dear.Please go to bed and have a deep sleep now\n";
    }

}
int find_day_limit(int month,int year)
{
    if(month==1)
        return 31;
    else if(month==2)
    {
        int leap_year = is_leap_year(year);
        if(leap_year==1)
            return 29;
        else
            return 28;
    }
    else if(month==3)
        return 31;
    else if(month==4)
        return 30;
    else if(month==5)
        return 31;
    else if(month==6)
        return 30;
    else if(month==7)
        return 31;
    else if(month==8)
        return 31;
    else if(month==9)
        return 30;
    else if(month==10)
        return 31;
    else if(month==11)
        return 30;
    else //if(month==12)
        return 31;
}
void time_show(int h,int m,int s,int k)
{
        if(h<10)
            cout<<0<<h<<":";
        else if(h>=13 and h<24)
            cout<<h%13+1<<":";
        else
            cout<<h<<":";
        if(m<10)
            cout<<0<<m<<":";
        else
            cout<<m<<":";
        if(s<10)
            cout<<0<<s<<":";
        else
            cout<<s<<":";
                //cout<<h<<":"<<m<<" : "<<s<<" ";
        if(h<12)
            cout<<"AM\n";
        else
            cout<<"PM\n";


}
int main()
{

    int h,m,s,day,month,year,day_limit=31;     //h for hour,m for minute, s for second
    cout<<"Set Time "<<"HH:MM:SS :- ";
    cin>>h>>m>>s;
    cout<<"Set Date DD:MM:YYYY :- ";
    cin>>day>>month>>year;

    start:
        for(;month<=12;month++)
        {
            for(;day<=day_limit;day++)
            {
                day_limit=find_day_limit(month,year);
                for(;h<24;h++)
                {
                    for(;m<60;m++)
                    {
                        int k=0;
                        for(;s<60;s++)
                        {
                            system("CLS");
                            time_show(h,m,s,k);
                            //Date show
                            if(day<9)
                                cout<<0<<day<<":";
                            else
                                cout<<day<<":";
                            if(month<9)
                                cout<<0<<month<<":";
                            else
                                cout<<month<<":";

                            cout<<year<<endl;
                          //  set_routine_for_tahmid(h,m,k);
                            //this loop for keep time for 1 second
                            for(long double i=0;i<299999999;i++)
                            {

                            }

                        }
                        s=0;
                    }
                    m=0;
                }
                h=0;
            }
            day=1;
        }
        month=1;
        year++;
    goto start;


}

