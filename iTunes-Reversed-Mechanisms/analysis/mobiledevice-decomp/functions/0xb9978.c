// rea decompile_all
// name: ___AFCConnectionSendOperation
// address: 0xb9978
// body: available
// range: 0xb9978-0xb9a64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong ___AFCConnectionSendOperation(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_2 + 0x58);
  lVar3 = ___AFCOperationGetDataLength(param_2);
  if (*(long *)(param_2 + 0x40) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = _CFDataGetBytePtr();
  }
  if (lVar4 == 0 && lVar3 != 0) {
    uVar6 = ___AFCSetErrorResult();
  }
  else {
    _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
    lVar1 = *(long *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar1 + 1;
    *(long *)(lVar5 + 0x18) = lVar1;
    _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
    uVar2 = _AFCSendPacket(param_1,lVar5,lVar4,lVar3);
    if (uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ulong)uVar2;
      lVar5 = _AFCCopyAndClearLastErrorInfo();
      ___AFCOperationSetClientErrorWithInfo(param_2,uVar6,lVar5);
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
    }
  }
  return uVar6;
}

