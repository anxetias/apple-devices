// rea decompile_all
// name: _xz_read_multi_byte
// address: 0x20b998
// body: available
// range: 0x20b998-0x20ba03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _xz_read_multi_byte(long param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *param_3;
  uVar3 = 0xffffffff;
  if (uVar2 < param_2) {
    if (uVar2 + 9 < param_2) {
      param_2 = uVar2 + 9;
    }
    uVar6 = (ulong)(*(byte *)(param_1 + uVar2) & 0x7f);
    uVar5 = uVar2 + 1;
    if ((char)*(byte *)(param_1 + uVar2) < '\0') {
      bVar4 = 7;
      do {
        if (param_2 == uVar5) {
          return 0xffffffff;
        }
        bVar1 = *(byte *)(param_1 + uVar5);
        if (bVar1 == 0) {
          return 0xffffffff;
        }
        uVar6 = uVar6 | (ulong)(bVar1 & 0x7f) << (bVar4 & 0x3f);
        bVar4 = bVar4 + 7;
        uVar5 = uVar5 + 1;
      } while ((char)bVar1 < '\0');
    }
    *param_3 = uVar5;
    *param_4 = uVar6;
    uVar3 = 0;
  }
  return uVar3;
}

