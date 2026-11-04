// rea decompile_all
// name: _UpdateBits
// address: 0x4b499
// body: available
// range: 0x4b499-0x4b51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UpdateBits(uint param_1,ulong param_2,long param_3)

{
  sbyte sVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = 0x14;
  do {
    uVar4 = (uint)param_2 & 7;
    uVar3 = 8 - (ulong)uVar4;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    sVar1 = (sbyte)uVar4;
    bVar2 = (byte)uVar3;
    uVar4 = ~(-1 << (bVar2 & 0x1f)) & param_1;
    param_1 = param_1 >> (bVar2 & 0x1f);
    *(byte *)(param_3 + (param_2 >> 3)) =
         (byte)(uVar4 << sVar1) |
         *(byte *)(param_3 + (param_2 >> 3)) &
         ((byte)(-1 << sVar1) ^ 0xff | (byte)(-1 << (sVar1 + bVar2 & 0x1f)));
    param_2 = param_2 + uVar3;
    uVar5 = uVar5 - uVar3;
  } while (uVar5 != 0);
  return;
}

