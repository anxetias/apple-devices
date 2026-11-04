// rea decompile_all
// name: PRGH_FileCheck
// address: 0x1b9303
// body: available
// range: 0x1b9303-0x1b93b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGH_FileCheck(char*) */

uint PRGH_FileCheck(char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)param_1;
  _mach_endian = 1;
  if (iVar1 != 1000) {
    _mach_endian = (uint)(iVar1 == -0x17fd0000) * 2;
  }
  uVar2 = *(uint *)param_1;
  uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (iVar1 != -0x17fd0000) {
    uVar3 = uVar2;
  }
  uVar2 = 0xffffffff;
  if (uVar3 == 1000) {
    uVar3 = *(uint *)(param_1 + 4);
    uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (iVar1 != -0x17fd0000) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0x28) {
      uVar3 = *(uint *)(param_1 + 8);
      uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if (iVar1 != -0x17fd0000) {
        uVar4 = uVar3;
      }
      if (uVar4 == 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
        uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        if (iVar1 != -0x17fd0000) {
          uVar4 = uVar3;
        }
        if ((uVar4 & 0xfe) < 6 && (char)uVar4 != '\0') {
          uVar2 = *(uint *)(param_1 + 0x10);
          uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          if (iVar1 != -0x17fd0000) {
            uVar3 = uVar2;
          }
          uVar2 = 0xffffffff;
          if (uVar3 == 0x693729f1) {
            uVar2 = uVar4;
          }
        }
      }
    }
  }
  return uVar2;
}

