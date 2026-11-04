// rea decompile_all
// name: _ccn_cond_add
// address: 0x26899
// body: available
// range: 0x26899-0x26944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ccn_cond_add(long param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = _ccn_mux_next_mask();
  bVar2 = ((char)uVar3 * '\x02' | (byte)param_2) & 0x3f | 0x20;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(ulong *)(param_4 + lVar6);
      uVar4 = uVar5 + uVar1;
      uVar5 = (ulong)CARRY8(uVar5,uVar1) + (ulong)CARRY8(uVar4,*(ulong *)(param_5 + lVar6));
      uVar4 = uVar4 + *(ulong *)(param_5 + lVar6) ^ uVar1;
      *(ulong *)(param_3 + lVar6) = uVar1 ^ uVar3;
      *(ulong *)(param_3 + lVar6) =
           uVar4 & (0x5555555555555555U >> bVar2 | 0x5555555555555555 << 0x40 - bVar2) ^
           uVar4 & 0x5555555555555555 ^ uVar1 ^ uVar3 ^ uVar3;
      lVar6 = lVar6 + 8;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return uVar5 & param_2;
}

