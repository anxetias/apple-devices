// rea decompile_all
// name: PRGH_VersionCheck
// address: 0x1b93b9
// body: available
// range: 0x1b93b9-0x1b9427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGH_VersionCheck(char*, unsigned int, unsigned int) */

uint PRGH_VersionCheck(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_1c;
  
  cVar1 = PRGH_GetElementIndex(param_1,param_2,0,&local_1c);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar3 = *(uint *)(param_1 + (ulong)local_1c + 4);
    uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (_mach_endian != 2) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0x14) {
      uVar2 = *(uint *)(param_1 + (ulong)local_1c + 0xc);
      uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      if (_mach_endian != 2) {
        uVar3 = uVar2;
      }
      if ((param_3 < uVar3) || (uVar2 = 0, uVar3 >> 0x10 < param_3 >> 0x10)) {
        uVar2 = uVar3;
      }
    }
  }
  return uVar2;
}

