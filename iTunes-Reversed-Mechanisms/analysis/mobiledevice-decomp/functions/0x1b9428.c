// rea decompile_all
// name: PRGH_GetElementIndex
// address: 0x1b9428
// body: available
// range: 0x1b9428-0x1b949a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGH_GetElementIndex(char*, unsigned int, unsigned int, unsigned int*) */

undefined8 PRGH_GetElementIndex(char *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  
  *param_4 = 0xffffffff;
  uVar3 = 0;
  puVar5 = (uint *)param_1;
  do {
    uVar1 = *puVar5;
    uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (_mach_endian != 2) {
      uVar4 = uVar1;
    }
    if (uVar4 == param_2) {
      uVar1 = puVar5[2];
      uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      if (_mach_endian != 2) {
        uVar2 = uVar1;
      }
      if (uVar2 == param_3) {
        *param_4 = (uint)uVar3;
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
    uVar1 = puVar5[1];
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (_mach_endian != 2) {
      uVar2 = uVar1;
    }
    uVar2 = (uint)uVar3 + uVar2;
    uVar3 = (ulong)uVar2;
    puVar5 = (uint *)(param_1 + (int)uVar2);
  } while (uVar4 != 2);
  return 0;
}

