#pragma once
#include "StdAfx.h"
class DLDialog
{
public:
	DLDialog(void);
	~DLDialog(void);
	
	bool create(HINSTANCE hlnstance,LPCTSTR lpTemplate,HWND hWndParent);
	bool show();
	HWND hWnd;
};
INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
