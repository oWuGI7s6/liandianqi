#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#include<iostream>
#include<bitset>
using namespace std;
int main() {
    cout<<"按9开始连点，按0结束连点"<<endl;
    int l = 1;
    while(1){
        if(KEY_DOWN('9'))
        {
            cout<<"开始连点\n";
            l = 0;
        }
        if(KEY_DOWN('8'))
        {
            return 0;
        }
        while(l == 0)
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
            Sleep(0);
            mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
            Sleep(0);
            if(KEY_DOWN('0'))
            {
                cout<<"结束连点\n";
                l = 1;
                break;
            }
            if(KEY_DOWN('8'))
            {
                return 0;
            }
        }
    }
    return 0;
}