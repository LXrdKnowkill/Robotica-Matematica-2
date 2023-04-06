#include <stdio.h>
#include <string.h>


//meus caros amigos lindos do coração, o codigo é para um coiso com pedestre nao lembro o nome agora

// quem tiver escrevendo esse codigo na disgraç do mblock fica atento que dependendo eu nao uso init,
// ou até posso usar para colocar a variavel define, mas sei la, descubra com o tempo.

#define LED_Carro_Verde_1 2
#define LED_Carro_Amarelo_1 3
#define LED_Carro_Vermelho_1 4
#define LED_Pedestre_Verde_1 5
#define LED_Pedestre_Vermelho_1 6
#define LED_Carro_Verde_2 8
#define LED_Carro_Amarelo_2 9
#define LED_Carro_Vermelho_2 10
#define LED_Pedestre_Verde_2 11
#define LED_Pedestre_Vermelho_2 12
void setup()
{
//é pra definir os pinos com as saidas meus anjos. se voce nao souber ler isso eu vou mostrar que cada um faz. entao respire
	pinMode(LED_Carro_Verde_1, OUTPUT);
	pinMode(LED_Carro_Amarelo_1, OUTPUT);
	pinMode(LED_Carro_Vermelho_1, OUTPUT);
	pinMode(LED_Pedestre_Verde_1, OUTPUT);
	pinMode(LED_Pedestre_Vermelho_1, OUTPUT);
	pinMode(LED_Carro_Verde_2, OUTPUT);
	pinMode(LED_Carro_Amarelo_2, OUTPUT);
	pinMode(LED_Carro_Vermelho_2, OUTPUT);
	pinMode(LED_Pedestre_Verde_2, OUTPUT);
	pinMode(LED_Pedestre_Vermelho_2, OUTPUT);
}
void loop()
{
	// Isso aqui vai começar a iniciar um loop com todos os LEDs desligados.
	digitalWrite(LED_Carro_Verde_1, LOW);
	digitalWrite(LED_Carro_Amarelo_1, LOW);
	digitalWrite(LED_Carro_Vermelho_1, LOW);
	digitalWrite(LED_Pedestre_Verde_1, LOW);
	digitalWrite(LED_Pedestre_Vermelho_1, LOW);
	digitalWrite(LED_Carro_Verde_2, LOW);
	digitalWrite(LED_Carro_Amarelo_2, LOW);
	digitalWrite(LED_Carro_Vermelho_2, LOW);
	digitalWrite(LED_Pedestre_Verde_2, LOW);
	digitalWrite(LED_Pedestre_Vermelho_2, LOW);
	/* Aqui vamos iniciar uma coisa chamados estagios do projeto.
		LED_Carro_Verde_1:       On
		LED_Carro_Amarelo_1:	 Off
		LED_Carro_Vermelho_1:    Off
		LED_Pedestre_Verde_1:    Off
		LED_Pedestre_Vermelho_1: On
		LED_Carro_Verde_2:       Off
		LED_Carro_Amarelo_2:     Off
		LED_Carro_Vermelho_2:    On
		LED_Pedestre_Verde_2:    On
		LED_Pedestre_Vermelho_2: Off */


	digitalWrite(LED_Carro_Verde_1, HIGH);
	digitalWrite(LED_Carro_Amarelo_1, LOW);
	digitalWrite(LED_Carro_Vermelho_1, LOW);
	digitalWrite(LED_Pedestre_Verde_1, LOW);
	digitalWrite(LED_Pedestre_Vermelho_1, HIGH);
	digitalWrite(LED_Carro_Verde_2, LOW);
	digitalWrite(LED_Carro_Amarelo_2, LOW);
	digitalWrite(LED_Carro_Vermelho_2, HIGH);
	digitalWrite(LED_Pedestre_Verde_2, HIGH);
	digitalWrite(LED_Pedestre_Vermelho_2, LOW);
	delay(5000);
	/* começaremos pelo stage 2 de 3 SEGUNDOS.
		LED_Carro_Verde_1:       Off
		LED_Carro_Amarelo_1:     On
	   LED_Carro_Vermelho_1:     Off
		LED_Pedestre_Verde_1:    Off
		LED_Pedestre_Vermelho_1: On
		LED_Carro_Verde_2:       Off
		LED_Carro_Amarelo_2:     Off
		LED_Carro_Vermelho_2:    On
		LED_Pedestre_Verde_2:    Off
		LED_Pedestre_Vermelho_2: On/Off (Piscando) */
	digitalWrite(LED_Carro_Verde_1, LOW);
	digitalWrite(LED_Pedestre_Verde_2, LOW);
	digitalWrite(LED_Carro_Amarelo_1, HIGH);
	for (int i = 1; i <= 3; i++) {
		digitalWrite(LED_Pedestre_Vermelho_2, HIGH);
		delay(500);
		digitalWrite(LED_Pedestre_Vermelho_2, LOW);
		delay(500);
	}
	/* terceiro stage do projeto so que esse é de 5 SEGUNDOS.
		LED_Carro_Verde_1:       Off
		LED_Carro_Amarelo_1:     Off
		LED_Carro_Vermelho_1:    On
		LED_Pedestre_Verde_1:    On
		LED_Pedestre_Vermelho_1: Off
		LED_Carro_Verde_2:       On
		LED_Carro_Amarelo_2:     Off
		LED_Carro_Vermelho_2:    Off
		LED_Pedestre_Verde_2:    Off
		LED_Pedestre_Vermelho_2: On */
	digitalWrite(LED_Carro_Verde_1, LOW);
	digitalWrite(LED_Carro_Amarelo_1, LOW);
	digitalWrite(LED_Carro_Vermelho_1, HIGH);
	digitalWrite(LED_Pedestre_Verde_1, HIGH);
	digitalWrite(LED_Pedestre_Vermelho_1, LOW);
	digitalWrite(LED_Carro_Verde_2, HIGH);
	digitalWrite(LED_Carro_Amarelo_2, LOW);
	digitalWrite(LED_Carro_Vermelho_2, LOW);
	digitalWrite(LED_Pedestre_Verde_2, LOW);
	digitalWrite(LED_Pedestre_Vermelho_2, HIGH);
	delay(5000);
	/* o ultimo stage de 3 SEGUNDOS e ultimo do projeto.
		LED_Carro_Verde_1:       Off
		LED_Carro_Amarelo_1:     Off
		LED_Carro_Vermelho_1:    On
		LED_Pedestre_Verde_1:    Off
		LED_Pedestre_Vermelho_1: On/Off
		LED_Carro_Verde_2:       Off
		LED_Carro_Amarelo_2:     On
		LED_Carro_Vermelho_2:    Off
		LED_Pedestre_Verde_2:    Off
		LED_Pedestre_Vermelho_2: On */
	digitalWrite(LED_Carro_Verde_2, LOW);
	digitalWrite(LED_Pedestre_Verde_1, LOW);
	digitalWrite(LED_Carro_Amarelo_2, HIGH);
	for (int i = 1; i <= 3; i++) {
		digitalWrite(LED_Pedestre_Vermelho_1, HIGH);
		delay(500);
		digitalWrite(LED_Pedestre_Vermelho_1, LOW);
		delay(500);
	}
}

// O Codigo funciona em c++ linguaguem fora dela nao funciona..

// O codigo deve ser rodado com as #includes corretas para não ocorrer nenhum problema..
