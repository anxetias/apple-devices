// rea decompile_all
// name: _AMDeviceProxyCreatePreManifest
// address: 0x10a89d
// body: available
// range: 0x10a89d-0x10aca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyCreatePreManifest(AMDeviceProxy*, __CFDictionary const*) */

long _AMDeviceProxyCreatePreManifest(AMDeviceProxy *param_1,__CFDictionary *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  __CFDictionary *p_Var6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *local_38;
  
  if (param_1 == (AMDeviceProxy *)0x0) {
    local_38 = &cf_NULLproxy_can_tcreatepre_manifest;
  }
  else if (param_2 == (__CFDictionary *)0x0) {
    local_38 = &cf_NULLrestoreoptions_can_tcreatepre_manifest;
  }
  else {
    lVar5 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
    if (lVar5 == 0) {
      local_38 = &cf_Can_tcreatepre_manifestwithoutrestorebundlepath;
    }
    else {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar5 = _AMAuthInstallSupportCreateURLFromString(uVar1,lVar5);
      if (lVar5 == 0) {
        local_38 = &cf_Can_tcreatepre_manifest_failedtocreateCFURLReffromrestorebundlepath;
      }
      else {
        p_Var6 = (__CFDictionary *)
                 _CFDictionaryCreateMutable
                           (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (p_Var6 == (__CFDictionary *)0x0) {
          local_38 = &cf_FailedtoallocateCFMutableDictionaryRefforapParameters;
          lVar8 = lVar5;
        }
        else {
          cVar3 = _AMDeviceProxySetApParameters(param_1,p_Var6);
          if (cVar3 == '\0') {
            local_38 = &cf__AMDeviceProxySetApParametersFailed;
LAB_0010ac0e:
            lVar8 = 0;
          }
          else {
            _CFDictionarySetValue
                      (p_Var6,&cf_ApSupportsImg4,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
            lVar7 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
            local_38 = &cf_FailedtosetapparameterswithImage4CryptoHashMethod;
            if (lVar7 == 0) goto LAB_0010ac0e;
            lVar8 = _AMDeviceCreateCopy(lVar7);
            if (lVar8 == 0) {
              lVar8 = 0;
              _AMRLog(3,&cf_Couldnotcreatecopyofdevice_p,lVar7);
              goto LAB_0010ac11;
            }
            iVar4 = _AMDeviceConnect(lVar8);
            if (iVar4 == 0) {
              lVar10 = _AMDeviceCopyValueWithError(lVar8,0,&cf_Image4CryptoHashMethod,0);
              lVar7 = 0;
              if (lVar10 != 0) {
                lVar9 = _CFGetTypeID(lVar10);
                lVar11 = _CFStringGetTypeID();
                lVar7 = lVar10;
                if (lVar9 == lVar11) {
                  _CFDictionarySetValue(p_Var6,&cf_ApImg4DigestType,lVar10);
                }
              }
            }
            else {
              _AMRLog(3,&cf_can_tconnecttothedevice);
              lVar7 = 0;
            }
            _AMDeviceDisconnect(lVar8);
            _CFRelease(lVar8);
            if (lVar7 != 0) {
              _CFRelease(lVar7);
            }
            if (iVar4 != 0) goto LAB_0010ac0e;
            lVar8 = _AMAuthInstallCreate(uVar1);
            if (lVar8 == 0) {
              local_38 = &cf_Couldn_tinstantiatedAMAuthInstall;
              goto LAB_0010ac0e;
            }
            iVar4 = _AMAuthInstallApSetParameters(lVar8,p_Var6);
            if (iVar4 == 0) {
              _AMAuthInstallBundleRequestTicketWithoutNonce(lVar8,1);
              lVar7 = _AMRAuthInstallCopyVariant(lVar8,param_2);
              if (lVar7 != 0) {
                lVar10 = 0;
                lVar9 = _CFDictionaryCreateMutableCopy(uVar1,0,param_2);
                if (lVar9 == 0) {
                  local_38 = &cf_Can_tcreateamutablecopyofrestoreOptions;
                  bVar2 = false;
                  lVar11 = 0;
                }
                else {
                  iVar4 = _AMRAuthInstallSetBundleOverridesFromOptions(lVar8,lVar9);
                  if (iVar4 == 0) {
                    lVar10 = _CFDictionaryGetValue(param_2,&cf_PersonalizedRestoreBundlePath);
                    if (lVar10 == 0) {
                      lVar11 = 0;
                      AMDeviceProxy::Log((int)param_1,(__CFString *)((long)&MACH_HEADER.cputype + 1)
                                         ,&
                                          cf_FailedtogetpersonalizedRestoreBundlePath_willnotapplyoverrides
                                        );
                    }
                    else {
                      lVar11 = _AMAuthInstallSupportCreateURLFromString(uVar1,lVar10);
                      if (lVar11 == 0) {
                        local_38 = &
                                   cf_Can_tcreatepre_manifest_failedtocreateCFURLReffromdstbundlepath
                        ;
                        goto LAB_0010ac93;
                      }
                    }
                    local_38 = (cfstringStruct *)0x0;
                    lVar10 = _AMAuthInstallBundleCreatePreManifest(lVar8,lVar5,lVar11,lVar7,0);
                    bVar2 = true;
                    if (lVar10 == 0) {
                      local_38 = (cfstringStruct *)0x0;
                      AMDeviceProxy::Log((int)param_1,(__CFString *)((long)&MACH_HEADER.magic + 3),
                                         &cf_Failedtocreatepre_manifest);
                      lVar10 = 0;
                    }
                  }
                  else {
                    local_38 = &cf_Failedtosetbundleoverrides;
LAB_0010ac93:
                    bVar2 = false;
                    lVar10 = 0;
                    lVar11 = 0;
                  }
                  _CFRelease(lVar9);
                }
                _CFRelease(lVar7);
                _CFRelease(lVar5);
                if (lVar11 != 0) {
                  _CFRelease(lVar11);
                }
                _CFRelease(p_Var6);
                _CFRelease(lVar8);
                if (bVar2) {
                  return lVar10;
                }
                goto LAB_0010ac3d;
              }
              local_38 = &cf_Can_tcreatepre_manifestwithoutvariant;
            }
            else {
              local_38 = &cf_Failedtosetapparameters;
            }
          }
LAB_0010ac11:
          _CFRelease(lVar5);
          _CFRelease(p_Var6);
          if (lVar8 == 0) {
            lVar10 = 0;
            goto LAB_0010ac3d;
          }
        }
        _CFRelease(lVar8);
      }
    }
  }
  lVar10 = 0;
LAB_0010ac3d:
  AMDeviceProxy::LogAndRelease(param_1,3,(__CFString *)local_38);
  return lVar10;
}

