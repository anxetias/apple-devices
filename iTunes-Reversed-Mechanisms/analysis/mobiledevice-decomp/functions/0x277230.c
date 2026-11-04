// rea decompile_all
// name: _AMAuthInstallApImg3Finalize
// address: 0x277230
// body: available
// range: 0x277230-0x2773bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMAuthInstallApImg3Finalize(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar1 = _AMAuthInstallSupportCreateDataFromFileURL(param_1,&local_40,param_2);
  if (uVar1 == 0) {
    uVar7 = 0;
    local_50 = param_3;
    lVar3 = _CFDataCreateMutableCopy(param_1,0,local_40);
    if (lVar3 == 0) {
      uStack_60 = 2;
      lVar3 = 0;
      goto LAB_0027734a;
    }
    uVar4 = _CFDataGetBytePtr(lVar3);
    uVar5 = _CFDataGetLength(lVar3);
    iVar2 = _image3InstantiateFromBuffer(&local_38,uVar4,uVar5,1);
    if (iVar2 == 0) {
      uStack_60 = 0;
      iVar2 = _image3Finalize(local_38,&local_58,&local_48,1,0);
      if (iVar2 == 0) {
        uVar7 = _CFDataCreate(param_1,local_58,local_48);
        if (uVar7 == 0) goto LAB_002773ae;
        uVar1 = _AMAuthInstallSupportWriteDataToFileURL(param_1,uVar7,local_50,1);
        if (uVar1 == 0) goto LAB_0027734a;
        pcVar6 = "%s: failed to write finalized image3";
      }
      else {
        uVar1 = 0xe;
        pcVar6 = "%s: failed to finalize image";
        uVar7 = uStack_60;
      }
    }
    else {
      uVar1 = 9;
      pcVar6 = "%s: invalid image 3 object";
      uVar7 = 0;
    }
    _AMAuthInstallLog(3,"AMAuthInstallApImg3Finalize",pcVar6);
    uStack_60 = (ulong)uVar1;
  }
  else {
    uStack_60 = (ulong)uVar1;
    lVar3 = 0;
LAB_002773ae:
    uVar7 = 0;
  }
LAB_0027734a:
  if (local_38 != 0) {
    _image3Discard(&local_38);
  }
  if ((int)uStack_60 != 0) {
    _AMAuthInstallLog(8,"AMAuthInstallApImg3Finalize","%s: %@","AMAuthInstallApImg3Finalize",param_2
                     );
  }
  _SafeRelease(local_40);
  _SafeRelease(lVar3);
  _SafeRelease(uVar7);
  return uStack_60;
}

