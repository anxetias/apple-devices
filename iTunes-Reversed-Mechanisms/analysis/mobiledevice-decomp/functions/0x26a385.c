// rea decompile_all
// name: _AFCSetErrorInfoWithArgs
// address: 0x26a385
// body: available
// range: 0x26a385-0x26a4dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AFCSetErrorInfoWithArgs
          (int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  void *local_48;
  undefined8 local_40;
  int local_34;
  
  local_48 = (void *)0x0;
  local_40 = param_6;
  local_34 = param_1;
  _pthread_once((pthread_once_t *)&___gPlatformInit,___AFCPlatformInitialize);
  uVar3 = _AFCErrorInfoCreateWithArgs(&local_48,param_2,param_3,param_4,param_5,local_40,param_7);
  pvVar1 = local_48;
  _AFCLog(5,"created error info %p",local_48);
  if (pvVar1 != (void *)0x0) {
    if (0 < local_34) {
      lVar5 = ___AFCCopyErrorInfoDescription(pvVar1);
      if (lVar5 != 0) {
        uVar6 = _CFStringGetLength(lVar5);
        uVar6 = _CFStringGetMaximumSizeForEncoding(uVar6,0x8000100);
        lVar7 = _CFAllocatorAllocate(0,uVar6,0);
        if (lVar7 != 0) {
          cVar2 = _CFStringGetCString(lVar5,lVar7,uVar6,0x8000100);
          if (cVar2 != '\0') {
            _AFCLog(local_34,"%s",lVar7);
          }
          _CFAllocatorDeallocate(0,lVar7);
        }
        _CFRelease(lVar5);
      }
    }
    pvVar8 = _pthread_getspecific(___gAFCErrorInfoKey);
    if (pvVar8 != (void *)0x0) {
      _CFRelease(pvVar8);
    }
    iVar4 = _pthread_setspecific(___gAFCErrorInfoKey,pvVar1);
    if (iVar4 != 0) {
      _AFCLog(5,"Error setting thread error info");
      _CFRelease(pvVar1);
    }
  }
  return uVar3;
}

