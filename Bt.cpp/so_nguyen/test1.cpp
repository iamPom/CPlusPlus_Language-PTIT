#include <stdio.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x,int y)
{
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
COORD g = {x,y};
SetConsoleCursorPosition(h,g);
}
void textcolor(int x)
{
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h,x);
}
void resizeConsole(int width, int height)
{
HWND console = GetConsoleWindow();
RECT r;
GetWindowRect(console, &r);
MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void Begin()
{
gotoxy(28,2); textcolor(12); printf("CONNECTING FROM LOVE SEVER");
gotoxy(13,4); textcolor(12); printf("%c%c%c",3,3,3);gotoxy(65,4);printf("%c%c%c",3,3,3);
gotoxy(16,4); textcolor(11); printf(" Gui cau...........Nguoi con gai toi tham thuong");
 gotoxy(18,6); textcolor(14); printf("__________________________________________");
gotoxy(32,6); textcolor(13); printf("Loading......3%%");
gotoxy(18,7); textcolor(14); printf("__________________________________________");
}
int main(){
    printf("v");
	Begin();
	Sleep(2000);
    int i,j;
    
    for(i=1;i<=100;i++)
	{
        system("cls");
        printf("\n\t\t\t\tI Love You ");
        printf("\n\n\t\t\t Send ......... to my Princess <3!!!");
        printf("\n\n\t\t\t       Loading...%d %c", i, '%');
        printf("\n\n\t\t------------------------------------------------");
        if(i==10)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t\t   Cau a! Minh co vai dieu muon noi voi cau! ");
            Sleep(2000);
        }
        if(i==20)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t     Suy nghi va dien thoai cua to deu co diem chung la toan hinh anh ve cau :)) !");
            Sleep(2000);
        }
        if(i==30)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t\t Minh nguyen lam nguoi tham lang phia sau cau !");
            Sleep(2000);
        }
        if(i==40)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t\t       Cho du di dau, lam gi di nua");
            Sleep(2000);
        }
        if(i==50)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t     Chi can o ben canh cau thi moi thu to deu co the vuot qua <3 !");
            Sleep(2000);
        }
        if(i==60)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t\t\tMinh muon ben cau ngay luc nay!");
            Sleep(2000);
        }
        if(i==70)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t     Minh yeu cau ! Va`....chang bao gio het yeu cau ca =))!");
            Sleep(2000);
        }
        if(i==80)
		
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t\tMinh muon di cung cau het quang duong con lai ! ");
            Sleep(2000);
        }
        if(i==90)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t\t      Lam nguoi yeu cua minh nhe <3! ");
            Sleep(2000);
        }
        if(i==98)
		{
            printf("\n\n\t\t\t\tYess,Phuoc dayyy!");
            printf("\n\n\t\t\t        I Love You PacPac :3");
            Sleep(3000);
        }
        if(i==99)
		{
            for(j=1;j<=23;j++){
                system("cls");
                if(j==1){
                    printf("\t\t\t   *                \n");
                    Sleep(300);
                }

                if(j== 2){
                        printf("\t\t\t   * .                \n");
                        Sleep(300);
                }
                if(j== 3){
                        printf("\t\t\t   * .                \n");
                        printf("\t\t\t       .              \n");
                        Sleep(300);
                }
                if(j== 4){
                        printf("\t\t\t   * .   .            \n");
                        printf("\t\t\t       .              \n");
                        Sleep(350);
                }
                if(j== 5){
                        printf("\t\t\t   * .   . *         \n");
                        printf("\t\t\t       .              \n");
                        Sleep(300);
                }
                if(j== 6){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .              \n");
                        Sleep(300);
                }
                if(j== 7){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        Sleep(300);
                }
                if(j== 8){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        printf("\t\t\t             *        \n");
                        Sleep(300);
                }
                if(j== 9){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        printf("\t\t\t             *        \n");
                        printf("\t\t\t            *          \n");
                        Sleep(300);
                }
                if(j== 10){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        printf("\t\t\t             *        \n");
                        printf("\t\t\t            *          \n");
                        printf("\t\t\t          *            \n");
                        Sleep(300);
                }
                if(j== 11){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        printf("\t\t\t             *        \n");
                        printf("\t\t\t            *          \n");
                        printf("\t\t\t          *            \n");
                        printf("\t\t\t       *              \n");
                        Sleep(300);
						}
						if(j== 12){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        printf("\t\t\t             *        \n");
                        printf("\t\t\t            *          \n");
                        printf("\t\t\t    *     *            \n");
                        printf("\t\t\t       *              \n");
                        Sleep(300);}
                        if(j== 13){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        printf("\t\t\t             *        \n");
                        printf("\t\t\t  *         *          \n");
                        printf("\t\t\t    *     *            \n");
                        printf("\t\t\t       *              \n");
                        Sleep(300);}
                        if(j== 14){
                        printf("\t\t\t   * .   . *.         \n");
                        printf("\t\t\t       .     *        \n");
                        printf("\t\t\t *           *        \n");
                        printf("\t\t\t  *         *          \n");
                        printf("\t\t\t    *     *            \n");
                        printf("\t\t\t       *              \n");
                        Sleep(300);}
                         if(j== 15){
                        printf("\t\t\t . * .   . *.         \n");
                        printf("\t\t\t*      .     *        \n");
                        printf("\t\t\t *           *        \n");
                        printf("\t\t\t  *         *          \n");
                        printf("\t\t\t    *     *            \n");
                        printf("\t\t\t       *              \n");
                        Sleep(300);}
                        
                    }
                }
            if(i==100)
		{
            printf("\n\n\tmay dong code la to coppy day nhung tinh cam cua to danh cho cau la that long =)))");
            Sleep(5000);
        }
            }
        }