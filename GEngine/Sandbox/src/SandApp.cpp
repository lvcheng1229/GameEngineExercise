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


//�Զ��� 
//��ת����β Ctrl+;


//�������ɴ��롪�C��������Tab��:
//
//��������forѭ����ʹ�÷��� ����������for, Ȼ������������Tab��
//��������try��catch��ʹ�÷��� ����������try, Ȼ������������Tab��

//Ƕ�״��롪�CCtrl + K, Ctrl + S:
//ѡ�����ҪǶ�׵Ĵ���󣬰���ݼ� ctrl + k, ctrl + s, �ͻᵯ���Ի�������ѡ��ҪǶ��ʲô����, if / region / for / ��

//��alt+���¼��ƶ�����
//��ת������ HOME

//Alt + Shift + ��ͷ��(��, ��, ��, ��) = ѡ�������Զ��岿�� !!
//Ctrl + Enter = �ڵ�ǰ�в������
//Ctrl + Shift + Enter = �ڵ�ǰ���·��������

//Shift + End = ��ͷ��βѡ������
//Shift + Home = ��β��ͷѡ������
//Ctrl + Delete = ɾ������Ҳ��������

//Ctrl + �ո�� = ʹ�� IntelliSense�����ܸ�֪���Զ����
//Ctrl + } = ƥ������š�����
//Ctrl + Shift + } = ��ƥ������š�������ѡ���ı�
//Ctrl + Shift + S = ���������ļ�����Ŀ
//Ctrl + K��Ctrl + C = ע��ѡ����
//Ctrl + K��Ctrl + U = ȡ��ѡ���е�ע��
//Ctrl + K��Ctrl + D = ��ȷ�������д���
//
//Shift + End = ��ͷ��βѡ������
//
//Shift + Home = ��β��ͷѡ������
//
//Ctrl + Delete = ɾ������Ҳ��������