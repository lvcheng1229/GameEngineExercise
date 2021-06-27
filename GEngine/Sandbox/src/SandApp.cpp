#include<Geng.h>

class SandBox :public Geng::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};
//E5 Begin
Geng::Application* Geng::CreateApplication()
{
	return new SandBox();
}
//E5  End 


//自定义 
//跳转到行尾 Ctrl+;


//快速生成代码—–连续两次Tab键:
//
//快速生成for循环—使用方法 代码中输入for, 然后连续按两次Tab键
//快速生成try—catch—使用方法 代码中输入try, 然后连续按两次Tab键

//嵌套代码—–Ctrl + K, Ctrl + S:
//选择好需要嵌套的代码后，按快捷键 ctrl + k, ctrl + s, 就会弹出对话框让你选择要嵌套什么里面, if / region / for / …

//用alt+上下键移动代码
//跳转到行首 HOME

//Alt + Shift + 箭头键(←, ↑, ↓, →) = 选择代码的自定义部分 !!
//Ctrl + Enter = 在当前行插入空行
//Ctrl + Shift + Enter = 在当前行下方插入空行

//Shift + End = 从头到尾选择整行
//Shift + Home = 从尾到头选择整行
//Ctrl + Delete = 删除光标右侧的所有字

//Ctrl + 空格键 = 使用 IntelliSense（智能感知）自动完成
//Ctrl + } = 匹配大括号、括号
//Ctrl + Shift + } = 在匹配的括号、括号内选择文本
//Ctrl + Shift + S = 保存所有文件和项目
//Ctrl + K，Ctrl + C = 注释选定行
//Ctrl + K，Ctrl + U = 取消选定行的注释
//Ctrl + K，Ctrl + D = 正确对齐所有代码
//
//Shift + End = 从头到尾选择整行
//
//Shift + Home = 从尾到头选择整行
//
//Ctrl + Delete = 删除光标右侧的所有字