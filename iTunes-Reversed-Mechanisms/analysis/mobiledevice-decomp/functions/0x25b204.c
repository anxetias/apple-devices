// rea decompile_all
// name: _GetYonkersFabRevisionTags
// address: 0x25b204
// body: available
// range: 0x25b204-0x25b2b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GetYonkersFabRevisionTags(int param_1,char param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = &DAT_003b4a40;
  uVar1 = 0;
  lVar2 = 0;
  do {
    if (*piVar3 == param_1) {
      uVar4 = 0;
      uVar1 = _CFStringCreateWithFormat
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         &cf_Yonkers_SysTopPatch_X);
      goto LAB_0025b264;
    }
    lVar2 = lVar2 + -2;
    piVar3 = piVar3 + 1;
  } while (lVar2 != -0xc);
  uVar4 = 2;
LAB_0025b264:
  piVar3 = &DAT_003b4a60;
  lVar2 = 0;
  do {
    if (*piVar3 == param_1) {
      uVar4 = 0;
      uVar1 = _CFStringCreateWithFormat
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         &cf_Yonkers_SysTopPatch_X,-((int)lVar2 + -1 + (uint)(param_2 == '\0')));
      break;
    }
    lVar2 = lVar2 + -2;
    piVar3 = piVar3 + 1;
  } while (lVar2 != -0x10);
  *param_3 = uVar1;
  return uVar4;
}

