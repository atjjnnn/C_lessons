#include <stdio.h>

/*　構造体の使用手順　*/

/*　構造体の型宣言　*/
/* この段階では型を作っただけで領域は割り当てられていない*/
struct seiseki
{
  int no;
  char name[20];
  double average;
};

int main(void)
{
int i;
/* 構造体の宣言 (構造体の型を持ったデータの宣言)　*/
/* 構造体の初期化 */
struct seiseki seito1 = {23,"nagata",85.5};
struct seiseki seito2[20] ={
  {1,"SAKURAI",78.6},
  {15,"HORIE",81.2},
  {17,"HOSOKAWA",65.4},
};
/*　構造体の参照　*/
printf("%d %s %5.1f\n\n",seito1.no,seito1.name,seito1.average);
	for(i = 0; i < 3; i++) {
		printf("%d %s %5.1f\n",
			seito2[i].no, seito2[i].name, seito2[i].average);
	}

	return 0;
}
