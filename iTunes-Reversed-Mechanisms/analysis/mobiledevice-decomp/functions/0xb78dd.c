// rea decompile_all
// name: _AFCReadPacketBody
// address: 0xb78dd
// body: available
// range: 0xb78dd-0xb799e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb7982 to 0xb70c9 ___AFCSetErrorResult (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AFCReadPacketBody(long param_1,long param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x40);
  }
  else {
    lVar5 = *(long *)(param_2 + 8) - *(long *)(param_2 + 0x10);
    if (lVar5 == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = _CFAllocatorAllocate(uVar2,lVar5,0);
      if (lVar3 == 0) {
        uVar4 = ___AFCSetErrorResult(0);
        return uVar4;
      }
      uVar1 = _AFCReadData(param_1,lVar3,lVar5);
      if (uVar1 != 0) {
        uVar2 = _CFGetAllocator(param_1);
        _CFAllocatorDeallocate(uVar2,lVar3);
        goto LAB_000b794c;
      }
    }
    *param_3 = lVar3;
    *param_4 = lVar5;
    uVar1 = 0;
  }
LAB_000b794c:
  return (ulong)uVar1;
}

