// rea decompile_all
// name: _AMAuthInstallApFtabStitchTicketData
// address: 0x27674f
// body: available
// range: 0x27674f-0x2768e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApFtabStitchTicketData(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_40;
  long local_38;
  
  uVar4 = _CFGetAllocator();
  lVar7 = 0;
  iVar2 = 1;
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) goto LAB_00276844;
  local_38 = param_3;
  lVar5 = _CFDictionaryGetValue(param_4,*(undefined8 *)(param_1 + 0x58));
  if (lVar5 == 0) {
    _AMAuthInstallLog(3,"AMAuthInstallApFtabStitchTicketData",
                      "%s: responseDict doesn\'t contain a %@ ticket.",
                      "AMAuthInstallApFtabStitchTicketData",*(undefined8 *)(param_1 + 0x58));
LAB_0027689f:
    iVar2 = 0x11;
  }
  else {
    lVar6 = _CFDataGetLength(lVar5);
    if (lVar6 < 1) {
      _AMAuthInstallLog(3,"AMAuthInstallApFtabStitchTicketData",
                        "%s: responseDict has an empty ticket.");
      goto LAB_0027689f;
    }
    lVar7 = __AMAuthInstallApFtabCopyFtabFromFile(uVar4,param_2,&local_40);
    if (lVar7 != 0) {
      uVar1 = _CFDataGetLength(lVar7);
      uVar8 = _CFDataGetBytePtr(lVar5);
      _CFDataAppendBytes(lVar7,uVar8,lVar6);
      *(int *)(local_40 + 0x14) = (int)lVar6;
      *(undefined4 *)(local_40 + 0x10) = uVar1;
      iVar2 = _CFDataGetLength(lVar7);
      _CFDataIncreaseLength(lVar7,-iVar2 & 0xfff);
      iVar3 = _AMAuthInstallSupportWriteDataToFileURL(uVar4,lVar7,local_38,1);
      iVar2 = 0;
      if (iVar3 != 0) {
        _AMAuthInstallLog(3,"AMAuthInstallApFtabStitchTicketData",
                          "%s: Failed to copy FTAB file to personalized bundle.");
        iVar2 = iVar3;
      }
      goto LAB_00276844;
    }
    _AMAuthInstallLog(3,"AMAuthInstallApFtabStitchTicketData","ftabData is NULL");
    iVar2 = 99;
  }
  lVar7 = 0;
LAB_00276844:
  _AMSupportSafeRelease(lVar7);
  return iVar2;
}

