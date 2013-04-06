#include <windows.h>

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
                   LPSTR cmdLine, int nCmdShow)
{
    LPCSTR pClassName = "Sample Window Class";

    WNDCLASSEX wc;
    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc   = WindowProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInst;
    wc.hIcon         = NULL;
    wc.hIconSm       = NULL;
    wc.hCursor       = LoadCursor(NULL,IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = pClassName;
    
    if (!RegisterClassEx(&wc)) return FALSE;
    
    HWND hWindow = CreateWindow(pClassName, "何もしないただのウィンドウです。",
         WS_OVERLAPPEDWINDOW,
         CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
         NULL, NULL, hInst, NULL);
    
    if (!hWindow) return FALSE;
    ShowWindow(hWindow, nCmdShow);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK WindowProc(HWND hWindow, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWindow, msg, wp, lp);
    }
    return 0;
}

