// rea decompile_all
// name: _ccn_write_uint_public_value
// address: 0x1da5f
// body: available
// range: 0x1da5f-0x1db0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_write_uint_public_value(ulong param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar1 = _ccn_bitlen_public_value();
  uVar2 = lVar1 + 7U >> 3;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  param_4 = param_4 + param_3;
  uVar2 = uVar2 - param_3;
  uVar4 = (uint)uVar2 & 7;
  uVar5 = (ulong)uVar4;
  uVar3 = *(ulong *)(param_2 + (uVar2 & 0xfffffffffffffff8)) >> (char)uVar4 * '\b';
  if (7 < param_3) {
    uVar2 = uVar2 >> 3;
    do {
      lVar1 = uVar5 - 8;
      do {
        *(char *)(param_4 + -1) = (char)uVar3;
        param_4 = param_4 + -1;
        uVar3 = uVar3 >> 8;
        lVar1 = lVar1 + 1;
      } while (lVar1 != 0);
      if (uVar2 + 1 < param_1) {
        uVar3 = *(ulong *)(param_2 + 8 + uVar2 * 8);
        uVar2 = uVar2 + 1;
      }
      param_3 = (param_3 - 8) + uVar5;
      uVar5 = 0;
    } while (7 < param_3);
  }
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(char *)(param_4 + -1 + lVar1) = (char)uVar3;
      uVar3 = uVar3 >> 8;
      lVar1 = lVar1 + -1;
    } while (-lVar1 != param_3);
  }
  return;
}

