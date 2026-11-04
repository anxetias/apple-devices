// rea decompile_all
// name: _AMSupportBase64Decode
// address: 0x3c0e
// body: available
// range: 0x3c0e-0x3dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportBase64Decode(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_2 == 0) {
    _AMSupportBase64Decode_cold_2();
    return 1;
  }
  lVar3 = _CFStringGetLength(param_2);
  if (lVar3 == 0) {
    _AMSupportLogInternal(3,"AMSupportBase64Decode","value length == 0: \'%@\'",param_2);
    return 1;
  }
  if (param_3 == (undefined8 *)0x0) {
    _AMSupportBase64Decode_cold_1();
    return 1;
  }
  iVar2 = _CFStringGetLength(param_2);
  iVar2 = iVar2 + 1;
  pvVar4 = _malloc((long)iVar2);
  if (pvVar4 == (void *)0x0) {
    _AMSupportLogInternal(3,"AMSupportBase64Decode","failed to allocate buffer",param_2);
    return 2;
  }
  cVar1 = _CFStringGetCString(param_2,pvVar4,(long)iVar2,0x8000100);
  if (cVar1 == '\0') {
    pcVar6 = "failed to convert value to c-string";
  }
  else {
    iVar2 = __base64decode(pvVar4,iVar2);
    if (iVar2 < 1) {
      uVar5 = 3;
      _AMSupportLogInternal
                (3,"AMSupportBase64Decode",
                 "_base64decode of value \'%@\' failed with error code %d.",param_2,iVar2);
      goto LAB_00003d9f;
    }
    lVar3 = _CFDataCreate(param_1,pvVar4,iVar2);
    if (lVar3 != 0) {
      uVar5 = _CFRetain(lVar3);
      *param_3 = uVar5;
      _free(pvVar4);
      _CFRelease(lVar3);
      return 0;
    }
    pcVar6 = "decodedData is NULL";
  }
  _AMSupportLogInternal(3,"AMSupportBase64Decode",pcVar6,param_2);
  uVar5 = 2;
LAB_00003d9f:
  _free(pvVar4);
  return uVar5;
}

