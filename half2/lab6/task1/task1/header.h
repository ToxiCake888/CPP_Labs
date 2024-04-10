#pragma once
class News {

public:
	News(char* i,char* j,char* a);
	~News();
	News(const News& other);
	News();
	void Print()const;
	char* GetDescription()const;
	char* GetAvtor()const;
	void SetType(char* i);
	void SetDescription(char *j);
	void SetAvtor(char* a);
	void SetAll(char *i ,char *j,char *a);
private:
	char* type;
	char* description;
	char* avtor;
};

