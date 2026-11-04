// rea decompile_all
// name: _AMRestoreUpdaterPersonalize
// address: 0xf511b
// body: available
// range: 0xf511b-0xf5580 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRestoreUpdaterPersonalize
              (long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 *param_6,
              undefined8 param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  long local_58;
  long local_50;
  int local_44;
  long local_40;
  long local_38;
  
  local_44 = -1;
  local_38 = 0;
  local_58 = 0;
  local_50 = 0;
  if (param_1 == 0) {
    _AMRestoreUpdaterPersonalize_cold_5(param_7);
  }
  else if (param_2 == 0) {
    _AMRestoreUpdaterPersonalize_cold_4();
  }
  else if (param_3 == 0) {
    _AMRestoreUpdaterPersonalize_cold_3();
  }
  else if (param_4 == 0) {
    _AMRestoreUpdaterPersonalize_cold_2();
  }
  else if (param_6 == (undefined8 *)0x0) {
    _AMRestoreUpdaterPersonalize_cold_1();
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_4,&cf_RestoreBundlePath);
    if (lVar3 == 0) {
      pcVar8 = &cf__s_failedtofindrestorebundlepathinrestoreoptionsfor__;
      uVar6 = 1;
    }
    else {
      local_40 = _AMSupportCreateURLFromString(0,lVar3);
      if (local_40 != 0) {
        iVar2 = __AMRestoreUpdaterSetInfoWithOverride
                          (param_1,param_2,param_3,param_4,0,&local_50,&local_38);
        if (iVar2 == 0) {
          if (param_5 == 0) {
LAB_000f538a:
            lVar3 = 0;
LAB_000f538d:
            iVar2 = _AMRAuthInstallCopyPersonalizedBundleURL(param_4,&local_58);
            if (iVar2 == 0) {
              lVar3 = _AMAuthInstallUpdaterPersonalize(param_1,param_2,local_58,&local_38);
              goto LAB_000f53b7;
            }
            lVar5 = 0;
            _AMSupportCreateErrorInternal
                      (param_7,&cf_AMRestoreErrorDomain,(long)iVar2,0,&cf__s_failedtocopybundlepath,
                       "AMRestoreUpdaterPersonalize");
            iVar2 = 1;
            lVar4 = local_40;
            if (lVar3 == 0) goto LAB_000f5286;
          }
          else {
            lVar3 = *(long *)PTR__kCFBooleanFalse_00441108;
            lVar4 = _CFDictionaryGetValue(param_5,&cf_LoopCount);
            if (lVar4 != 0) {
              _CFNumberGetValue(lVar4,9,&local_44);
            }
            lVar4 = _CFDictionaryGetValue(param_5,&cf_MessageForceRepersonalization);
            if (lVar4 != 0) {
              lVar3 = lVar4;
            }
            cVar1 = _CFBooleanGetValue(lVar3);
            pcVar7 = "ON";
            if (cVar1 == '\0') {
              pcVar7 = "OFF";
            }
            _AMRLog(6,&cf_repersonalizationis_sfor__updater,pcVar7,param_2);
            if ((local_44 != 0) || (cVar1 = _CFBooleanGetValue(lVar3), cVar1 != '\0'))
            goto LAB_000f538a;
            lVar3 = _AMAuthInstallUpdaterCopyResponse(param_1,param_2,local_40,&local_38);
            if (local_38 != 0) {
              _CFRelease();
              local_38 = 0;
              goto LAB_000f538d;
            }
            _AMRLog(6,&cf_foundpersonalizedresponseinthebundlefor___skippingpersonalization,param_2)
            ;
LAB_000f53b7:
            if (lVar3 == 0) {
              _AMRLog(3,&cf_failedtopersonalize__updaterfirmware___,param_2,local_38);
              _AMSupportCreateErrorInternal
                        (param_7,&cf_AMRestoreErrorDomain,6,local_38,
                         &cf__s_failedtopersonalizefirmware,"AMRestoreUpdaterPersonalize");
              iVar2 = 1;
              goto LAB_000f5228;
            }
            uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            lVar4 = _CFDictionaryGetCount(lVar3);
            lVar5 = _CFDictionaryCreateMutableCopy(uVar6,lVar4 + 1,lVar3);
            lVar4 = local_40;
            if (lVar5 == 0) {
              lVar5 = 0;
              _AMSupportCreateErrorInternal
                        (param_7,&cf_AMRestoreErrorDomain,0x12,0,&cf__s_failedtoallocateresultDict,
                         "AMRestoreUpdaterPersonalize");
              iVar2 = 1;
              lVar4 = local_40;
            }
            else {
              if (local_50 != 0) {
                _CFDictionarySetValue(lVar5,&cf_FirmwareData);
              }
              uVar6 = _CFGetAllocator(param_1);
              uVar6 = _CFDictionaryCreateCopy(uVar6,lVar5);
              *param_6 = uVar6;
              iVar2 = 0;
            }
          }
          _CFRelease(lVar3);
        }
        else {
          _AMRLog(3,&cf_failedtoset__info____result__d,param_2,local_38,iVar2);
          _AMSupportCreateErrorInternal
                    (param_7,&cf_AMRestoreErrorDomain,6,local_38,&cf__s_failedtosetupdaterinfo,
                     "AMRestoreUpdaterPersonalize");
LAB_000f5228:
          lVar5 = 0;
          lVar4 = local_40;
        }
        goto LAB_000f5286;
      }
      pcVar8 = &cf__s_failedtoconvertbundleURLtoURLfor__;
      uVar6 = 0x1f;
    }
    _AMSupportCreateErrorInternal
              (param_7,&cf_AMRestoreErrorDomain,uVar6,0,pcVar8,"AMRestoreUpdaterPersonalize",param_2
              );
  }
  iVar2 = 1;
  lVar5 = 0;
  lVar4 = 0;
LAB_000f5286:
  if (local_38 != 0) {
    _CFRelease();
    local_38 = 0;
  }
  if (local_58 != 0) {
    _CFRelease();
    local_58 = 0;
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_50 != 0) {
    _CFRelease();
    local_50 = 0;
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return iVar2;
}

