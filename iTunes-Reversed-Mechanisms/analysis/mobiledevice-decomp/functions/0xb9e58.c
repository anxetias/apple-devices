// rea decompile_all
// name: ___AFCConnectionProcessData
// address: 0xb9e58
// body: available
// range: 0xb9e58-0xb9f6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ___AFCConnectionProcessData(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  _CFRetain(param_1);
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    ___AFCConnectionUnscheduleFromRunLoop(param_1);
  }
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
  cVar2 = _AFCSocketIsDisconnected(*(undefined4 *)(param_1 + 0x38));
  if (cVar2 == '\0') {
    lVar4 = ___AFCDequeue(param_1,*(undefined8 *)(param_1 + 0xa0));
    if (lVar4 == 0) {
      pcVar5 = "Data received on connection %p when no reply expected.";
      uVar6 = 1;
      goto LAB_000b9f16;
    }
    iVar3 = ___AFCConnectionReceiveOperation(param_1,lVar4);
    if (iVar3 != -0x17ffbff5) {
      ___AFCConnectionNotifyOperationComplete(param_1,lVar4);
      _CFRelease(lVar4);
      goto LAB_000b9f35;
    }
    _AFCLog(5,"Socket closed when reading on connection %p.",param_1);
    ___AFCConnectionNotifyOperationComplete(param_1,lVar4);
    _CFRelease(lVar4);
  }
  else {
    pcVar5 = "Socket closed for connection %p.";
    uVar6 = 5;
LAB_000b9f16:
    _AFCLog(uVar6,pcVar5,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
  ___AFCConnectionInvalidate(param_1);
  iVar3 = -0x17ffbff5;
LAB_000b9f35:
  if (cVar1 != '\0') {
    _AFCConditionSignal(*(undefined8 *)(param_1 + 0x28));
  }
  _CFRelease(param_1);
  return iVar3;
}

