// rea decompile_all
// name: AMDeviceProxy::ResolveRecoveryOSVariant
// address: 0x1044ea
// body: available
// range: 0x1044ea-0x104875 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMDeviceProxy::ResolveRecoveryOSVariant(__CFDictionary*) */

ulong __thiscall
AMDeviceProxy::ResolveRecoveryOSVariant(AMDeviceProxy *this,__CFDictionary *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  __CFDictionary *p_Var5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined7 uVar9;
  ulong uVar8;
  cfstringStruct *pcVar10;
  long local_48;
  long local_40;
  long local_38;
  
  local_48 = 0;
  if (this == (AMDeviceProxy *)0x0) {
    pcVar10 = &cf_CantresolvesystemimagewithNULLproxy;
  }
  else {
    if (param_1 != (__CFDictionary *)0x0) {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar4 = _AMAuthInstallCreate(uVar1);
      uVar9 = (undefined7)((ulong)uVar1 >> 8);
      if (lVar4 == 0) {
        pcVar10 = &cf_Couldn_tinstantiateAMAuthInstall;
      }
      else {
        p_Var5 = (__CFDictionary *)
                 _CFDictionaryCreateMutable
                           (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (p_Var5 != (__CFDictionary *)0x0) {
          cVar2 = _AMDeviceProxySetApParameters(this,p_Var5);
          if (cVar2 == '\0') {
            pcVar10 = &cf_FailedtosetapParametersdict;
            uVar8 = 0;
            lVar6 = 0;
            local_38 = 0;
            local_40 = 0;
          }
          else {
            iVar3 = _AMAuthInstallApSetParameters(lVar4,p_Var5);
            if (iVar3 == 0) {
              lVar6 = _AMRAuthInstallCopyRecoveryOSVariant(lVar4,param_1);
              if (lVar6 != 0) {
                local_38 = 0;
                local_40 = 0;
LAB_001045aa:
                cVar2 = _AMAuthInstallGetMacOSVariantIsPresent(lVar4);
                if (cVar2 != '\0') {
                  _CFDictionarySetValue
                            (param_1,&cf_MacOSVariantPresent,
                             *(undefined8 *)PTR__kCFBooleanTrue_00441110);
                }
                _CFDictionarySetValue(param_1,&cf_AuthInstallRecoveryOSVariant,lVar6);
                uVar8 = 0;
                pcVar10 = (cfstringStruct *)0x0;
                goto LAB_00104630;
              }
              local_38 = _CFDictionaryGetValue(param_1,&cf_AuthInstallVariant);
              if (local_38 != 0) {
                _CFRetain(local_38);
                pcVar10 = (cfstringStruct *)0x0;
                _AMRLog(3,&cf_Couldn_tfindrecoveryOSvariantintherestorevariant_);
                goto LAB_00104625;
              }
              lVar6 = _CFDictionaryGetValue(param_1,&cf_RestoreBundlePath);
              if (lVar6 == 0) {
                pcVar7 = &cf_failedtogetrestorebundlepath_couldn_tsetrecoveryOSvariant;
LAB_00104809:
                pcVar10 = (cfstringStruct *)0x0;
                _AMRLog(3,pcVar7);
                goto LAB_00104818;
              }
              local_40 = _CFURLCreateWithFileSystemPath(uVar1,lVar6,0,1);
              if (local_40 == 0) {
                pcVar7 = &cf_failedtotranslaterestorebundlepathtoURL_couldn_tsetrecoveryOSvariant;
                local_40 = 0;
                goto LAB_00104809;
              }
              local_38 = _AMRAuthInstallCopyVariant(lVar4,param_1);
              if (local_38 == 0) {
                uVar8 = 0;
                _AMRLog(3,&cf_failedtofindvarinatinAMRAuthInstallCopyVariant);
                pcVar10 = (cfstringStruct *)0x0;
                lVar6 = 0;
                local_38 = 0;
                goto LAB_00104630;
              }
              lVar6 = 0;
              iVar3 = _AMAuthInstallBundleCopyBuildIdentityForVariant(lVar4,local_40,0,&local_48);
              if (iVar3 == 0) {
                lVar6 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                  (uVar1,local_48,&cf_Info_RecoveryVariant);
                if (lVar6 == 0) {
                  lVar6 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                    (uVar1,local_48,&cf_Info_MacOSVariant);
                  if (lVar6 == 0) {
                    pcVar10 = (cfstringStruct *)0x0;
                    _AMRLog(3,&
                              cf_Couldn_tfindrecoveryOSvariantintherestorevariantbasedonthebehaviorbasedvariant_
                           );
                    lVar6 = 0;
                    goto LAB_0010462d;
                  }
                  iVar3 = _AMAuthInstallSetMacOSVariantIsPresent(lVar4,1);
                  if (iVar3 == 0) goto LAB_00104753;
                  pcVar7 = &
                           cf_AMAuthInstallSetMacOSVariantIsPresentfailedtosetMacOSvaraintpresentstatus_
                  ;
                }
                else {
LAB_00104753:
                  _CFRetain(lVar6);
                  iVar3 = _AMAuthInstallSetRecoveryOSVariant(lVar4,lVar6);
                  if (iVar3 == 0) goto LAB_001045aa;
                  pcVar7 = &
                           cf_AMAuthInstallSetRecoveryOSVariantfailedtosetrecoveryOSvariantforrestore
                  ;
                }
                pcVar10 = (cfstringStruct *)0x0;
                _AMRLog(3,pcVar7);
              }
              else {
                pcVar10 = &
                          cf_FailedtofindbuildIdentityforundefinedmainosvariantthereforcouldn_tsetrecoveryOSvariant
                ;
              }
            }
            else {
              pcVar10 = &cf_Failedtosetapparameters;
LAB_00104818:
              local_38 = 0;
LAB_00104625:
              lVar6 = 0;
              local_40 = 0;
            }
LAB_0010462d:
            uVar8 = CONCAT71(uVar9,1);
          }
LAB_00104630:
          _CFRelease(lVar4);
          _CFRelease(p_Var5);
          if (local_48 != 0) {
            _CFRelease();
          }
          if (local_40 != 0) {
            _CFRelease();
          }
          if (lVar6 != 0) {
            _CFRelease(lVar6);
          }
          if (local_38 != 0) {
            _CFRelease();
          }
          goto LAB_0010467b;
        }
        _CFRelease(lVar4);
        pcVar10 = &cf_FailedtocreateapParametersdict;
      }
      uVar8 = CONCAT71(uVar9,1);
      goto LAB_0010467b;
    }
    pcVar10 = &cf_CantresolvesystemimagewithNULLrestoreoptions;
  }
  uVar8 = 0;
LAB_0010467b:
  LogAndRelease(this,3,(__CFString *)pcVar10);
  return uVar8 & 0xffffffff;
}

