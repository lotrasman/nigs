#include "clsTaskManager.h"
#include <Windows.h>

clsTaskManager::clsTaskManager(void)
{
	
}


clsTaskManager::~clsTaskManager(void)
{

}


int clsTaskManager::AddTask(void (*p_TaskFce)(void))
{
	
	
	return(true);
}

bool clsTaskManager::Run(void (*p_TaskFce)(void))
{
	do
	{
		Sleep(1000);
		p_TaskFce();

	} while (true);
}

bool clsTaskManager::Stop(void)
{
	return(false);
}