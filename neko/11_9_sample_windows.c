// �L�ł��킩��C����v���O���~���O��11��

#include <windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
ATOM InitApp(HINSTANCE);
BOOL InitInstance(HINSTANCE, int);

char szClassName[] = "template";


int WINAPI WinMain(HINSTANCE hCurInst, HINSTANCE hPrevInst,
                   LPSTR lpsCmdLine, int nCmdShow)
{
    MSG msg;
    BOOL bRet;
    
    if (!InitApp(hCurInst))
        return FALSE;
    if (!InitInstance(hCurInst, nCmdShow))
        return FALSE;
    while ((bRet = GetMessage(&msg, NULL, 0, 0)) != 0) {
        if (bRet == -1) {
            break;
        } else {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
    return (int)msg.wParam;
}

//�E�B���h�E�N���X�̓o�^

ATOM InitApp(HINSTANCE hInst)
{
    WNDCLASSEX wc;
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInst;
    wc.hIcon = (HICON)LoadImage(NULL,
        MAKEINTRESOURCE(IDI_APPLICATION),
        IMAGE_ICON,
        0,
        0,
        LR_DEFAULTSIZE | LR_SHARED);
    wc.hCursor = (HCURSOR)LoadImage(NULL,
        MAKEINTRESOURCE(IDC_ARROW),
        IMAGE_CURSOR,
        0,
        0,
        LR_DEFAULTSIZE | LR_SHARED);
    wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = (LPCSTR)szClassName;
    wc.hIconSm = (HICON)LoadImage(NULL,
        MAKEINTRESOURCE(IDI_APPLICATION),
        IMAGE_ICON,
        0,
        0,
        LR_DEFAULTSIZE | LR_SHARED);
        
    
    return (RegisterClassEx(&wc));
}

BOOL InitInstance(HINSTANCE hInst, int nCmdShow)
{
    HWND hWnd;
    
    hWnd = CreateWindow(szClassName,
        //Title
        "�L�ł��킩��Windows�v���O���~���O",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        NULL,
        NULL,
        hInst,
        
    NULL);
    
    if (!hWnd)
        return FALSE;
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    return TRUE;
}


LRESULT CALLBACK WndProc(
    HWND hWnd, UINT msg, WPARAM wp, LPARAM lp
)
{
    
    switch (msg) {
        case WM_CLOSE: {
            int id = MessageBox(hWnd,"�I�����Ă���낵���ł���?", "�m�F", MB_YESNO| MB_ICONQUESTION);
            
            if(id == IDYES) DestroyWindow(hWnd);
            break;
        }
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return (DefWindowProc(hWnd, msg, wp, lp));
    }
    return 0;
}
