#include<iostream>
using namespace std;
#define max 10

class Queue{
    int i,front,rear,ele;
    int queue[max];

    public:
    Queue(){
        front=rear=-1;
    }

    void insert();
    void display();
    void Delete();
};

void Queue::insert(){
    if(rear==max-1){
        cout<<"Queue is Full "<<endl;
    }

    else{
        rear++;
        cout<<"Enter the Job: ";
        cin>>ele;
        queue[rear]=ele;
    }
    if(rear==0){
        front=rear;
    }
}

void Queue::Delete(){
    if(front==-1){
        cout<<"Queue is Empty "<<endl;
    }
    else{
        cout<<"Deleted Element is "<<queue[front]<<endl;
        front++;
    }
    if(front>rear){
        cout<<"Queue is Empty "<<endl;
    }
}

void Queue::display(){
    for (int i = front; i <=rear; i++)
    {
        cout<<"\t"<<queue[i];
    }
    cout<<endl;    
}

int main(){
    Queue job;
    int choice;
    do
    {
        cout<<"\nWelcome to the Queue "<<endl;
        cout<<"1.Add Job "<<endl;
        cout<<"2.Delete Job "<<endl;
        cout<<"3.Display Job "<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your Choice ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Add Job"<<endl;
            job.insert();
            break;

            case 2:
            cout<<"Delete Job"<<endl;
            job.Delete();
            break;

            case 3:
            cout<<"Displaying the Job "<<endl;
            job.display();
            break;

            case 4:
            cout<<"\nExiting the Program !!!"<<endl;
            break;

            default:
            cout<<"Invalid Choice "<<endl;
            break;
        }
    }while(choice!=4);

    cout<<"\nThank You For Using Program "<<endl;
    
    return 0;
}
