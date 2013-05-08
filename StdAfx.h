// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__961C7E99_EE57_4CE9_89BB_4EA84B890ED7__INCLUDED_)
#define AFX_STDAFX_H__961C7E99_EE57_4CE9_89BB_4EA84B890ED7__INCLUDED_

#if _MSC_VER > 1000
#pragma once




#endif // _MSC_VER > 1000

#define STRICT
//#ifndef _WIN32_WINNT
//#define _WIN32_WINNT 0x0400
//#endif
//#define _ATL_APARTMENT_THREADED

#ifndef WINVER    

#define WINVER 0x0501  
#endif

#ifndef _WIN32_WINNT                     
#define _WIN32_WINNT 0x0501 

#endif      

// #ifndef _WIN32_WINDOWS  
// #define _WIN32_WINDOWS 0x0410 
// #endif

#ifndef _WIN32_IE   

#define _WIN32_IE 0x0600 
#endif

#ifdef XP_WIN
#include <windows.h>
#include <windowsx.h>
#endif

#ifdef XP_MAC
#include <TextEdit.h>
#endif

#ifdef XP_UNIX
#include <string.h>
#endif

#define MY_ENCODING_TYPE  (PKCS_7_ASN_ENCODING | X509_ASN_ENCODING)

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
#include <stdio.h>
#include <winbase.h>
#include "resource1.h"
#endif // !defined(AFX_STDAFX_H__961C7E99_EE57_4CE9_89BB_4EA84B890ED7__INCLUDED)
