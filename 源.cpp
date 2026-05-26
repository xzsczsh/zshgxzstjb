#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>
#include <conio.h>

int main() {
    initgraph(640, 480);
    int x = 300, y = 400;

    while (1) {
        if (_kbhit()) {
            char c = _getch();
            if (c == 'a') x -= 12;
            if (c == 'd') x += 12;
        }

        cleardevice();
        setfillcolor(CYAN);

        // 用多边形代替 solidtriangle，兼容所有版本 EasyX
        int pts[6] = {
            x,      y,
            x - 15, y + 25,
            x + 15, y + 25
        };
        solidpolygon(pts, 3);

        Sleep(20);
    }

    closegraph();
    return 0;
}