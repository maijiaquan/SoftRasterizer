#ifndef MODEL_H_
#define MODEL_H_
#include <vector>
#include "Vector3.h"
//#include "Texture.h"
using namespace std;

class TrangleIndex        //下标 ———— 本质上是一个 有三个元素的一维数组
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
	Vector3 world_position_;             //世界坐标：一个点   
	vector<Vector3> local_vertexes_;     //局部坐标：点的集合  //改写成Vector3  2017.8.8
	vector<Vector3> trans_vertexes_;     //透视坐标：点的集合   //改写成Vector3  2017.8.8
	vector<TrangleIndex> poly_indices_;   //一个数组 储存了trans_vertexes_的下标数组   TrangleIndex

	vector<Vector3> save_vertexes_;      //新增保存变量

	//Texture *texture_;
};
#endif