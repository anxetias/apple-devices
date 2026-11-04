// rea decompile_all
// name: _ccn_write_uint_padded_ct_internal
// address: 0x1d961
// body: available
// range: 0x1d961-0x1da5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccn_write_uint_padded_ct_internal(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long local_38;
  
  iVar5 = -7;
  if ((param_3 < 0x7fffffff) && (uVar3 = param_1 * 8, uVar3 < 0x7fffffff)) {
    local_38 = param_3 + param_1 * -8;
    if (param_3 < uVar3 || local_38 == 0) {
      local_38 = 0;
    }
    else {
      _cc_clear(local_38,param_4);
      param_4 = param_4 + local_38;
      param_3 = uVar3;
    }
    lVar2 = _ccn_bitlen_public_value(param_1,param_2);
    uVar3 = lVar2 + 7U >> 3;
    iVar5 = -7;
    if (uVar3 <= param_3) {
      iVar5 = (int)param_3;
      param_4 = param_4 + param_3;
      if (param_3 < 8) {
        lVar2 = 0;
      }
      else {
        lVar2 = (param_3 - 8 >> 3) + 1;
        param_3 = (ulong)((uint)(param_3 - 8) & 7);
        lVar4 = 0;
        do {
          uVar1 = *(ulong *)(param_2 + lVar4 * 8);
          *(ulong *)(param_4 + -8) =
               uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
          param_4 = param_4 + -8;
          lVar4 = lVar4 + 1;
        } while (lVar2 != lVar4);
      }
      iVar5 = ((int)local_38 + iVar5) - (int)uVar3;
      if (param_3 != 0) {
        uVar3 = *(ulong *)(param_2 + lVar2 * 8);
        lVar2 = 0;
        do {
          *(char *)(param_4 + -1 + lVar2) = (char)uVar3;
          uVar3 = uVar3 >> 8;
          lVar2 = lVar2 + -1;
        } while (-lVar2 != param_3);
      }
    }
  }
  return iVar5;
}

