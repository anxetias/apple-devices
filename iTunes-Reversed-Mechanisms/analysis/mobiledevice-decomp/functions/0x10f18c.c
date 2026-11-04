// rea decompile_all
// name: _copy_daemon_name
// address: 0x10f18c
// body: available
// range: 0x10f18c-0x10f2d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _copy_daemon_name(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
  local_38 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    iVar1 = -0x17fffff5;
    uVar6 = 0;
    if (param_2 == (int *)0x0) {
      return 0;
    }
    goto LAB_0010f29d;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  lVar2 = __CreateMessageDict(&cf_QueryType);
  if (lVar2 == 0) {
    iVar1 = -0x17fffffd;
    uVar6 = 0;
    goto LAB_0010f29d;
  }
  iVar1 = _lockconn_send_message(param_1,lVar2);
  if ((iVar1 == 0) && (iVar1 = _lockconn_receive_message(param_1,&local_38), iVar1 == 0)) {
    lVar3 = _CFDictionaryGetValue(local_38,&cf_Error);
    if (lVar3 != 0) {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFStringGetTypeID();
      if (lVar4 == lVar5) {
        iVar1 = __ConvertLockdowndError(lVar3);
      }
      else {
        iVar1 = -0x17ffffed;
      }
      goto LAB_0010f284;
    }
    lVar3 = _CFDictionaryGetValue(local_38,&cf_Type);
    iVar1 = -0x17ffffed;
    if (lVar3 == 0) goto LAB_0010f284;
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    uVar6 = 0;
    if (lVar4 == lVar5) {
      uVar6 = _CFRetain(lVar3);
      iVar1 = 0;
    }
  }
  else {
LAB_0010f284:
    uVar6 = 0;
  }
  _CFRelease(lVar2);
  if (local_38 != 0) {
    _CFRelease();
  }
LAB_0010f29d:
  *param_2 = iVar1;
  return uVar6;
}

