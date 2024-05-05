#include <iostream>

using namespace std;

class Member{
    public:
        string name;
        Member * next;
};

class PinnacleClub{
    Member * first = nullptr;
    Member * last = nullptr;

    void reverse(){
        Member *p;
        Member *q;
        Member *r;

        p = first;
        q = nullptr;
        r = nullptr;

        while (p != nullptr){
            r = q;
            q = p;
            p = p->next;

            q->next = r;
        }
        last = first;
        first = q;
    }

    public:
        PinnacleClub(){
            first = new Member;
            last = new Member;

            first->name = "President";
            last->name = "Secretary";

            first->next = last;
            last->next = nullptr;
        }

        void display(){
            Member * p;
            p = first;

            while(p != nullptr){
                cout<<p->name<<" ";
                p = p->next;
            }
            cout<<endl;
        }

        void add_member(string name){
            Member * new_member = nullptr;
            Member * p;
            p = first;

            new_member = new Member;

            new_member->name = name;
            new_member->next = nullptr;

            while(p->next != last){
                p = p->next;
            }
            new_member->next = p->next;
            p->next = new_member;
        }

        string delete_member(string name){
            Member *p;
            Member *q;

            p = first;
            q = nullptr;

            if(name == "President" || name == "Secretary"){
                return "You are not authorized to delete this member.";
            }

            while (p != nullptr){
                if(p->name == name){
                    q->next = p->next;
                    p->next = nullptr;
                    delete p;

                    return name;
                }
                q = p;
                p = p->next;
            }
            return "Member doesn't exist.";
        }

        void display_reversed(){
            reverse();
            display();
            reverse();
        }

        int count(){
            Member *p;
            p = first;

            int count = 0;

            while(p != nullptr){
                count++;
                p = p->next;
            }

            return count;
        }
};

int main() {

    PinnacleClub pinnacleclub;
    pinnacleclub.add_member("Samarth");
    pinnacleclub.add_member("Sahil");
    pinnacleclub.display_reversed();
    pinnacleclub.display();

    return 0;
}