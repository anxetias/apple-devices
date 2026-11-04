// rea decompile_all
// name: _AMAuthInstallBundleGetBuildIdentityVersionData
// address: 0x28d81c
// body: available
// range: 0x28d81c-0x28db9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x28db9a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMAuthInstallBundleGetBuildIdentityVersionData
                (long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long local_78;
  long local_70;
  ulong local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_70 = 0;
  local_78 = 0;
  local_48 = &cf_BuildTrain;
  local_58 = 0x484090;
  uStack_54 = 0;
  uStack_50 = 0x462050;
  uStack_4c = 0;
  lVar3 = 0;
  local_68 = 1;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
LAB_0028daf7:
    lVar3 = 0;
  }
  else {
    lVar9 = 0;
    local_60 = 0;
    if (param_4 == (long *)0x0) goto LAB_0028da30;
    lVar3 = _CFArrayCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_58,3,
                           PTR__kCFTypeArrayCallBacks_004411a8);
    local_68 = 2;
    if (lVar3 == 0) goto LAB_0028daf7;
    uVar2 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,param_2,param_3,&local_70);
    if (uVar2 == 0) {
      uVar4 = _CFGetAllocator(param_1);
      lVar9 = _CFDictionaryCreateMutable
                        (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar9 != 0) {
        local_60 = lVar9;
        lVar9 = _CFArrayGetCount(lVar3);
        if (0 < lVar9) {
          lVar8 = 0;
          do {
            lVar5 = _CFArrayGetValueAtIndex(lVar3,lVar8);
            if (lVar5 == 0) {
              pcVar7 = "failed getting the field key %d.";
              goto LAB_0028dac2;
            }
            uVar4 = _CFGetAllocator(param_1);
            lVar9 = _CFStringCreateWithFormat(uVar4,0,&cf_Info___,lVar5);
            if (lVar9 == 0) {
              pcVar7 = "failed creating the field key %@ Path.";
              lVar8 = lVar5;
              goto LAB_0028dac2;
            }
            uVar4 = _CFGetAllocator(param_1);
            lVar6 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar4,local_70,lVar9);
            if (lVar6 == 0) {
              _AMAuthInstallLog(3,"AMAuthInstallBundleGetBuildIdentityVersionData",
                                "Failed to get field key path %@ from the buildIdentity",lVar5);
              goto LAB_0028dae9;
            }
            _CFDictionaryAddValue(local_60,lVar5,lVar6);
            _CFRelease(lVar9);
            lVar8 = lVar8 + 1;
            lVar9 = _CFArrayGetCount(lVar3);
          } while (lVar8 < lVar9);
        }
        uVar4 = _CFGetAllocator(param_1);
        lVar8 = _AMAuthInstallSupportGetValueForKeyPathInDict
                          (uVar4,local_70,&cf_ProductMarketingVersion);
        lVar9 = local_60;
        if (lVar8 == 0) {
          lVar9 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallBundleGetBuildIdentityVersionData",
                            "Failed to get kAMAuthInstallBuildIdentityProductMarketingVersion path from the buildIdentity"
                           );
LAB_0028dae9:
          local_68 = 4;
        }
        else {
          _CFDictionaryAddValue(local_60,&cf_ProductVersion,lVar8);
          uVar4 = _CFGetAllocator(param_1);
          lVar9 = _CFPropertyListCreateData(uVar4,lVar9,100,0,&local_78);
          *param_4 = lVar9;
          if (lVar9 == 0) {
            local_68 = _CFErrorGetCode(local_78);
            pcVar7 = "Failed transformatting the property List to CFData obj %@";
            lVar8 = local_78;
LAB_0028dac2:
            lVar9 = 0;
            _AMAuthInstallLog(3,"AMAuthInstallBundleGetBuildIdentityVersionData",pcVar7,lVar8);
          }
          else {
            local_68 = 0;
            lVar9 = 0;
          }
        }
        goto LAB_0028da30;
      }
      _AMAuthInstallLog(3,"AMAuthInstallBundleGetBuildIdentityVersionData",
                        "Failed creating dictionary for the version data.");
      local_68 = 0;
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallBundleGetBuildIdentityVersionData",
                        "AMAuthInstallBundleCopyBuildIdentityForVariant failed.");
      local_68 = (ulong)uVar2;
    }
  }
  lVar9 = 0;
  local_60 = 0;
LAB_0028da30:
  if (local_70 != 0) {
    _CFRelease();
  }
  lVar8 = local_60;
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  uVar1 = local_68;
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1 & 0xffffffff;
}

