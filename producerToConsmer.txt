#include<stdio.h>
#include<unistd.h>
#define BUFFER_SIZE 10
int itemCount=0;
int item;
void producer(){
	while(1){
		item=produceItem();
		if(itemCount==BUFFER_SIZE){
			sleep();
		}
		putItemIntoBuffer(item);
		itemCount++;
		if(itemCount==1){
			void consumer(){
				while(1){
					if(itemCount==0){
						sleep();
					}
					item=removeItemFromBuffer();
					itemCount--;
					if(itemCount ==BUFFER_SIZE-1){
						wakeup(producer);
					}
					consumeritem(item);
				}
			}
		}
	}
}

	
