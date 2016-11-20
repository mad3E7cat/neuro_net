class Neuron_Net
{
private:
  int input[50][50]; // входной массив данных
  int weight[50][50]; // массив весов
  int counted[50][50]; // массив подсчитанных сигналов
  int limit; // порог обучения: точность -> продолжительность
  int sum; // сумма подсчитанных сигналов
public:
  void count() // считаем значащие сигналы
  {
  	for(int x = 0; x < 50; x++)
  	{
  		for(int y = 0; y < 50; y++)  counted[x][y] = input[x][y] * weight[x][y];
  	}
  }
  void sum()
  {
  	for(int x = 0; x < 50; x++)
  	{
  		for(int y = 0; y < 50; y++) sum += counted[x][y];
  	}
  }
  bool result()
  {
  	if(sum > limit) return true;
  	return
  }

}