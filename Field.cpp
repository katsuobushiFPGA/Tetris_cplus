#include "Field.h"
#include "DxLib.h"
Field::Field(){
	for(int i=0;i<12;i++){
		for (int j = 0; j < 21; j++){
			if (i == 0 || i == 11 || j == 20)
			{
				m_Field[i][j] = -1;
			}
			else
			{
				m_Field[i][j] = 0;
			}
		}
	}
}
Field::~Field(){};
void Field::DrawImage(){
	DrawGraph((int)m_x, (int)m_y, m_ImageID, TRUE);
}