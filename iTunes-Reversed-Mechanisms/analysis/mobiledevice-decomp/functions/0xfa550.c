// rea decompile_all
// name: _AMRAuthInstallSubmitProvisioningDataToFDR
// address: 0xfa550
// body: available
// range: 0xfa550-0xfa976 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMRAuthInstallSubmitProvisioningDataToFDR(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long local_58;
  long local_50;
  long local_48;
  int local_3c;
  long local_38;
  
  local_48 = 0;
  local_58 = 0;
  local_3c = 0;
  if (param_1 == 0 || param_3 == 0) {
    _AMRLog(3,&cf_badparameter);
    uVar3 = 1;
  }
  else {
    cVar1 = __AMRAuthInstallFDRSupported(param_1,param_3);
    if (cVar1 == '\0') {
      pcVar8 = &cf_FDRisnotsupportedonthisdevice_notsubmittingprovisioningdata;
LAB_000fa5fc:
      uVar3 = 0;
      _AMRLog(5,pcVar8);
    }
    else {
      lVar4 = _CFDictionaryGetValue(param_3,&cf_FDRSkipProvisioningSubmission);
      if (lVar4 != 0) {
        lVar5 = _CFGetTypeID(lVar4);
        lVar6 = _CFBooleanGetTypeID();
        if ((lVar5 == lVar6) && (cVar1 = _CFBooleanGetValue(lVar4), cVar1 != '\0')) {
          pcVar8 = &cf_Skippingprovisioningsubmission;
          goto LAB_000fa5fc;
        }
      }
      iVar2 = _AMAuthInstallProvisioningGetProvisionedInfo(param_1,&local_58);
      if (iVar2 == 0) {
        if (local_58 != 0) {
          iVar2 = _AMAuthInstallBasebandCreateUpdaterStateInfo(param_1,&local_48);
          if (iVar2 != 0) {
            pcVar8 = &cf_failedtogetbasebandpreflightdictionary_Notsubmittingprovisionedinfo_;
            goto LAB_000fa5fc;
          }
          uVar7 = _CFGetAllocator(param_1);
          lVar4 = _CFStringCreateWithCString(uVar7,&_kFDRTagStr_bbpv,0x8000100);
          if (lVar4 == 0) {
            _AMRLog(3,&cf_failedtocreatedataClassStr);
            uVar3 = 0x12;
            goto LAB_000fa642;
          }
          local_50 = lVar4;
          lVar4 = _CFDictionaryGetValue(local_48,&cf_ChipSerialNo);
          if (lVar4 == 0) {
            _AMRLog(3,&cf_bbSnumisNULL);
LAB_000fa819:
            uVar3 = 1;
LAB_000fa81e:
            lVar6 = 0;
            lVar4 = 0;
            lVar5 = local_50;
          }
          else {
            lVar5 = _CFGetTypeID(lVar4);
            lVar6 = _CFDataGetTypeID();
            if (lVar5 != lVar6) {
              _AMRLog(3,&cf_bbSnum____isnotCFData,lVar4);
              goto LAB_000fa819;
            }
            uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            lVar4 = _AMFDRCreateInstanceString(uVar7,lVar4);
            if (lVar4 == 0) {
              _AMRLog(3,&cf_bbSnumStrisNULL);
              uVar3 = 0x1f;
              goto LAB_000fa81e;
            }
            lVar5 = _CFDictionaryGetValue(local_48,&cf_ChipID);
            if (lVar5 == 0) {
              pcVar8 = &cf_bbChipIDNumisNULL;
LAB_000fa878:
              lVar6 = 0;
LAB_000fa87b:
              _AMRLog(3,pcVar8);
LAB_000fa887:
              uVar3 = 1;
              lVar5 = local_50;
            }
            else {
              local_38 = lVar5;
              lVar5 = _CFGetTypeID(lVar5);
              lVar6 = _CFNumberGetTypeID();
              if (lVar5 != lVar6) {
                lVar6 = 0;
                _AMRLog(3,&cf_bbChipIDNum____isnotCFNumber,local_38);
                goto LAB_000fa887;
              }
              cVar1 = _CFNumberGetValue(local_38,3,&local_3c);
              if (cVar1 == '\0') {
                pcVar8 = &cf_CFNumberGetValue_bbChipIDNum_returnedFALSE;
                goto LAB_000fa878;
              }
              lVar6 = _AMFDRCreateInstanceString(uVar7,local_38);
              if (lVar6 == 0) {
                lVar6 = 0;
                _AMRLog(3,&cf_bbChipIDStrisNULL);
                uVar3 = 0x1f;
                lVar5 = local_50;
              }
              else {
                if (local_3c == 0x7f50e1) {
                  local_38 = _CFRetain(lVar4);
                }
                else {
                  local_38 = _CFStringCreateWithFormat(uVar7,0,&cf______,lVar6,lVar4);
                  if (local_38 == 0) {
                    pcVar8 = &cf_CouldnotcombinebbChipIDStrandbbSnumStr;
                    goto LAB_000fa87b;
                  }
                }
                lVar5 = _CFDictionaryGetValue(local_58,&cf_MANIFESTDATA);
                if (lVar5 == 0) {
                  _AMRLog(3,&cf_valueDataisNULL);
                  uVar3 = 1;
                }
                else {
                  iVar2 = _AMRAuthInstallSubmitFDRData
                                    (local_50,local_38,lVar5,param_1,param_2,param_3);
                  if (iVar2 == 0) {
                    uVar3 = 0;
                    _AMRLog(6,&cf_SuccessfullystoredprovisioningdatainFDR);
                  }
                  else {
                    _AMRLog(3,&cf_AMRAuthInstallSubmitFDRDatafailed);
                    uVar3 = 0x3fd;
                  }
                }
                _CFRelease(local_50);
                lVar5 = local_38;
                if (local_38 == 0) goto LAB_000fa645;
              }
            }
          }
          _CFRelease(lVar5);
          goto LAB_000fa645;
        }
        _AMRLog(3,&cf_provisioningInfoisNULL);
        uVar3 = 0xbc6;
      }
      else {
        _AMRLog(3,&cf_failedtocreatefdrOptions);
        uVar3 = _AMAuthInstallToRestoreError(iVar2);
      }
    }
  }
LAB_000fa642:
  lVar6 = 0;
  lVar4 = 0;
LAB_000fa645:
  if (local_48 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar3;
}

