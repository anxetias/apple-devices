// rea decompile_all
// name: __AMAuthInstallFusingProgramCreateRequest
// address: 0x290220
// body: available
// range: 0x290220-0x2903fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallFusingProgramCreateRequest
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  long local_38;
  
  if (param_4 == 0) {
    lVar1 = 0;
    param_4 = _CFDictionaryCreate(param_1,0,0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (param_4 != 0) goto LAB_0029027b;
    local_38 = 0;
  }
  else {
    _CFRetain(param_4);
LAB_0029027b:
    local_38 = param_4;
    if (param_3 == 0) {
      uStack_50 = 1;
      lVar1 = 0;
      lVar2 = 0;
LAB_002903e8:
      lVar3 = 0;
      uVar4 = 0;
      goto LAB_00290382;
    }
    lVar1 = _CFDictionaryCreateMutable
                      (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      _CFDictionarySetValue(lVar1,&cf_Action,param_3);
      _CFDictionarySetValue(lVar1,&cf_Parameters,param_4);
      lVar2 = _CFPropertyListCreateXMLData(param_1,lVar1);
      if (lVar2 != 0) {
        lVar3 = _CFHTTPMessageCreateRequest
                          (param_1,&cf_POST,param_2,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
        if (lVar3 != 0) {
          uVar4 = _CFDataGetLength(lVar2);
          uVar4 = _CFStringCreateWithFormat(param_1,0,&cf__lu,uVar4);
          _CFHTTPMessageSetHeaderFieldValue(lVar3,&cf_Content_Type,&cf_text_xml_charset__utf_8_);
          _CFHTTPMessageSetHeaderFieldValue(lVar3,&cf_Content_Length,uVar4);
          _CFHTTPMessageSetBody(lVar3,lVar2);
          uVar5 = _CFRetain(lVar3);
          *param_5 = uVar5;
          uStack_50 = 0;
          goto LAB_00290382;
        }
        uStack_50 = 0;
        goto LAB_002903e8;
      }
    }
  }
  lVar2 = 0;
  uVar4 = 0;
  lVar3 = 0;
  uStack_50 = 2;
LAB_00290382:
  _SafeRelease(lVar1);
  _SafeRelease(lVar2);
  _SafeRelease(lVar3);
  _SafeRelease(local_38);
  _SafeRelease(uVar4);
  _SafeRelease(0);
  return uStack_50;
}

