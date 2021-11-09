#include<iostream>

using namespace std;

class queueType{
   public:
       int *_queue, _rear, _front;
      
       //constructor

       queueType(int size)
       {
           _queue = new int(size);
           _front=0;
           _rear=0;
       }
      //insert function
       void insert(int val)
       {
           _queue[_rear]=val;
           _rear++;
       }

      //move fonction
       void moveNthFront(int n)
       {
           int nthElem=_queue[n-1];
           //shift the values
           cout<<"Moving the element at "<<n<<" to the front"<<endl;
           for(int i=n-1;i>0;i--)
           {
               _queue[i]=_queue[i-1];
           }
           _queue[0]=nthElem;
       }
      

       void display()
       {
           cout<<"\tQueue: [";
           for(int i=_front;i<_rear;i++)
           {
               cout<<_queue[i]<<" ";
           }
           cout<<" ]\n" <<endl;
       }
};

void test();

int main()
{
   
  test();
  
  system("pause");
  return 0;
}


void test(){
	//lets create a queue of 7 elements
  queueType myQueue(7);

   myQueue.insert(23);
   myQueue.insert(78);
   myQueue.insert(11);
   myQueue.insert(45);
   myQueue.insert(90);
   myQueue.insert(100);
   myQueue.insert(56);

   cout << "Queue before moving any elemetns: " << endl;
   myQueue.display();

   //lets move 7th element (100) to the front
   myQueue.moveNthFront(6);
  
   myQueue.display();
}