// rea decompile_all
// name: _internalBackendGetPersParam
// address: 0x27136e
// body: available
// range: 0x27136e-0x271402 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_internalBackendGetPersParam(long param_1,uint param_2,void *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  
  uStack_40 = 0x1e;
  if ((param_1 != 0) && (param_3 != (void *)0x0)) {
    if (*(char *)(param_1 + 0x51) == '\0') {
      if (param_2 < 0xe) {
        uVar1 = *(uint *)(&DAT_00330e60 + (ulong)param_2 * 4);
        if (uVar1 <= param_4) {
          lVar2 = *(long *)(&DAT_00330df0 + (ulong)param_2 * 8);
          if (*(char *)(param_1 + 0x10) == '\0') {
            uVar3 = _get_pers_params(param_1);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
          _memcpy(param_3,(void *)(lVar2 + param_1),(ulong)uVar1);
          uStack_40 = 0;
          if (param_5 != (uint *)0x0) {
            *param_5 = uVar1;
          }
        }
      }
    }
    else {
      uStack_40 = 0x1a;
    }
  }
  return uStack_40;
}

