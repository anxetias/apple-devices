// rea decompile_all
// name: ____ListenForAsynchronousDataWithRetainedContext_block_invoke
// address: 0x45085
// body: available
// range: 0x45085-0x453ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____ListenForAsynchronousDataWithRetainedContext_block_invoke(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  long local_38;
  
  puVar1 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  local_38 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    bVar2 = false;
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"listen_context is NULL");
    iVar4 = -0x17ffffff;
    goto LAB_0004511a;
  }
  iVar4 = _AMDServiceConnectionReceiveMessage(*puVar1,&local_38,0,0);
  if (iVar4 != 0) {
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to receive response from %@: 0x%08x"
                      ,puVar1[1],iVar4);
    bVar2 = true;
    goto LAB_0004511a;
  }
  if (local_38 == 0) {
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"Got an empty response from %@",puVar1[1]);
LAB_0004521b:
    bVar2 = false;
    iVar4 = -0x17fffffa;
    goto LAB_0004511a;
  }
  lVar5 = _CFGetTypeID();
  lVar6 = _CFDictionaryGetTypeID();
  if (lVar5 != lVar6) {
    bVar2 = false;
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"Got non-dictionary response from %@",
                      puVar1[1]);
    iVar4 = -0x17fffffc;
    goto LAB_0004511a;
  }
  lVar5 = _CFDictionaryGetValue(local_38,&cf_Error);
  if (lVar5 != 0) {
    uVar11 = puVar1[1];
    uVar7 = _CFStringGetCStringPtr(lVar5,0x8000100);
    bVar2 = false;
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"Got error from %@: %s",uVar11,uVar7);
    iVar4 = __OurErrorStringToAMDError(lVar5);
    goto LAB_0004511a;
  }
  lVar5 = _CFDictionaryGetValue(local_38,&cf_Command);
  if (lVar5 == 0) {
LAB_00045365:
    uVar11 = puVar1[1];
    pcVar10 = "Failed to get command from %@: %@: %@";
    lVar6 = local_38;
  }
  else {
    lVar6 = _CFStringGetTypeID();
    lVar8 = _CFGetTypeID(lVar5);
    if (lVar6 != lVar8) goto LAB_00045365;
    cVar3 = _CFEqual(lVar5,&cf_GizmoAttach);
    uVar11 = 1;
    if (cVar3 == '\0') {
      cVar3 = _CFEqual(lVar5,&cf_GizmoDetach);
      uVar11 = 2;
      if (cVar3 == '\0') {
        cVar3 = _CFEqual(lVar5,&cf_GizmoPaired);
        uVar11 = 5;
        if (cVar3 == '\0') {
          cVar3 = _CFEqual(lVar5,&cf_GizmoUnpaired);
          uVar11 = 6;
          if (cVar3 == '\0') {
            __os_log_internal(0,PTR___os_log_default_004412f0,0,
                              "Unknown command %@ received from %@",lVar5,puVar1[1]);
            goto LAB_0004521b;
          }
        }
      }
    }
    lVar8 = _CFDictionaryGetValue(local_38,&cf_GizmoUDIDKey);
    if (lVar8 != 0) {
      lVar6 = _CFStringGetTypeID();
      lVar9 = _CFGetTypeID(lVar8);
      if (lVar6 == lVar9) {
        uVar7 = _CFDictionaryGetValue(local_38,&cf_CompanionLockdownProxyPort);
        if ((code *)puVar1[3] != (code *)0x0) {
          (*(code *)puVar1[3])(uVar11,puVar1[1],lVar8,uVar7,puVar1[2],*puVar1,puVar1[4]);
        }
        iVar4 = 0;
        bVar2 = false;
        goto LAB_0004511a;
      }
    }
    uVar11 = puVar1[1];
    pcVar10 = "Failed to get kGizmoUDIDKey from %@: %@: %@";
    lVar6 = lVar5;
    lVar5 = lVar8;
  }
  bVar2 = false;
  __os_log_internal(0,PTR___os_log_default_004412f0,0,pcVar10,uVar11,lVar6,lVar5);
  iVar4 = -0x17fffff9;
LAB_0004511a:
  if (local_38 != 0) {
    _CFRelease();
  }
  local_38 = 0;
  if (bVar2) {
    __os_log_internal(0,PTR___os_log_default_004412f0,0,
                      "Stopped listening for paired devices from %@: 0x%08x",puVar1[1],iVar4);
    _CPXStopListeningForPairedDevices(*puVar1,0);
  }
  return;
}

