// rea decompile_all
// name: _AMAuthInstallMonetMeasureBootSbl
// address: 0x2927ff
// body: available
// range: 0x2927ff-0x292996 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetMeasureBootSbl
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  
  lVar2 = _CFDataGetBytePtr(param_2);
  lVar3 = _CFDataGetBytePtr(param_2);
  uVar1 = _CFDataGetLength(param_2);
  if (uVar1 < 4) {
    _AMAuthInstallLog(7,"_FindSbl1HeaderInFileData","foundMagic=%d",0);
  }
  else {
    uVar1 = uVar1 >> 2;
    lVar3 = lVar3 + -4;
    iVar9 = 0;
    lVar8 = 0;
    do {
      if ((*(int *)(lVar3 + 4) == 0x73d71034) &&
         (iVar9 = iVar9 + 1, lVar8 = lVar3, *(int *)(lVar3 + 8) != 0x7d0b435a)) {
        _AMAuthInstallLog(7,"_FindSbl1HeaderInFileData","found SBL header");
        _AMAuthInstallLog(7,"_FindSbl1HeaderInFileData","foundMagic=%d",iVar9);
        goto LAB_00292915;
      }
      lVar3 = lVar3 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    _AMAuthInstallLog(7,"_FindSbl1HeaderInFileData","foundMagic=%d",iVar9);
    lVar3 = lVar8;
    if (lVar8 != 0) {
LAB_00292915:
      uVar4 = _CFDataGetLength(param_2);
      if (uVar4 < 0x50) {
        return 10;
      }
      uVar1 = _CFDataGetLength(param_2);
      if (uVar1 < *(uint *)(lVar3 + 0x1c)) {
        return 10;
      }
      if (lVar3 + 0x50 == lVar2 + (ulong)*(uint *)(lVar3 + 0x14)) {
        uVar5 = _AMAuthInstallMonetSetVersionAndPartialDigestForSBL
                          (param_1,param_3,lVar2,param_2,lVar3,(ulong)*(uint *)(lVar3 + 0x14),
                           *(undefined4 *)(lVar3 + 0x20),param_4,param_5);
        return uVar5;
      }
      pcVar7 = "AMAuthInstallMonetMeasureBootSbl";
      pcVar6 = "junk following sbl1 header";
      goto LAB_0029286c;
    }
  }
  pcVar7 = "_FindSbl1HeaderInFileData";
  pcVar6 = "this file lacks sufficient magic";
LAB_0029286c:
  _AMAuthInstallLog(3,pcVar7,pcVar6);
  return 10;
}

