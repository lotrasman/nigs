#pragma once
//pointer na task funkci
//void(*p_TaskFce)(void);
typedef void (*p_TaskStack)(void);


 class clsTaskManager
{
private:
	p_TaskStack p_Tasks[10];
	 public:
	clsTaskManager(void);  //konstruktor
	~clsTaskManager(void);   //destruktor

	int AddTask(void (*p_TaskFce)(void));   //pridat ulohu

	bool Run(void (*p_TaskFce)(void));      //bezet
	
	bool Stop();     //nebezet
};

