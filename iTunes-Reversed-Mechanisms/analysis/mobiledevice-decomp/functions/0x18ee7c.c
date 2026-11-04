// rea decompile_all
// name: _sendEOF
// address: 0x18ee7c
// body: available
// range: 0x18ee7c-0x18eee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _sendEOF(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  LOCK();
  bVar3 = *(int *)(param_1 + 0x188) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x188) = 1;
  }
  UNLOCK();
  if (bVar3) {
    iVar1 = _currentWriteBufferFull();
    if (-1 < iVar1) {
      iVar1 = _SharedArrayEnqueue(param_1,0xfffffffe);
      if (-1 < iVar1) {
        return 0;
      }
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedBuffer.c"
                    ,"sendEOF",0x15f,0x49,0,"SharedArrayEnqueue");
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

