// rea decompile_all
// name: _AFCFileDescriptorCreateCloseOperation
// address: 0xb8a92
// body: available
// range: 0xb8a92-0xb8b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AFCFileDescriptorCreateCloseOperation(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_58 [40];
  long local_30;
  
  _AFCLog(5,"AFCFileDescriptorCreateCloseOperation(%p) [valid %d]",param_1,
          *(undefined4 *)(param_1 + 0x20));
  cVar1 = _AFCCompareAndSwap32(1,0,param_1 + 0x20);
  lVar4 = 0;
  if (cVar1 != '\0') {
    _AFCHeaderInit(local_58,0x14,0x30,0,0);
    local_30 = *(long *)(param_1 + 0x18);
    lVar4 = 0;
    if (local_30 != 0) {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = _AFCOperationCreate(uVar2,local_58,0,0,0,param_2);
      lVar4 = 0;
      if (lVar3 != 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        lVar4 = lVar3;
      }
    }
  }
  _AFCLog(5,"Close op for desc %p = %p",param_1,lVar4);
  return lVar4;
}

