#include <vector>

const std::vector<int> data_10_0 = {
	255,255,255,255,255,255,255,255,255,255, //0
	255,255,255,255,0  ,255,255,255,255,255, //1
	255,255,255,255,255,255,255,0  ,255,255, //2
	255,0  ,255,255,0  ,255,255,255,255,255, //3
	255,255,255,255,255,255,0  ,255,255,255, //4
	255,255,255,255,255,255,255,255,255,255, //5
	255,255,255,0  ,255,255,255,255,0  ,255, //6
	255,255,255,255,255,255,255,255,255,255, //7
	255,255,  0,255,255,255,0  ,255,255,255, //8
	255,255,255,255,255,255,255,255,255,255  //9
};
//   0   1   2   3   4   5   6   7   8   9
const std::vector<int> ans_data_10_0 = { 8,2,  8,6,  6,8,  2,7,  1,4,  3,1 };
const std::vector<int> data_10_1 = {
	255,255,255,255,255,255,255,255,255,255,//0
	255,255,255,255,0  ,255,255,255,255,255,//1
	255,255,255,255,255,255,255,0  ,255,255,//2
	255,0  ,255,255,0  ,255,255,255,0  ,255,//3
	255,255,255,255,255,255,0  ,255,255,255,//4
	255,255,255,255,255,255,255,255,255,255,//5
	255,255,255,0  ,255,255,255,255,0  ,255,//6
	255,255,255,255,255,255,255,255,255,255,//7
	255,255,255,255,255,255,255,255,255,255,//8
	255,255,255,255,0  ,255,255,255,255,255//9
};
//   0   1   2   3   4   5   6   7   8   9
const std::vector<int> ans_data_10_1 = { 9,4, 6,8,  3,8,  2,7,  1,4,  3,1};
const std::vector<int> data_10_2 = {
	255,255,255,255,0  ,255,255,255,255,255,//0
	255,255,255,255,255,255,255,255,255,255,//1
	255,255,255,255,255,255,255,255,255,255,//2
	255,255,255,255,255,255,255,255,255,255,//3
	0  ,255,255,0  ,255,255,0  ,255,255,0  ,//4
	255,255,255,255,255,255,255,255,255,255,//5
	255,255,255,255,255,255,255,255,255,255,//6
	255,255,255,255,255,255,255,255,255,255,//7
	255,255,255,255,255,255,255,255,255,255,//8
	255,255,255,255,255,0  ,255,255,255,255//9
};
//   0   1   2   3   4   5   6   7   8   9
const std::vector<int> ans_data_10_2 = { 9,4, 4,9, 0,4, 4,0 };
const std::vector<int> data_5_0 = {
	255,255,255,255,255,//0
	255,255,255,255,0  ,//1
	255,255,255,255,255,//2
	255,0  ,255,255,0  ,//3
	255,255,255,255,255 //4
};
//   0   1   2   3   4  
const std::vector<int> ans_data_5_0 = {3,1,  3,4,  1,4};
const std::vector<int> data_5_1 = {
	0  ,255,255,255,0  ,//0
	255,255,255,255,255,//1
	255,255,0  ,255,255,//2
	255,255,255,255,255,//3
	0  ,255,255,255,0//4
};
//   0   1   2   3   4  
const std::vector<int> ans_data_5_1 = {4,0, 4,4,  0,4,   0,0};
const std::vector<int> data_5_2 = {
	255,255,0  ,255,255,//0
	255,255,255,255,255,//1
	255,255,255,255,255,//2
	255,255,255,255,255,//3
	0  ,255,255,255,0//4
};
//   0   1   2   3   4 
const std::vector<int> ans_data_5_2 = { 4, 0, 4,4, 0,2 };
const std::vector<int> data_5_empty = {
	255,255,255,255,255,
	255,255,255,255,255,
	255,255,255,255,255,
	255,255,255,255,255,
	255,255,255,255,255
};

const std::vector<int> data_3_full = {
	0,0,0,
	0,0,0,
	0,0,0
};
const std::vector<int> ans_data_3_full = { 2,0,  2,1, 2,2,  2,1, 2,0,  1,0,  0,0,  1,0 };