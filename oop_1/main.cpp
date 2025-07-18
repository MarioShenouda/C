#include <iostream>
#include <cstring>

using namespace std;

class student
{
    private:
       char first_name [15];
       char secound_name[15];
       int martikel_number;
       float note;

    public:
        void setFirstname(char name[])
        {
            strcpy(first_name,name);
        }
        void setSecoundname (char name[])
        {
            strcpy(secound_name,name);
        }
        void setMartikelnumber (int number)
        {
            martikel_number=number;
        }
        void setNote (float notes)
        {
            note=notes;
        }
        char * getFirstname()
        {
            return first_name;
        }
        char * getSecoundname()
        {
            return secound_name;
        }
        int getMartikelnumber()
        {
            return martikel_number;
        }
        float getnote()
        {
            return note;
        }
};
int main()
{
     string name;
     float notes[5];
     float final_note=0;
     int i;
    student mario;

    cout<<"please enter your first name: "<<endl;
    cin>> name;
    cout<<"please give your last five notes: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>notes[i];

        final_note=final_note+notes[i];
    }

    mario.setNote=final_note/5;
    cout<<"the final note = "<<mario.setNote <<endl;
    return 0;
}
