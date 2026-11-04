// rea decompile_all
// name: _BrotliEnsureRingBuffer
// address: 0x8857c
// body: available
// range: 0x8857c-0x88620 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BrotliEnsureRingBuffer(long param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x2a0)) {
    pvVar2 = *(void **)(param_1 + 0x78);
    lVar3 = (**(code **)(param_1 + 0x28))
                      (*(undefined8 *)(param_1 + 0x38),(long)*(int *)(param_1 + 0x2a0) + 0x2a);
    *(long *)(param_1 + 0x78) = lVar3;
    if (lVar3 == 0) {
      *(void **)(param_1 + 0x78) = pvVar2;
      uVar4 = 0;
    }
    else {
      *(undefined1 *)(lVar3 + -2 + (long)*(int *)(param_1 + 0x2a0)) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x78) + -1 + (long)*(int *)(param_1 + 0x2a0)) = 0;
      if (pvVar2 != (void *)0x0) {
        _memcpy(*(void **)(param_1 + 0x78),pvVar2,(long)*(int *)(param_1 + 0x4c));
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),pvVar2);
      }
      iVar1 = *(int *)(param_1 + 0x2a0);
      *(int *)(param_1 + 0x58) = iVar1;
      *(int *)(param_1 + 0x5c) = iVar1 + -1;
      *(long *)(param_1 + 0x80) = (long)iVar1 + *(long *)(param_1 + 0x78);
    }
  }
  return uVar4;
}

