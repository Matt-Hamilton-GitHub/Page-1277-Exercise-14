#include<iostream>

using namespace std;

class queueType{
    
   public:
       int *_queue, _rear, _front;
      
       //constructor

       queueType(int size){
		   
           _queue = new int(size);
           _front = 0;
           _rear = 0;
       }
	   
      //insert function
	  
       void insert(int val){
           _queue[_rear] = val;
           _rear++;
       }

      //move fonction
	  
       void moveNthFront(int n){
           
           int nthElem = _queue[n-1];
           
           cout<<"Moving the element at index "<< n - 1 <<" to the front" << endl;
           for(unsigned int idx = n-1 ;idx>0 ;idx--)
           {
               _queue[idx] = _queue[idx-1];
           }
           _queue[0] = nthElem;
       }
      

       void display(){
           cout<<"\tQueue: [";
           for(int idx = _front; idx<_rear;idx++)
           {
               cout <<_queue[idx] <<" ";
           }
           cout <<" ]\n" << endl;
       }
};


void test(queueType& queue){
   
   queue.insert(45);
   queue.insert(78);
   queue.insert(41);
   queue.insert(90);
   queue.insert(56);
   queue.insert(100);
   

   cout << "Queue before moving any elemetns: " << endl;
   queue.display();

 //lets move 100 to the beginning of the queue
   queue.moveNthFront(6);
   queue.display();
}
 


int main()
{
  queueType queue(6);
  test(queue);
   
  
}
