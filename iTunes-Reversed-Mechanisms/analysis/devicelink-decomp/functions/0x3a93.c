// rea decompile_all
// name: __DLGetStatusResponseFromData
// address: 0x3a93
// body: available
// range: 0x3a93-0x3bc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __DLGetStatusResponseFromData(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined4 local_2c;
  
  local_2c = 0;
  lVar1 = _CFPropertyListCreateFromXMLData(0,param_1,0,0);
  if (lVar1 == 0) {
    if (param_3 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    *param_3 = &cf_Errordeserializingstatusresponsedata;
    return 0xffffffff;
  }
  lVar2 = _CFArrayGetCount(lVar1);
  if (lVar2 == 4) {
    uVar3 = _CFArrayGetValueAtIndex(lVar1,0);
    lVar2 = _CFStringCompare(uVar3,&cf_DLMessageStatusResponse,0);
    if (lVar2 == 0) {
      uVar3 = _CFArrayGetValueAtIndex(lVar1,1);
      _CFNumberGetValue(uVar3,9,&local_2c);
      if (param_3 != (undefined8 *)0x0) {
        uVar3 = _CFArrayGetValueAtIndex(lVar1,2);
        *param_3 = uVar3;
        _CFRetain(uVar3);
      }
      if (param_2 != (undefined8 *)0x0) {
        uVar3 = _CFArrayGetValueAtIndex(lVar1,3);
        *param_2 = uVar3;
        _CFRetain(uVar3);
      }
      goto LAB_00003b54;
    }
    local_2c = 0xffffffff;
    if (param_3 == (undefined8 *)0x0) goto LAB_00003b54;
    pcVar4 = &cf_Unexpectedresponsemessage___;
  }
  else {
    local_2c = 0xffffffff;
    if (param_3 == (undefined8 *)0x0) goto LAB_00003b54;
    uVar3 = _CFArrayGetCount(lVar1);
    pcVar4 = &cf_Toofewcomponentsinstatusresponse__ld;
  }
  uVar3 = _CFStringCreateWithFormat(0,0,pcVar4,uVar3);
  *param_3 = uVar3;
LAB_00003b54:
  _CFRelease(lVar1);
  return local_2c;
}

