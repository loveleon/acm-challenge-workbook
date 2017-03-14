/*
 * POJ 3109: Inner Vertices
 * 题意：无限坐标系中给出一些黑点，每一步，如果一个白点横向和竖向都被两个黑点夹着，则将其染为黑色。求最后一共多少个黑点，不会停止则输出错误。
 * 类型：离散化+扫描线+树状数组（／线段树）
 * 算法：分析可知一步后总会停止，用树状数组统计新增黑点数。先将横纵坐标离散化，将点按x排序，得到每条x线，将其按单点、头、尾、中标记为4类，同时预处理出每个y对应最大x和最小x。再将点按y排序后，用y线扫描。查询前把尾中在树状数组中对应的x处-1；统计树状数组在最大最小x间的和为当前y线上新增黑点数；再将头中对应x处+1。
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;



int main() {
//  freopen("/Users/yogy/acm-challenge-workbook/db.in", "r", stdin);

  return 0;
}