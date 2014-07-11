
#define ADDIN_API __declspec(dllexport) __stdcall 

//extern "C" ADDIN_API HRESULT AddIn_SystemTime  ( DWORD dwAddress, DEBUGHELPER *pHelper, int nBase, BOOL bUniStrings, char *pResult, size_t max, DWORD reserved );
//extern "C" ADDIN_API HRESULT AddIn_FileTime    ( DWORD dwAddress, DEBUGHELPER *pHelper, int nBase, BOOL bUniStrings, char *pResult, size_t max, DWORD reserved );
extern "C" HRESULT ADDIN_API AddIn_quantlibdate    ( DWORD dwAddress, DEBUGHELPER *pHelper, int nBase, BOOL bUniStrings, char *pResult, size_t max, DWORD reserved );


