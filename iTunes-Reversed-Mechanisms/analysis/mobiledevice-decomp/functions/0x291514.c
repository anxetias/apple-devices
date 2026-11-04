// rea decompile_all
// name: _AMAuthInstallHttpCreatePostRequest
// address: 0x291514
// body: available
// range: 0x291514-0x291668 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallHttpCreatePostRequest
              (undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_38;
  
  local_38 = 0;
  lVar2 = 0;
  iVar1 = 1;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar4 = 0;
    if (param_4 == (undefined8 *)0x0) goto LAB_0029160e;
    iVar1 = _AMAuthInstallHttpCreatePostBody(param_1,param_3,&local_38);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (local_38 == 0) {
        iVar1 = 2;
      }
      else {
        lVar2 = _CFHTTPMessageCreateRequest
                          (param_1,&cf_POST,param_2,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
        if (lVar2 != 0) {
          uVar4 = _CFDataGetLength(local_38);
          iVar1 = 0;
          uVar4 = _CFStringCreateWithFormat(param_1,0,&cf__ld,uVar4);
          _CFHTTPMessageSetHeaderFieldValue(lVar2,&cf_Content_Type,&cf_text_xml_charset__utf_8_);
          _CFHTTPMessageSetHeaderFieldValue(lVar2,&cf_Content_Length,uVar4);
          _CFHTTPMessageSetBody(lVar2,local_38);
          uVar3 = _CFRetain(lVar2);
          *param_4 = uVar3;
          goto LAB_0029160e;
        }
      }
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallHttpCreatePostRequest",
                        "AMAuthInstallHttpCreatePostBody failed");
    }
  }
  lVar2 = 0;
  uVar4 = 0;
LAB_0029160e:
  _SafeRelease(local_38);
  _SafeRelease(lVar2);
  _SafeRelease(uVar4);
  _SafeRelease(0);
  return iVar1;
}

