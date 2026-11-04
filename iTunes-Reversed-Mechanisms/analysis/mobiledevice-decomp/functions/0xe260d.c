// rea decompile_all
// name: _AMRestoreCopyBuildManifestInfo
// address: 0xe260d
// body: available
// range: 0xe260d-0xe275d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMRestoreCopyBuildManifestInfo
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  long local_38;
  
  local_38 = 0;
  if (param_2 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFStringCreateWithFormat(uVar8,0,&cf____cBuildManifest_plist,param_1,0x2f);
    iVar2 = __AMRestoreCreateCFPropertyListWithContentsOfFile(lVar3,&local_38);
    if (iVar2 == 0) {
      local_40 = param_4;
      lVar4 = _CFDictionaryGetValue(local_38,&cf_BuildIdentities);
      if ((lVar4 == 0) || (lVar5 = _CFArrayGetCount(lVar4), lVar5 == 0)) {
        uVar7 = 0;
      }
      else {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = param_2;
        uStack_60 = param_3;
        uVar6 = _CFArrayGetCount(lVar4);
        uVar7 = 0;
        _CFArrayApplyFunction(lVar4,0,uVar6,_AMRestoreGetBuildIdentityInfo,&local_68);
        if ((local_58 != 0) &&
           (uVar7 = _CFDictionaryCreateCopy(uVar8), puVar1 = local_40, local_40 != (undefined8 *)0x0
           )) {
          uVar8 = _CFDictionaryCreateCopy(uVar8,uStack_50);
          *puVar1 = uVar8;
        }
      }
    }
    else {
      uVar7 = 0;
      _AMRLogWithFilePath(3,lVar3,&cf_unabletoloadBuildManifest_plist__d,iVar2);
    }
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    if (local_38 != 0) {
      _CFRelease();
    }
    return uVar7;
  }
  return 0;
}

