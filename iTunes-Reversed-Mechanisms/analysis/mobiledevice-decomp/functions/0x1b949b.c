// rea decompile_all
// name: PRGH_GetNextElementIndex
// address: 0x1b949b
// body: available
// range: 0x1b949b-0x1b94dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGH_GetNextElementIndex(char*, unsigned int*) */

undefined8 PRGH_GetNextElementIndex(char *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  *param_2 = 0xffffffff;
  uVar2 = *(uint *)(param_1 + (int)uVar1);
  uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (_mach_endian != 2) {
    uVar3 = uVar2;
  }
  if (uVar3 != 2) {
    uVar2 = *(uint *)(param_1 + (long)(int)uVar1 + 4);
    uVar4 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if (_mach_endian != 2) {
      uVar4 = uVar2;
    }
    *param_2 = uVar4 + uVar1;
  }
  return CONCAT71((int7)(int3)(uVar1 >> 8),uVar3 != 2);
}

