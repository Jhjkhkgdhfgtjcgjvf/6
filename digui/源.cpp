#include <stdio.h>
#include <process.h>
#include <string.h>
#include <windows.h>
/*
* ���������ֻ��Ϊ��ѧϰC����
* ���벻��С��һ����������
* �����ѵ���һ���������пո�ֱ�ӷŵ�system��ᱨ��
* ���Ծʹ��������ַ��������ϲ���һ��
* �����û������Ҳ��һ���ַ���������ǰ����õ�ָ�����һ��ͳ���һ����ִ������
* �������������Լ����Զ����صĹ��ܵ���ȥ����chatgpt����Ҫд�ܶ����ͷ�����
* ������벻��ȫ��chatgpt����ֻ���������C���Դ�cmd��������ָ�����κϲ��ַ����ĺ���
* chatgpt�������ɴ���Ĺ���ֻ�ʺϵ����ĵ��鿴 ���� Ҫtaд��ʲô�����������ʲô���ܿ��Բο�
* 
* ���Ҳ�֪��Ϊʲô����ô�� <ɵ��> ��chatgptд����ֱ�Ӹ���ճ��Ȼ��run������Ź�
* 
����chatgpt�Ĵ���ֻ�ʺϲο�
*/

int main(void)
{
    printf("--------------------------------------------------------------------------------\n");
    printf("������С������ bug�е���������\n");
    printf("����1�鿴�������豸\n");
    printf("����2������recovery\n");
    printf("����3��������ѽ����絫�޷����ʻ�����������\n");//�����ֻ�ͨ����������
    printf("����4��ʼ��װ��׿�װ�\n");
    printf("����5ˢ��recovery��img\n");
    printf("����6����adb��������\n");
    printf("����7adb��������\n");
    printf("����8����fastbootģʽ\n");
    printf("����01�˳�\n");
    printf("����02��ϵ����\n");
    printf("����03����8.1�װ�\n");
    printf("����03����adb\n");

    printf("--------------------------------------------------------------------------------\n");
    printf("������:");  
    int a;
    scanf_s("%d", &a);
        if (a == 1)
        {
            system("cmd /c adb devices");//��cmd ������adb devices
            system("TIMEOUT /T 300 /NOBREAK");
            system("pause");
        }/*����system��Ϊ����cmd���������*/
        if (a == 2)
        {
            system("cmd /c adb reboot recovery");
            system("pause");
        }
        if (a == 3)
        {

            system("cmd /c adb shell settings put global captive_portal_use_https 1");
            system("cmd /c adb shell settings put global captive_portal_http_url http://204.ustclug.org");
            system("cmd /c adb shell settings put global captive_portal_https_url https://204.ustclug.org");
            system("cmd /c adb shell settings put global captive_portal_mode 0");
            system("pause");
        }
        if (a == 4)
        {
            char andr[] = {" && call flash-all.bat"};
            char ll[] = {"cmd /c cd "};//����һ��ǰ������
            char kl[] = {""};//androidλ�� Ҳ�Ǻ��������û�ѡ��
            printf("��������Ҫ���ذ�׿�װ��������ӣ�\n https://dl.google.com/dl/android/aosp/angler-opm7.181205.001-factory-b75ce068.zip\n");
            printf("���û������������Ȼ���ϵ�������\n");//ʵ���Զ�����̫���˲�д
            scanf_s("%s",&kl);//��ȡ�û�����
            strcat_s(ll, kl);//ǰ������ͺ������ϲ���һ��
            strcat_s(ll,andr);
            /*
             *�����֪��Ϊʲô���ǲ�����
             *�л����Ĵ��н��һ��
             *��ϵ��ʽ΢��:Ilikepythonandc
             */
        }
        if (a == 5)
        {
            char string[1000];
            char cc[200];
            char img[] = ".\\fastboot flash recovery ";
            printf_s("����ק�ô�����Ҫˢ��ĵ�����ROM��\n");

            scanf_s("%s", &string[100]);
            strcpy_s(img,string);/*img������string�����ϲ���һ����cc����*/
            //strcpy_s(cc, string);
            //cc = string + img;
            system(img);
            system("pause");
        }
        if (a == 6)
        {
            /*������д����ȡ�û���ʵ��C:\\Users\\�����û�������û���
             �����ҵ��û�����H�����H����H  {C:\Users\H}
             Ȼ����� cmd ��move������ʵ���ļ��ƶ�
             ��adb�ļ��е������ļ��ƶ���C:\Users\H����C:\\Users\\�����û�������û���
             ����������Ҳ��֪��Ϊʲô�����������������ް���ϵ��vx��Ilikepythonandc
            */
            char cmdmo[] = {"\\*.*"};
            char cmdmo1[] = {"move "};
            char name[] = {""};
            char cp[] = "C:\\Users\\";
            char wenjian[] = {""};
            printf("�������Windows�û���:");
            scanf_s("%s",&name);
            printf("����קadb�ļ��е��˴���");//ִ���ʼ�Ŀ¼
            scanf_s("%s",&wenjian);//ִ���ļ�Ŀ¼����
            strcpy_s(cp,name);//Ŀ���ļ���
            printf("%c",cp);
            strcpy_s(cmdmo,cp);
            printf("cmdmo=%c",cmdmo);
            system(0);
            system("pause");

        }
        if (a == 7)
        {
            printf("����Ҫ����adb shell���������Ļ��Զ�����дadb shell");
            char zdy1[] = {"cmd /c adb shell"};
            char zdy[200];
            scanf_s("%s", &zdy);
            strcat_s(zdy1, zdy);
            system("zdy1");
            system("pause");
        }
        if (a == 8)
         {
            system("cmd /c adb reboot bootloader");
            
         }
        if (a == 01)
        {
            //_exit(0);
        }
        if (a == 02)
        {
            printf("΢��:Ilikepythonandc");
        }
        if (a == 03)
        {   
            char ur[] = {"start https://dl.google.com/dl/android/aosp/angler-opm7.181205.001-factory-b75ce068.zip"};
            
                system(ur);
                
        }
        if (a == 04)
        {
            char ur1[] = { "start https://dl.google.com/android/repository/platform-tools-latest-windows.zip" };
            system(ur1);
        }
        else
        {
            printf("�ϸ�����ú���д������");
        }
    }

    

