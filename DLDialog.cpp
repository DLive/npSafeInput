#include "DLDialog.h"
#include "resource1.h"
DLDialog::DLDialog(void)
{

}

DLDialog::~DLDialog(void)
{
}

bool DLDialog::create(HINSTANCE hlnstance,LPCTSTR lpTemplate,HWND hWndParent)
{
	hWnd=CreateDialog(hlnstance,lpTemplate,hWndParent,(DLGPROC)DlgProc);
	if(!hWnd)
	{
		DWORD abc=GetLastError();
		char ha[256];
		ZeroMemory(ha,256);
		itoa(abc,ha,10);
		MessageBox(NULL,ha,"err",0);
		return false;
	}
	return true;
}
bool DLDialog::show()
{
	ShowWindow(hWnd, SW_SHOW);
	return true;
}

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{

	switch(message)
	{
	case WM_INITDIALOG:
			break;

	case WM_SIZE:
		{
			RECT rc;
			GetClientRect(hDlg,&rc);
			HWND pitem=GetDlgItem(hDlg,IDC_INPUT);
			SetWindowPos(pitem,HWND_TOPMOST,0,0,rc.right,rc.bottom,SWP_NOZORDER|SWP_NOMOVE);
		}
		break;
	case WM_COMMAND:

		break;      
	case WM_CLOSE:
		break;
	case WM_LBUTTONUP:
		break;
	}
	return false;
	//return DefWindowProc(hDlg, message, wParam, lParam);
}