// rea decompile_all
// name: _uarpApplePlatformMessageCheckValidToSend
// address: 0x1860a1
// body: available
// range: 0x1860a1-0x186184 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_uarpApplePlatformMessageCheckValidToSend(long param_1,long param_2,long param_3,ushort param_4)

{
  long lVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar5 = 1;
  if (lVar1 != 0) {
    __uarpOuiAppleGenericFeatures_myOui = 0x9bc;
    DAT_004a4d52 = 99;
    if (((*(char *)(param_3 + 8) == 'c' && *(short *)(param_3 + 6) == 0x9bc) &&
        (sVar2 = _uarpNtohs(*(undefined2 *)(param_3 + 9)), 0xe < param_4)) && (sVar2 == 0x20)) {
      iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
      if ((iVar3 == 2) && ((*(ushort *)(param_2 + 0x30) < 2 || (*(int *)(param_2 + 0x18) != 0)))) {
        pcVar4 = *(code **)(lVar1 + 0x20);
      }
      else {
        iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
        if (iVar3 != 1) {
          return 1;
        }
        if ((1 < *(ushort *)(param_2 + 0x30)) && (*(int *)(param_2 + 0x18) == 0)) {
          return 1;
        }
        pcVar4 = *(code **)(lVar1 + 0x10);
      }
      if (pcVar4 == (code *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        (*pcVar4)(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_2 + 0x28),0,0);
      }
    }
  }
  return uVar5;
}

