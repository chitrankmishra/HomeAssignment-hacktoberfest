#include <iostream>
using namespace std;

int y = 0;
int fun1(int x)
{

	if(x>0){
		fun1(x-1);
		cout<<x<<"\n";
		y++;
	}
	cout<<y<<"\n";
}

int main(){
	int x = 6;
	fun1(x);
}
import queue
q = queue.LifoQueue()
#insert items at the head of the queue 
for x in range(4):
    q.put(str(x))
#remove items from the head of the queue 
while not q.empty():
    print(q.get(), end=" ")
print()


