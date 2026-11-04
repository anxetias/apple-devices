// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo
// address: 0x1b2ff6
// body: available
// range: 0x1b2ff6-0x1b33a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b33a0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMAuthInstallUpdaterCryptex1MobileAssetSetInfo
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6,long param_7,long param_8,long param_9,undefined1 param_10,long *param_11)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  char *pcVar7;
  size_t local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  uchar local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_80 = 0;
  if (param_1 == 0) {
    _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo_cold_6(param_11);
LAB_001b335f:
    lVar4 = 0;
  }
  else {
    local_98 = param_4;
    local_90 = param_3;
    local_88 = param_2;
    uVar3 = _CFGetAllocator();
    lVar4 = _CFDictionaryCreateMutable(uVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
    if (lVar4 == 0) {
      _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo_cold_5(param_11);
      goto LAB_001b335f;
    }
    _AMAuthInstallApCopyParameters(param_1,&local_80);
    if (local_80 == 0) {
      _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo_cold_4(param_11);
    }
    else {
      lVar5 = _CFDictionaryGetValue(local_80,&cf_ApChipID);
      if (lVar5 == 0) {
        _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo_cold_3(param_11);
      }
      else {
        _CFDictionarySetValue(lVar4,&cf_ApChipId,lVar5);
        lVar5 = _CFDictionaryGetValue(local_80,&cf_ECID);
        if (lVar5 == 0) {
          _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo_cold_2(param_11);
        }
        else {
          _CFDictionarySetValue(lVar4,&cf_ApECID,lVar5);
          lVar5 = _CFDictionaryGetValue(local_80,&cf_ApProductionMode);
          if (lVar5 != 0) {
            _CFDictionarySetValue(lVar4,&cf_ApProductionMode,lVar5);
            lVar5 = _CFDictionaryGetValue(local_80,&cf_ApX86);
            if (lVar5 != 0) {
              _CFDictionarySetValue(lVar4,&cf_IsX86,lVar5);
            }
            if (param_6 != 0) {
              _CFDictionarySetValue(lVar4,&cf_Nonce,param_6);
            }
            if (param_7 != 0) {
              _CFDictionarySetValue(lVar4,&cf_LiveNonce,param_7);
            }
            if (param_8 != 0) {
              _CFDictionarySetValue(lVar4,&cf_ExclaveNonce,param_8);
            }
            if (param_9 != 0) {
              _CFDictionarySetValue(lVar4,&cf_ExclaveLiveNonce,param_9);
            }
            _AMSupportCFDictionarySetBoolean(lVar4,&cf_UseGlobalSigning,param_10);
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            uStack_4b = 0;
            uStack_48 = 0;
            local_a0 = 0x25;
            iVar1 = _sysctlbyname("kern.bootsessionuuid",&local_68,&local_a0,(void *)0x0,0);
            if (iVar1 == 0) {
              local_78[0] = '\0';
              local_78[1] = '\0';
              local_78[2] = '\0';
              local_78[3] = '\0';
              local_78[4] = '\0';
              local_78[5] = '\0';
              local_78[6] = '\0';
              local_78[7] = '\0';
              local_78[8] = '\0';
              local_78[9] = '\0';
              local_78[10] = '\0';
              local_78[0xb] = '\0';
              local_78[0xc] = '\0';
              local_78[0xd] = '\0';
              local_78[0xe] = '\0';
              local_78[0xf] = '\0';
              iVar1 = _uuid_parse((char *)&local_68,local_78);
              if (iVar1 != 0) {
                _AMAuthInstallLog(4,"_AMAuthInstallCryptex1CopyBootSessionUUID",
                                  "failed to parse kern.bootsessionuuid");
                goto LAB_001b3266;
              }
              lVar5 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_78,0x10);
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                _CFDictionarySetValue(lVar4,&cf_BootUUID,lVar5);
              }
            }
            else {
              piVar6 = ___error();
              iVar1 = *piVar6;
              pcVar7 = _strerror(iVar1);
              _AMAuthInstallLog(4,"_AMAuthInstallCryptex1CopyBootSessionUUID",
                                "failed to obtain kern.bootsessionuuid: %d (%s)",iVar1,pcVar7);
LAB_001b3266:
              lVar5 = 0;
            }
            uVar2 = _AMAuthInstallUpdaterSetInfo
                              (param_1,&cf_Cryptex1,lVar4,local_88,local_90,local_98,param_5,0,0,
                               param_11);
            goto LAB_001b32a1;
          }
          _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo_cold_1(param_11);
        }
      }
    }
  }
  uVar2 = 99;
  lVar5 = 0;
LAB_001b32a1:
  _AMSupportSafeRelease(lVar4);
  _AMSupportSafeRelease(local_80);
  _AMSupportSafeRelease(lVar5);
  if ((param_11 != (long *)0x0) && (*param_11 != 0)) {
    _AMAuthInstallLog(3,"AMAuthInstallUpdaterCryptex1MobileAssetSetInfo","failed: %@");
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

