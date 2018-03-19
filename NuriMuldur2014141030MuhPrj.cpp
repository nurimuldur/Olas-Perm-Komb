#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>
#include <Windows.h>
void gotoxy (int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	
}
using namespace std;
int goback,i,dd,ilksecim,olasiliksecim,olprob1sec,olprob2sec,kosprob1sec,kosprob2sec,bagprob1sec,bagprob2sec,kombiprob1sec,kombiprob2sec;
int kombinasyonsecim;
int permutasyonsecim;
int kosullusecim;
int bagimsizsecim;
int olasilikprob;
int kosulluprob;
int bagimsizprob;
int kombiprob;
int tekrarli;
int tekrarliprob;
int donel;
int donelprob;
int permuprob;
int anamenufonk();
int olasilikfonk();
int kombinasyonfonk();
int permutasyonfonk();
int kosullufonk();
int bagimsizolayfonk();
int olasilikprobfonk();
int olprobfonk1(),olprobfonk2(),kosprobfonk1(),kosprobfonk2(),bagprobfonk1(),bagprobfonk2(),kombiprobfonk1(),kombiprobfonk2();
int kosulluprobfonk();
int bagimsizolprobfonk();
int kombiprobfonk();
int tekrarlifonk();
int tekrarliprobfonk();
int donelfonk();
int donelprobfonk();
int permuprobfonk();
void fullscreen();
int main(){
		fullscreen();
			donus1:
		system("cls");
		cout<<anamenufonk();
		switch(ilksecim){
			case 1:
				system("cls");
				cout<<olasilikfonk();
				
			switch(olasiliksecim){
				case 1:
					system("cls");
					cout<<kosullufonk();
					if(kosullusecim==0)
					goto donus1;
						switch(kosullusecim){
							case 1:
								donkosprob:
								system("cls");
								cout<<kosulluprobfonk();
								if(kosulluprob==0)
								goto donus1;
									switch(kosulluprob){
										case 1:
											donkosprob1:
											system("cls");
											cout<<kosprobfonk1();
											if(kosprob1sec==0)
											goto donkosprob;
											else
											goto donkosprob1;
											break;
										case 2:
											donkosprob2:
											system("cls");
											cout<<kosprobfonk2();
											if(kosprob2sec==0)
											goto donkosprob;
											else
											goto donkosprob2;
											break;
									}
							
								break;
							case 0:
								goto donus1;
								break;
							default:
								goto donus1;
								break;}
					break;
			
				case 2:
					system("cls");
					cout<<bagimsizolayfonk();
					if(bagimsizsecim==0)
					goto donus1;
						switch(bagimsizsecim){
							case 1:
								donbagprob:
								system("cls");
								cout<<bagimsizolprobfonk();
								if(bagimsizprob==0)
								goto donus1;
									switch(bagimsizprob){
										case 1:
											donbagprob1:
											system("cls");
											cout<<bagprobfonk1();
											if(bagprob1sec==0)
											goto donbagprob;
											else
											goto donbagprob1;
											break;
										case 2:
											donbagprob2:
											system("cls");
											cout<<bagprobfonk2();
											if(bagprob2sec==0)
											goto donbagprob;
											else
											goto donbagprob2;
											break;
											
									}
								break;
							case 0:
								goto donus1;
								break;
							default:
								goto donus1;
								break;}
					break;
				case 3:
					donusolprob:
					system("cls");
					cout<<olasilikprobfonk();
					if(olasilikprob==0)
					goto donus1;
						switch(olasilikprob){
							case 1:
								donusolprob1:
								system("cls");
								cout<<olprobfonk1();
								if(olprob1sec==0)
								goto donusolprob;
								else 
								goto donusolprob1;
								break;
							case 2:
								donusolprob2:
								system("cls");
								cout<<olprobfonk2();
								if(olprob2sec==0)
								goto donusolprob;
								else
								goto donusolprob2;
								break;}
					break;
				case 0:
					goto donus1;
					break;
				default:
					goto donus1;
					break;
				}
				break;
			case 2:
				system("cls");
				cout<<kombinasyonfonk();
					switch(kombinasyonsecim){
						case 1:
							donuskombiprob:
							system("cls");
							cout<<kombiprobfonk();
							if(kombiprob==0)
							goto donus1;
								switch(kombiprob){
									case 1:
										donuskombiprob1:
											system("cls");
											cout<<kombiprobfonk1();
											if(kombiprob1sec==0)
											goto donuskombiprob;
											else
											goto donuskombiprob1;
											break;
									case 2:
										donuskombiprob2:
											system("cls");
											cout<<kombiprobfonk2();
											if(kombiprob2sec==0)
											goto donuskombiprob;
											else 
											goto donuskombiprob2;
											break;
										
								}
							break;
						case 0:
							goto donus1;
							break;
						default:
							goto donus1;
							break;}
							
				break;
			case 3:
				system("cls");
				cout<<permutasyonfonk();
					switch(permutasyonsecim){
						case 1:
							system("cls");
							cout<<tekrarlifonk();
							if(tekrarli==0)
							goto donus1;
								switch(tekrarli){
									case 1:
										system("cls");
										cout<<tekrarliprobfonk();
										if(tekrarliprob==0)
										goto donus1;
										break;
									case 0:
										goto donus1;
										break;
									default:
										goto donus1;
										break;
		}
							break;
						case 2:
							system("cls");
							cout<<donelfonk();
							if(donel==0)
							goto donus1;
								switch(donel){
									case 1:
										system("cls");
										cout<<donelprobfonk();
										if(donelprob==0)
										goto donus1;
										break;
								}
							break;
						case 3:
							system("cls");
							cout<<permuprobfonk();
							if(permuprob==0) 
							goto donus1;
							break;}
				break;
			case 0:
				system("cls");
				gotoxy(65,15);
				cout<<"Yine bekleriz.";
				return (0);
				break;
			default:
			goto donus1;
			break;
			
		}
				
	
		
return(0);}
//This Initiates the fullscreen function/
void fullscreen()
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
int anamenufonk(){
		gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(50,12);
		cout<<"M A T E M A T I K   O G R E N M E  P R O G R A M I";
		gotoxy(50,18);
		cout<<"[1] OLASILIK";
		gotoxy(50,22);
		cout<<"[2] KOMBINASYON";
		gotoxy(50,26);
		cout<<"[3] PERMUTASYON";
		gotoxy(50,30);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3): ";
		
		cin>>ilksecim;
	
}
int olasilikfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(65,12.5);
		cout<<"O  L  A  S  I  L  I  K";
		gotoxy(42,16);
		cout<<"Bir deney sonrasinda bir olay kumesinin eleman sayisinin,";
		gotoxy(42,17);
		cout<<"ornek uzayin eleman sayisina oranina o olayin olma olasiligi denir.";
		gotoxy(50,20);
		cout<<"[1] KOSULLU OLASILIK";
		gotoxy(50,24);
		cout<<"[2] BAGIMSIZ OLAYLAR";
		gotoxy(50,28);
		cout<<"[3] KARISIK OLASILIK PROBLEMLERI";
		gotoxy(50,32);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3): ";
		
		cin>>olasiliksecim;
}
int kombinasyonfonk(){
		gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(65,12.5);
		cout<<"K O M B I N A S Y O N";
		gotoxy(42,20);
		cout<<"n elemanli bir kumenin k elemanli alt kumelerinin sayisina,";
		gotoxy(42,21);
		cout<<"n'nin k'li kombinasyonu denir ve C(n,k) ile gosterilir.";
		gotoxy(50,25);
		cout<<"[1] KOMBINASYON PROBLEMLERI";
		gotoxy(50,30);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1): ";
		
		cin>>kombinasyonsecim;
}
int permutasyonfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(65,12.5);
		cout<<"P E R M U T A S Y O N";
		gotoxy(42,16);
		cout<<"n elemanli bir kumenin,her eleman bir kere kullanilmak uzere,";
		gotoxy(42,17);
		cout<<"sirali k'lilerinin sayisina;n'nin k'li permutasyonu denir";
		gotoxy(42,18);
		cout<<"ve bu sayi P(n,k) ile gosterilir.";
		gotoxy(50,20);
		cout<<"[1] TEKRARLI PERMUTASYON";
		gotoxy(50,24);
		cout<<"[2] DONEL SIRALAMA";
		gotoxy(50,28);
		cout<<"[3] KARISIK PERMUTASYON PROBLEMLERI";
		gotoxy(50,32);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3): ";
		
		cin>>permutasyonsecim;
}
int kosullufonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(63,12.5);
		cout<<"K O S U L L U   O L A S I L I K";
		gotoxy(42,16);
		cout<<"A ve B iki olay olsun.B olayinin gerceklesmesi durumunda A olayinin";
		gotoxy(42,17);
		cout<<"gerceklesmesi olasiligina, A'nin B'ye bagli kosullu olasiligi denir ";
		gotoxy(42,18);
		cout<<"ve bu olasilik P(A|B) ile gosterilir.";
		gotoxy(50,25);
		cout<<"[1] KOSULLU OLASILIK PROBLEMLERI";
		gotoxy(50,30);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1): ";
		
		cin>>kosullusecim;
}
int bagimsizolayfonk(){
		gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"BAGIMSIZ OLAYLAR";
		gotoxy(42,16);
		cout<<"Birinin elde edilmesi digerinin elde edilme olasiligini etkilemiyorsa";
		gotoxy(42,17);
		cout<<"A ve B olaylarina bagimsiz olaylar denir. ";
		gotoxy(50,25);
		cout<<"[1] BAGIMSIZ OLAYLAR PROBLEMLERI";
		gotoxy(50,30);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1): ";
		
		cin>>bagimsizsecim;
}
int olasilikprobfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"OLASILIK PROBLEMLERI";
		gotoxy(50,17);
		cout<<"1.Problem"; 
		gotoxy(75,17);
		cout<<"2.Problem"; 
		gotoxy(50,20);
		cout<<"3.Problem";
		gotoxy(75,20);
		cout<<"4.Problem";  
		gotoxy(50,30);
		cout<<"0.CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3, 4): ";
		
		cin>>olasilikprob;
}
int olprobfonk1(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"OLASILIK PROBLEMLERI";
		gotoxy(42,17);
		cout<<"Bir madeni para 5 kez havaya atiliyor.";
		gotoxy(42,18);
		cout<<"3 yazi 2 tura gelme olasiligi kactir?"; 
		gotoxy(42,20);
		cout<<"COZUM:";
		gotoxy(42,22);
		cout<<"s(E)=2^5=32";
		gotoxy(42,24);
		cout<<"3 yazi 2 tura gelme olasiligi Y,Y,Y,T,T ' nin farkli siralanasidir.";
		gotoxy(42,26);
		cout<<"o halde olaya A dersek s(A)=5!/(3!*2!)=120/12=10 olur";
		gotoxy(42,28);
		cout<<"3 yazi 2 tura gelme olasiligi P(A)=s(A)/s(E)=10/32";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>olprob1sec;
}
int olprobfonk2(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"OLASILIK PROBLEMLERI";
		gotoxy(42,17);
		cout<<"Bir dosyada 10 pembe,6 beyaz,5 sarý kagit vardir.";
		gotoxy(42,18);
		cout<<"Rastgele secilen bir kagidin pembe veya sari olma olasiligi?"; 
		gotoxy(42,20);
		cout<<"COZUM:";
		gotoxy(42,22);
		cout<<"Toplamda 21 kagit vardir.";
		gotoxy(42,24);
		cout<<".Pembe ve sari kagitlarin toplami 15 oldugundan olasilik;";
		gotoxy(42,26);
		cout<<"15/21 = 5/7 olur";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>olprob2sec;
}
int olprobfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"OLASILIK PROBLEMLERI";
		gotoxy(42,17);
		cout<<"Bir madeni para 5 kez havaya atiliyor.";
		gotoxy(42,18);
		cout<<"3 yazi 2 tura gelme olasiligi kactir?"; 
		gotoxy(42,20);
		cout<<"COZUM:";
		gotoxy(42,22);
		cout<<"s(E)=2^5=32";
		gotoxy(42,24);
		cout<<"3 yazi 2 tura gelme olasiligi Y,Y,Y,T,T ' nin farkli siralanasidir.";
		gotoxy(42,26);
		cout<<"o halde olaya A dersek s(A)=5!/(3!*2!)=120/12=10 olur";
		gotoxy(42,28);
		cout<<"3 yazi 2 tura gelme olasiligi P(A)=s(A)/s(E)=10/32";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>olprob1sec;
}
int kosulluprobfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(62,12.5);
		cout<<"KOSULLU OLASILIK PROBLEMLERI";
		gotoxy(50,17);
		cout<<"1.Problem"; 
		gotoxy(75,17);
		cout<<"2.Problem"; 
		gotoxy(50,20);
		cout<<"3.Problem";
		gotoxy(75,20);
		cout<<"4.Problem";  
		gotoxy(50,30);
		cout<<"0.CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3, 4): ";
		
		cin>>kosulluprob;
}
int kosprobfonk1(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(62,12.5);
		cout<<"KOSULLU OLASILIK PROBLEMLERI";
		gotoxy(42,17);
		cout<<"Bir madeni para 5 kez havaya atiliyor.";
		gotoxy(42,19);
		cout<<"3 kez yazi 2 kez tura geldigi bilindigine gore";
		gotoxy(42,20);
		cout<<"ayný sonucun ardarda gelmemesi olasiligi kactir?";
		gotoxy(42,22);
		cout<<"COZUM:";
		gotoxy(42,24);
		cout<<"Kosul= YYYTT = (1/32)*(5!/(3!*2!))=5/16";
		gotoxy(42,26);
		cout<<"Istenen= YTYTY = 1/32";
		gotoxy(42,28);
		cout<<"Istenen/Kosul= (1/32)/(5/16)=1/10";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>kosprob1sec;
}
int kosprobfonk2(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(62,12.5);
		cout<<"KOSULLU OLASILIK PROBLEMLERI";
		gotoxy(42,17);
		cout<<"Bir cift zar birlikte havaya atiliyor.";
		gotoxy(42,19);
		cout<<"Birinin 2 geldigi bilindigine gore ust yuzeye";
		gotoxy(42,20);
		cout<<"gelen sayilarin toplaminin 6 gelme olasiligi kactir?";
		gotoxy(42,21);
		cout<<"COZUM:";
		gotoxy(42,23);
		cout<<"Kosul= (2,1)(2,2)(2,3)(2,4)(2,5)(2,6)";
		gotoxy(42,24);
		cout<<"(1,2)(3,2)(4,2)(5,2)(6,2) = 11";
		gotoxy(42,26);
		cout<<"Istenen/Kosul= (2,4)(4,2) = 2  => 2/11";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>kosprob2sec;
	}
	
int bagimsizolprobfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(53,12.5);
		cout<<"BAGIMSIZ OLAY OLASILIK PROBLEMLERI";
		gotoxy(50,17);
		cout<<"1.Problem"; 
		gotoxy(75,17);
		cout<<"2.Problem"; 
		gotoxy(50,20);
		cout<<"3.Problem";
		gotoxy(75,20);
		cout<<"4.Problem";  
		gotoxy(50,30);
		cout<<"0.CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3, 4): ";
		
		cin>>bagimsizprob;
	}
	int bagprobfonk1(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(53,12.5);
		cout<<"BAGIMSIZ OLAY OLASILIK PROBLEMLERI";
		gotoxy(42,17);
		cout<<"Bir madeni para ile bir zar birlikte atiliyor.";
		gotoxy(42,19);
		cout<<"Buna gore paranin tura ve ";
		gotoxy(42,20);
		cout<<"zarin asal sayi gelme olasiligi kactir?";
		gotoxy(42,21);
		cout<<"COZUM:";
		gotoxy(42,23);
		cout<<"Zarin asal sayi gelme olasiligi A ise;";
		gotoxy(42,24);
		cout<<"P(A)=3/6=1/2 ' dir'";
		gotoxy(42,26);
		cout<<"Madeni paranin tura gelme olasiligi B ise;";
		gotoxy(42,28);
		cout<<"P(B)=1/2    P(AnB)=P(A)*P(B) = (1/2)*(1/2) = 1/4 ";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>bagprob1sec;
	}
	int bagprobfonk2(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(53,12.5);
		cout<<"BAGIMSIZ OLAY OLASILIK PROBLEMLERI";
		gotoxy(42,17);
		cout<<"Bir madeni para ile bir zar birlikte atiliyor.";
		gotoxy(42,19);
		cout<<"Buna gore paranin yazi veya ";
		gotoxy(42,20);
		cout<<"zarin 5'ten kucuk gelme olasiligi kactir?";
		gotoxy(42,21);
		cout<<"COZUM:";
		gotoxy(42,23);
		cout<<"Madenin paranin yazi gelme olayi A, zarin 5'ten";
		gotoxy(42,24);
		cout<<"kucuk gelme olasiligi B olsun.A ve B olaylari bagimsiz";
		gotoxy(42,26);
		cout<<"P(AuB)=P(A)+P(B)-P(AnB)";
		gotoxy(42,28);
		cout<<"(1/2)+(4/6)-(1/2)*(4/6) = 5/6 bulunur.";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>bagprob2sec;
	}
