#include"FileSplitter1.cpp"

class Form{
	
};
class TextBox;
class ProgressBar;
class ISplitter;

class MainForm : public Form
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;
	ProgressBar* progressBar;

public:
	void Button1_Click(){

		ISplitter * splitter = new BinarySplitter(); // 依赖具体类，违背依赖倒置原则
        splitter->split();

	}
};
