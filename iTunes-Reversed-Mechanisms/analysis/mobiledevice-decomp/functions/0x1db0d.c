// rea decompile_all
// name: _ccn_cond_neg
// address: 0x1db0d
// body: available
// range: 0x1db0d-0x1db9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_cond_neg(long param_1,byte param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = _ccn_mux_next_mask();
  bVar2 = ((char)uVar3 * '\x02' | param_2) & 0x3f | 0x20;
  if (param_1 != 0) {
    uVar4 = 1;
    do {
      uVar1 = *param_4;
      uVar5 = ~uVar1 + uVar4;
      uVar4 = (ulong)CARRY8(~uVar1,uVar4);
      uVar5 = uVar5 ^ uVar1;
      *param_3 = uVar1 ^ uVar3;
      *param_3 = uVar5 & (0x5555555555555555U >> bVar2 | 0x5555555555555555 << 0x40 - bVar2) ^
                 uVar5 & 0x5555555555555555 ^ uVar1 ^ uVar3 ^ uVar3;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

