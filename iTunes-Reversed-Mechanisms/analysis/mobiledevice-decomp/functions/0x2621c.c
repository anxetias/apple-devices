// rea decompile_all
// name: _ccn_cond_rsub
// address: 0x2621c
// body: available
// range: 0x2621c-0x262cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _ccn_cond_rsub(long param_1,uint param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = _ccn_mux_next_mask();
  bVar2 = ((char)uVar3 * '\x02' | (byte)param_2) & 0x3f | 0x20;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar1 = *(ulong *)(param_4 + lVar6);
      uVar8 = uVar7 - uVar1;
      lVar5 = (uVar7 - (uVar7 < uVar1)) + (ulong)CARRY8(uVar8,*(ulong *)(param_5 + lVar6));
      uVar7 = lVar5 >> 0x3f;
      uVar8 = uVar8 + *(ulong *)(param_5 + lVar6) ^ uVar1;
      *(ulong *)(param_3 + lVar6) = uVar1 ^ uVar3;
      *(ulong *)(param_3 + lVar6) =
           uVar8 & (0x5555555555555555U >> bVar2 | 0x5555555555555555 << 0x40 - bVar2) ^
           uVar8 & 0x5555555555555555 ^ uVar1 ^ uVar3 ^ uVar3;
      lVar6 = lVar6 + 8;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    uVar4 = (uint)((ulong)lVar5 >> 0x3f);
  }
  return uVar4 & param_2;
}