int kombiprobfonk(){
		gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"KOMBINASYON PROBLEMLERI";
		gotoxy(50,17);
		cout<<"1.Problem"; 
		gotoxy(75,17);
		cout<<"2.Problem"; 
		gotoxy(50,20);
		cout<<"3.Problem";
		gotoxy(75,20);
		cout<<"4.Problem";  
		gotoxy(50,30);
		cout<<"0.CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3, 4): ";
		
		cin>>kombiprob;
}
	int kombiprobfonk1(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"KOMBINASYON PROBLEMLERI";
		gotoxy(42,17);
		cout<<"4 kiz ve 5 erkek arasindan en az biri kiz olmak sartiyla";
		gotoxy(42,18);
		cout<<"3 kisilik bir grup kac farkli sekilde olusturulur? ";
		gotoxy(42,20);
		cout<<"COZUM:";
		gotoxy(42,22);
		cout<<"Olusturulabilecek tum 3'lu gruplarin sayisi";
		gotoxy(42,24);
		cout<<"C(9,3) = 9!/(3!*6!) = 84";
		gotoxy(42,26);
		cout<<"Sadece erkeklerden olusacak 3'lu grup sayisi";
		gotoxy(42,28);
		cout<<"C(4,3) = 4!/(3!*1!) = 4 ";
		gotoxy(42,30);
		cout<<"Icinde en az bir kiz bulunan 3'lu grup sayisi=84-4=80";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>kombiprob1sec;
	}
		int kombiprobfonk2(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"KOMBINASYON PROBLEMLERI";
		gotoxy(42,17);
		cout<<"20 ogrenci arasindan 3 ogrenci ve bu ogrenciler arasindan";
		gotoxy(42,18);
		cout<<"bir sozcu secilecektir.";
		gotoxy(42,20);
		cout<<"Kac farkli secim yapilabilir?";
		gotoxy(42,21);
		cout<<"COZUM:";
		gotoxy(42,23);
		cout<<"20 ogrenci arasindan sececegimiz 3 ogrenci;";
		gotoxy(42,24);
		cout<<"C(20,3)=20*19*18/3*2*1=1140 farkli sekilde secilir";
		gotoxy(42,26);
		cout<<"Bu 3 ogrenci arasindan 1 ogrenci de, C(3,1)=3";
		gotoxy(42,28);
		cout<<"C(20,3)*C(3,1)=1140*3=3420 farkli sekilde yapilir ";
		gotoxy(50,37.5);
		cout<<"GERI DONMEK ICIN 0'A BASINIZ: ";
		
		cin>>kombiprob2sec;
	}
int tekrarlifonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"TEKRARLI PERMUTASYON";
		gotoxy(42,16);
		cout<<"n tane nesnenin n1 tanesi 1. cesitten, n2 tanesi 2. cesitten,";
		gotoxy(42,17);
		cout<<"nr tanesi de r. cesitten olsun.";
		gotoxy(42,18);
		cout<<" = n1 + n2 + ... + nr olmak uzere ";
		gotoxy(42,19);
		cout<<"bu n tane nesnenin n li permutasyonlarinin sayisi";
		gotoxy(42,20);
		cout<<"=n!/n1!*n2!*n3!...nr!";
		gotoxy(50,25);
		cout<<"[1] TEKRARLI PERMUTASYON PROBLEMLERI";
		gotoxy(50,30);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1): ";
		
		cin>>tekrarli;
}
int tekrarliprobfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"TEKRARLI PERMUTASYON PROBLEMLERI";
		gotoxy(50,17);
		cout<<"1.Problem"; 
		gotoxy(75,17);
		cout<<"2.Problem"; 
		gotoxy(50,20);
		cout<<"3.Problem";
		gotoxy(75,20);
		cout<<"4.Problem";  
		gotoxy(50,30);
		cout<<"0.CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3, 4): ";
		
		cin>>tekrarliprob;
}
int donelfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"DONEL SIRALAMA";
		gotoxy(42,16);
		cout<<"n tane farkli elemanin donel (dairesel) siralamasina,n elemanin";
		gotoxy(42,17);
		cout<<"donel (dairesel) siralamasi denir.";
		gotoxy(42,18);
		cout<<"Elemanlardan biri sabit tutularak n elemanin ";
		gotoxy(42,19);
		cout<<"donel (dairesel) siralamalarinin sayisi (n – 1)! ile bulunur.";
		gotoxy(50,25);
		cout<<"[1] DONEL SIRALAMA PROBLEMLERI";
		gotoxy(50,30);
		cout<<"[0] CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1): ";
		
		cin>>donel;
}
int donelprobfonk(){
	gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(62,12.5);
		cout<<"DONEL SIRALAMA PROBLEMLERI";
		gotoxy(50,17);
		cout<<"1.Problem"; 
		gotoxy(75,17);
		cout<<"2.Problem"; 
		gotoxy(50,20);
		cout<<"3.Problem";
		gotoxy(75,20);
		cout<<"4.Problem";  
		gotoxy(50,30);
		cout<<"0.CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3, 4): ";
		
		cin>>donelprob;
}
int permuprobfonk(){
		gotoxy(40,10);
		cout<<char(201);
		for(i=41;i<=110;i++){
			gotoxy(i,10);
			cout<<char(205);
		}
		gotoxy(111,10);
		cout<<char(187);
		for(i=11;i<=39;i++){
			gotoxy(40,i);
			cout<<char(186);
		}
		gotoxy(40,40);
		cout<<char(200);
		for(i=41;i<=110;i++){
			gotoxy(i,40);
			cout<<char(205);
		}
		gotoxy(111,40);
		cout<<char(188);
		for(i=11;i<=39;i++){
			gotoxy(111,i);
			cout<<char(186);}
		for(i=41;i<=110;i++){
			gotoxy(i,15);
			cout<<char(205);
		}
		for(i=41;i<=110;i++){
			gotoxy(i,35);
			cout<<char(205);
		}
		
		gotoxy(67,12.5);
		cout<<"PERMUTASYON PROBLEMLERI";
		gotoxy(50,17);
		cout<<"1.Problem"; 
		gotoxy(75,17);
		cout<<"2.Problem"; 
		gotoxy(50,20);
		cout<<"3.Problem";
		gotoxy(75,20);
		cout<<"4.Problem";  
		gotoxy(50,30);
		cout<<"0.CIKIS";
		gotoxy(50,37.5);
		cout<<"Seciminiz (0, 1, 2, 3, 4): ";
		
		cin>>permuprob;
}
	





