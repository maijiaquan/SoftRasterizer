#ifndef MODEL_H_
#define MODEL_H_
#include <vector>
#include "Vector3.h"
//#include "Texture.h"
using namespace std;

class TrangleIndex        //�±� �������� ��������һ�� ������Ԫ�ص�һά����
{
public:
	int indices[3];
	TrangleIndex(int i,int j,int k){
		indices[0] = i;
		indices[1] = j;
		indices[2] = k;
	}
	TrangleIndex(){}
	
	
};

class Model
{
public:
	Model(Vector3 position):
		world_position_(position)
		//,
	//	texture_(nullptr)
	{}
	void printModelInfo(){
		cout<<endl<<"------------- Model Info  --------------------"<<endl;
		cout<<"|	model x = "<<world_position_.x_<<endl;
		cout<<"|	model y = "<<world_position_.y_<<endl;
		cout<<"|	model z = "<<world_position_.z_<<endl;
		cout<<"-----------------------------------------------"<<endl;
	}
	Vector3 world_position_;             //�������꣺һ����   
	vector<Vector3> local_vertexes_;     //�ֲ����꣺��ļ���  //��д��Vector3  2017.8.8
	vector<Vector3> trans_vertexes_;     //͸�����꣺��ļ���   //��д��Vector3  2017.8.8
	vector<TrangleIndex> poly_indices_;   //һ������ ������trans_vertexes_���±�����   TrangleIndex

	vector<Vector3> save_vertexes_;      //�����������

	//Texture *texture_;
};
#endif