// rea decompile_all
// name: _LZFSEIBootBufferPushN
// address: 0x1da798
// body: available
// range: 0x1da798-0x1da872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _LZFSEIBootBufferPushN(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  
  if (*(ulong *)(param_1 + 8) < *(long *)(param_1 + 0x10) + (ulong)param_2) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        iVar2 = _LZFSEIBootBufferPush(param_1,*(undefined1 *)((long)param_3 + lVar3));
        if (iVar2 < 0) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + 1;
      } while (param_2 != (uint)lVar3);
    }
  }
  else if (param_2 != 0) {
    do {
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (3 < param_2) {
          puVar1 = *(undefined4 **)(param_1 + 0x10);
          do {
            *puVar1 = *param_3;
            *(undefined4 **)(param_1 + 0x10) = puVar1 + 1;
            param_3 = param_3 + 1;
            param_2 = param_2 - 4;
            puVar1 = puVar1 + 1;
          } while (3 < param_2);
          if (param_2 == 0) {
            return 0;
          }
        }
        lVar3 = 0;
        do {
          iVar2 = _LZFSEIBootBufferPush(param_1,*(undefined1 *)((long)param_3 + lVar3));
          if (iVar2 < 0) {
            return 0xffffffff;
          }
          lVar3 = lVar3 + 1;
        } while (param_2 != (uint)lVar3);
        return 0;
      }
      iVar2 = _LZFSEIBootBufferPush(param_1,*(undefined1 *)param_3);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      param_3 = (undefined4 *)((long)param_3 + 1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return 0;
  }
  return 0;
}

