#include <stdio.h>
#include <process.h>
#include <string.h>
#include <windows.h>
/*
* 本程序仅仅只是为了学习C语言
* 代码不多小白一个大佬勿喷
* 其中难点是一串命令中有空格直接放到system里会报错
* 所以就创建两个字符串变量合并到一起
* 还有用户输入的也是一个字符串加上提前输入好的指令加在一起就成了一串可执行命令
* 本来这个程序可以加入自动下载的功能但我去问了chatgpt看到要写很多代码就放弃了
* 这个代码不完全由chatgpt生成只问了如何用C语言打开cmd并和输入指令和如何合并字符串的函数
* chatgpt不是生成代码的工具只适合当作文档查看 或者 要ta写出什么编程语言做出什么功能可以参考
* 
* 但我不知道为什么有那么多 <傻逼> 让chatgpt写代码直接复制粘贴然后run不报错才怪
* 
所以chatgpt的代码只适合参考
*/

int main(void)
{
    printf("--------------------------------------------------------------------------------\n");
    printf("纯纯的小白新手 bug有点多大佬勿喷\n");
    printf("输入1查看已连接设备\n");
    printf("输入2重启至recovery\n");
    printf("输入3解决“连已接网络但无法访问互联网”问题\n");//海外手机通常是这样的
    printf("输入4开始安装安卓底包\n");
    printf("输入5刷入recovery的img\n");
    printf("输入6配置adb环境变量\n");
    printf("输入7adb定义命令\n");
    printf("进入8进入fastboot模式\n");
    printf("输入01退出\n");
    printf("输入02联系作者\n");
    printf("输入03下载8.1底包\n");
    printf("输入03下载adb\n");

    printf("--------------------------------------------------------------------------------\n");
    printf("请输入:");  
    int a;
    scanf_s("%d", &a);
        if (a == 1)
        {
            system("cmd /c adb devices");//打开cmd 并输入adb devices
            system("TIMEOUT /T 300 /NOBREAK");
            system("pause");
        }/*以下system均为“打开cmd并输入命令”*/
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
            char ll[] = {"cmd /c cd "};//定义一个前段命令
            char kl[] = {""};//android位置 也是后段命令给用户选择
            printf("本功能需要下载安卓底包下载连接：\n https://dl.google.com/dl/android/aosp/angler-opm7.181205.001-factory-b75ce068.zip\n");
            printf("如果没下载请先下载然后拖到本窗口\n");//实现自动下载太难了不写
            scanf_s("%s",&kl);//获取用户输入
            strcat_s(ll, kl);//前段命令和后段命令合并在一起
            strcat_s(ll,andr);
            /*
             *这个不知道为什么就是不运行
             *有会解决的大佬解决一下
             *联系方式微信:Ilikepythonandc
             */
        }
        if (a == 5)
        {
            char string[1000];
            char cc[200];
            char img[] = ".\\fastboot flash recovery ";
            printf_s("请拖拽该窗口你要刷入的第三方ROM包\n");

            scanf_s("%s", &string[100]);
            strcpy_s(img,string);/*img变量和string变量合并在一起变成cc变量*/
            //strcpy_s(cc, string);
            //cc = string + img;
            system(img);
            system("pause");
        }
        if (a == 6)
        {
            /*本来想写个获取用户名实现C:\\Users\\加上用户输入的用户名
             例如我的用户名是H输入的H就是H  {C:\Users\H}
             然后调用 cmd 的move命令来实现文件移动
             把adb文件夹的所有文件移动到C:\Users\H里结果C:\\Users\\加上用户输入的用户名
             出现问题我也不知道为什么如果你会修这个洞你就修把联系人vx：Ilikepythonandc
            */
            char cmdmo[] = {"\\*.*"};
            char cmdmo1[] = {"move "};
            char name[] = {""};
            char cp[] = "C:\\Users\\";
            char wenjian[] = {""};
            printf("输入你的Windows用户名:");
            scanf_s("%s",&name);
            printf("请拖拽adb文件夹到此窗口");//执行问价目录
            scanf_s("%s",&wenjian);//执行文件目录输入
            strcpy_s(cp,name);//目标文件夹
            printf("%c",cp);
            strcpy_s(cmdmo,cp);
            printf("cmdmo=%c",cmdmo);
            system(0);
            system("pause");

        }
        if (a == 7)
        {
            printf("不需要输入adb shell巴拉巴拉的会自动帮你写adb shell");
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
            printf("微信:Ilikepythonandc");
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
            printf("老哥请你好好填写可以吗");
        }
    }

    

