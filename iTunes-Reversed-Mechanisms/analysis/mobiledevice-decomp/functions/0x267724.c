// rea decompile_all
// name: _AFCSendPacket
// address: 0x267724
// body: available
// range: 0x267724-0x267855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCSendPacket(long param_1,long param_2,void *param_3,size_t param_4)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  
  lVar1 = *(long *)(param_2 + 0x10);
  _AFCLockLock(*(undefined8 *)(param_1 + 0x90));
  if (*(int *)(param_1 + 0x10) == 1) {
    if (param_3 == (void *)0x0 && param_4 != 0) {
      iVar2 = -0x17ffbff9;
    }
    else if ((param_4 + lVar1 < 0x2001) && (pvVar3 = _malloc(0x2000), pvVar3 != (void *)0x0)) {
      ___memcpy_chk(pvVar3,param_2,lVar1,0x2000);
      _memcpy((void *)((long)pvVar3 + lVar1),param_3,param_4);
      _AFCLogPacketInfo(4,"AFCSendHeader",param_2);
      iVar2 = _AFCSendData(param_1,pvVar3,param_4 + lVar1);
      _free(pvVar3);
    }
    else {
      iVar2 = _AFCSendHeader(param_1,param_2);
      if (iVar2 == 0) {
        iVar2 = _AFCSendData(param_1,param_3,param_4);
      }
    }
  }
  else {
    iVar2 = -0x17ffbff5;
  }
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0x90));
  return iVar2;
}

