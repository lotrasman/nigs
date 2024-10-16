

#include <iostream>
#include <Windows.h>
#include "clsTaskManager.h"

clsTaskManager * objTManager;

void Task1(void)
{
	printf("bbb");
}
void Task2(void)
{
	printf("a1");
}
void Loop(void)
{
	printf("NEEEGRRRR");
}


int main()
{
	objTManager = new clsTaskManager();
	objTManager->AddTask(Task1);
	objTManager->AddTask(Task2);

	objTManager->Run(Loop);

	delete(objTManager);
}

