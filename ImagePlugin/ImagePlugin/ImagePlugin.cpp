// ImagePlugin.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "ImagePlugin.h"
#include "ImageDocument.h"
#include "ImageView.h"
#include "afxMDIChildWndEx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE �����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CImagePluginApp

BEGIN_MESSAGE_MAP(CImagePluginApp, CWinApp)
END_MESSAGE_MAP()


// CImagePluginApp ����

CImagePluginApp::CImagePluginApp()
{
	// TODO: �ڴ˴����ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CImagePluginApp ����

CImagePluginApp theApp;


// CImagePluginApp ��ʼ��

BOOL CImagePluginApp::InitInstance()
{
	CWinApp::InitInstance();

	// ע��Ӧ�ó�����ĵ�ģ�塣�ĵ�ģ��
	// �������ĵ�����ܴ��ں���ͼ֮�������
	m_pDocTemplate = new CPIMultiDocTemplate(IDR_IMAGE,
		RUNTIME_CLASS(CImageDocument),
		RUNTIME_CLASS(CMDIChildWndEx), // �Զ��� MDI �ӿ��
		RUNTIME_CLASS(CImageView));
	if (!m_pDocTemplate)
		return FALSE;

	return TRUE;
}