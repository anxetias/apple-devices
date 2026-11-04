// rea decompile_all
// name: _AFCOperationCopyPacketData
// address: 0xb8923
// body: available
// range: 0xb8923-0xb8998 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AFCOperationCopyPacketData(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _AFCLockLock(*(undefined8 *)(param_1 + 0xf8));
  uVar3 = _CFGetAllocator(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _AFCLockLock(*(undefined8 *)(param_1 + 0xf8));
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0xf8));
  uVar4 = _CFDataCreate(uVar3,uVar4,lVar1 - lVar2);
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0xf8));
  return uVar4;
}

