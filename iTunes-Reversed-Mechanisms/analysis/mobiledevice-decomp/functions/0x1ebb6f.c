// rea decompile_all
// name: FUN_001ebb6f
// address: 0x1ebb6f
// body: available
// range: 0x1ebb6f-0x1ebc43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ebb6f(long param_1,byte param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                 int param_6)

{
  bool bVar1;
  byte bVar2;
  byte in_AL;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = 0xffffffff;
  uVar6 = -1 << (param_2 & 0x1f);
  uVar5 = (0x7ffffffc - param_3 >> (param_2 & 0x1f)) + 4;
  iVar3 = -5;
  uVar7 = uVar5;
  do {
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 2;
    bVar1 = 3 < uVar7;
    uVar7 = uVar7 >> 1;
  } while (bVar1);
  uVar7 = (uint)((uVar5 >> (uVar4 & 0x1f) & 1) != 0) + iVar3;
  iVar3 = param_6;
  if (uVar7 != 0xffffffff) {
    bVar2 = (byte)(uVar7 >> 1);
    iVar3 = param_3 + (uVar7 << (param_2 & 0x1f) | ~uVar6);
    param_3 = (param_3 - uVar6) +
              ((6 << (bVar2 & 0x1f)) + ((uVar7 & 1) << (bVar2 + 1 & 0x1f)) + -5 << (param_2 & 0x1f))
    ;
    iVar3 = iVar3 + 0x11;
  }
  *(int *)(param_1 + 0x48) = param_6 + (0x3e << (in_AL & 0x1f));
  *(int *)(param_1 + 0x4c) = iVar3;
  *(ulong *)(param_1 + 0x50) = (ulong)param_3;
  return;
}

