#include <iostream>
#include <memory>

using namespace std;

class VirtualDevice {
	
	private:
		int val;
	public:
	VirtualDevice() {
		val = 10;
	}
	
	int getVal() {
		return val;
	}
	
	~VirtualDevice() {
		cout << "Mydata's destructor" << endl;
	}
};

class DirectlyConnectedDevice
{
	private:
		//Mydata* dataptr;
		unique_ptr<VirtualDevice> dataptr;
		
	public:
		DirectlyConnectedDevice(){
			//dataptr = new Mydata();
			dataptr  = std::unique_ptr<VirtualDevice>(new VirtualDevice());
		}
		
		VirtualDevice& getVirtualDevice() {
			return *dataptr;
		}
		
		VirtualDevice* getVirtualDevicePtr() {
			return dataptr.get();
		}	
		
		~DirectlyConnectedDevice() {
			cout << "A is destructed" << endl;
		}
		
};


void myfunc(VirtualDevice& data) {
	cout << "val is" << data.getVal() << endl;
}

void myfunc(VirtualDevice* data) {
	cout << "val is" << data->getVal() << endl;
}


int main(void)
{
	DirectlyConnectedDevice a;
	myfunc(a.getVirtualDevice());  
	myfunc(a.getVirtualDevicePtr());  
}
