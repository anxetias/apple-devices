// rea decompile_all
// name: _handleBootabilityBundleDataRequest
// address: 0xdbf93
// body: available
// range: 0xdbf93-0xdc968 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdc964 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*, __CFError**) */

int _handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  __AMRestoreModeDevice *p_Var1;
  char cVar2;
  int iVar3;
  long *plVar4;
  __CFError *p_Var5;
  __CFError *p_Var6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined4 extraout_var;
  int *piVar13;
  __CFDictionary *extraout_RDX;
  __CFError **local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  long *local_ca0;
  undefined8 local_c98;
  char *local_c90;
  char *local_c88;
  __CFError *local_c80;
  __CFDictionary *local_c78;
  int local_c6c;
  char local_c68 [1024];
  ushort local_868 [512];
  char local_468 [1056];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c6c = 0;
  local_ca0 = *(long **)(param_1 + 0x10);
  p_Var1 = (__AMRestoreModeDevice *)local_ca0[2];
  local_cb0 = 0;
  local_ca8 = 0;
  local_c90 = (char *)0x0;
  local_c80 = (__CFError *)0x0;
  local_c88 = (char *)0x0;
  local_c78 = (__CFDictionary *)0x0;
  p_Var5 = (__CFError *)0x0;
  local_cb8 = param_2;
  _AMRestoreModeDeviceProgressAsync(p_Var1,0x4e,-1,(__CFString *)0x0);
  plVar4 = operator_new(0x30);
  *plVar4 = (long)&PTR____func_00446240;
  plVar4[1] = (long)&local_c6c;
  plVar4[2] = (long)&local_ca0;
  plVar4[3] = (long)&local_cb0;
  plVar4[4] = (long)&local_ca8;
  plVar4[5] = (long)&local_cb8;
  local_48 = plVar4;
  __AMRestoreModeDevice::with_amai_locked(p_Var1);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (local_c6c == 0) {
    p_Var6 = (__CFError *)_CFURLCopyPath(local_cb0);
    if (p_Var6 != (__CFError *)0x0) {
      ___bzero(local_468,0x400);
      sVar7 = _confstr(0x10001,local_468,0x400);
      if (sVar7 == 0) {
        builtin_strncpy(local_468,"/tmp/",6);
      }
      _asprintf((char **)&local_c78,"%sbootability-bundle-XXXXXX",local_468);
      local_c78 = (__CFDictionary *)_mkdtemp((char *)local_c78);
      if (local_c78 == (__CFDictionary *)0x0) {
        local_c6c = 0xb;
        _AMRLog(3,&cf_failedtocreatetemporarystagingdirectory);
      }
      else {
        uVar8 = _CFStringGetCStringPtr(p_Var6,0x8000100);
        _asprintf(&local_c90,"%s/BootabilityBundle",uVar8);
        if (local_c90 == (char *)0x0) {
          local_c6c = -1;
          _AMRLog(3,&cf_failedtocreateunpackedbundlepath);
        }
        else {
          uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
          p_Var5 = p_Var6;
          lVar9 = _CFStringCreateWithFormat(uVar8,0,&cf____BootabilityBundle_dmg);
          if (lVar9 != 0) {
            iVar3 = _access(local_c90,4);
            if (iVar3 == 0) {
              _AMRLog(6,&cf_Usingunpackedbundle__s,local_c90);
              ___bzero(local_868,0x400);
              ___bzero(local_c68,0x400);
              _snprintf((char *)local_868,0x400,"%s/Restore/Bootability/",local_c90);
              _snprintf(local_c68,0x400,"%s/",local_c78);
              _AMRLog(6,&cf_copying_s_>_s,local_868,local_c68);
              p_Var5 = (__CFError *)0xc800f;
              iVar3 = _copyfile((char *)local_868,local_c68,(copyfile_state_t)0x0,0xc800f);
              if (iVar3 == 0) {
                _snprintf((char *)local_868,0x400,"%s/Restore/Firmware/Bootability.dmg.trustcache",
                          local_c90);
                _snprintf(local_c68,0x400,"%s/Bootability.trustcache",local_c78);
                _AMRLog(6,&cf_copying_s_>_s,local_868,local_c68);
                p_Var5 = (__CFError *)((long)&MACH_HEADER.filetype + 3);
                iVar3 = _copyfile((char *)local_868,local_c68,(copyfile_state_t)0x0,0xf);
                if (iVar3 == 0) goto LAB_000dc295;
              }
              local_c6c = 0xb;
              piVar13 = ___error();
              _AMRLog(3,&cf_copyfile__failed__d,*piVar13);
            }
            else {
              pcVar10 = (char *)_CFStringGetCStringPtr(lVar9,0x8000100);
              iVar3 = _access(pcVar10,4);
              if (iVar3 == 0) {
                _AMRLog(6,&cf_Usingdmg___,lVar9);
                _asprintf((char **)&local_c80,"%sbootability-outer-XXXXXX",local_468);
                _asprintf(&local_c88,"%sbootability-inner-XXXXXX",local_468);
                local_c80 = (__CFError *)_mkdtemp((char *)local_c80);
                local_c88 = _mkdtemp(local_c88);
                p_Var5 = (__CFError *)
                         CONCAT71((int7)((ulong)p_Var5 >> 8),local_c80 == (__CFError *)0x0);
                if (local_c88 == (char *)0x0 || local_c80 == (__CFError *)0x0) {
                  local_c6c = 0xb;
                  _AMRLog(3,&cf_failedtocreatetemporarymountpointdirectories);
                }
                else {
                  local_c6c = _AMRestoreAttachDiskImage(lVar9);
                  if (local_c6c == 0) {
                    _AMRLog(6,&cf_mounted__on_s,lVar9,local_c80);
                    p_Var5 = local_c80;
                    lVar12 = _CFStringCreateWithFormat(uVar8,0,&cf__s_Restore_Bootability_dmg);
                    if (lVar12 == 0) {
                      local_c6c = -1;
                      _AMRLog(3,&cf_failedtocopyinnerdmgpath);
                      lVar12 = 0;
                    }
                    else {
                      local_c6c = _AMRestoreAttachDiskImage(lVar12,local_c88);
                      if (local_c6c == 0) {
                        _AMRLog(6,&cf_mounted__on_s,lVar12,local_c88);
                        ___bzero(local_868,0x400);
                        ___bzero(local_c68,0x400);
                        _snprintf((char *)local_868,0x400,"%s/",local_c88);
                        _snprintf(local_c68,0x400,"%s/",local_c78);
                        _AMRLog(6,&cf_copying_s_>_s,local_868,local_c68);
                        p_Var5 = (__CFError *)0xc800f;
                        iVar3 = _copyfile((char *)local_868,local_c68,(copyfile_state_t)0x0,0xc800f)
                        ;
                        if (iVar3 == 0) {
                          _snprintf((char *)local_868,0x400,
                                    "%s/Restore/Firmware/Bootability.dmg.trustcache",local_c80);
                          _snprintf(local_c68,0x400,"%s/Bootability.trustcache",local_c78);
                          _AMRLog(6,&cf_copying_s_>_s,local_868,local_c68);
                          p_Var5 = (__CFError *)((long)&MACH_HEADER.filetype + 3);
                          iVar3 = _copyfile((char *)local_868,local_c68,(copyfile_state_t)0x0,0xf);
                          if (iVar3 == 0) {
                            local_c98 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),1);
                            goto LAB_000dc2a3;
                          }
                        }
                        local_c6c = 0xb;
                        piVar13 = ___error();
                        uVar8 = _AMRLog(3,&cf_copyfile__failed__d,*piVar13);
                        local_c98 = CONCAT71((int7)((ulong)uVar8 >> 8),1);
                        goto LAB_000dc751;
                      }
                      _AMRLog(3,&cf_failedtomount__,lVar9);
                    }
                    goto LAB_000dc7af;
                  }
                  _AMRLog(3,&cf_failedtomount__,lVar9);
                }
              }
              else {
                cVar2 = _restored_is_factory_variant(local_ca8);
                if (cVar2 != '\0') {
                  _AMRLog(4,&cf_bootabilitybundleanddmgaremissing_skippingforfactoryvariant);
LAB_000dc295:
                  lVar12 = 0;
                  local_c98 = 0;
LAB_000dc2a3:
                  lVar11 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataPort);
                  if (lVar11 == 0) {
                    local_c6c = 10;
                    _AMRLog(3,&cf_noportprovidedinbootabilitybundlerequest);
                  }
                  else {
                    local_868[0] = 0;
                    local_868[1] = 0;
                    _CFNumberGetValue(lVar11,9);
                    iVar3 = _AMRestoreModeDeviceConnectToPortInternal(p_Var1,local_868[0],0.0,1);
                    if (iVar3 < 0) {
                      local_c6c = 2;
                      _AMRLog(3,&cf_failedtoconnecttoportondevicetosendbootabilitybundle);
                    }
                    else {
                      (**(code **)(*local_ca0 + 0x10))();
                      local_c6c = _sendDirectoryRoot(iVar3,local_c78,extraout_RDX,(char *)p_Var5);
                      _AMRestoreCloseTransferSocket(iVar3,local_c6c);
                      (**(code **)(*local_ca0 + 0x18))();
                      if (local_c6c == 0) {
                        _AMRLog(6,&cf_successfullysentbootabilitybundlefrom__s,local_c78);
                      }
                      else {
                        _AMRLog(3,&cf_failedtosendbootabilitybundletodevice);
                      }
                    }
                  }
                  if ((char)local_c98 == '\0') goto LAB_000dc0ac;
LAB_000dc751:
                  iVar3 = _AMRestoreDetachDiskImage(local_c88);
                  if (iVar3 != 0) {
                    _AMRLog(3,&cf_failedtounmount_s,local_c88);
                    goto LAB_000dc0ac;
                  }
                  if ((char)local_c98 == '\0') goto LAB_000dc0ac;
LAB_000dc7af:
                  iVar3 = _AMRestoreDetachDiskImage(local_c80);
                  if (iVar3 != 0) {
                    _AMRLog(3,&cf_failedtounmount_s,local_c80);
                  }
                  goto LAB_000dc0ac;
                }
                local_c6c = 0xb;
                _AMRLog(3,&cf_bootabilitybundlenotfound);
              }
            }
            lVar12 = 0;
            goto LAB_000dc0ac;
          }
          local_c6c = -1;
          _AMRLog(3,&cf_failedtocreateouterdmgpath);
        }
      }
      lVar12 = 0;
      lVar9 = 0;
      goto LAB_000dc0ac;
    }
    local_c6c = -1;
    _AMRLog(3,&cf_couldn_tcopypathtosourcebundle);
  }
  else {
    _AMRLog(3,&cf_couldn_tfindsourcebundlepath);
  }
  lVar12 = 0;
  lVar9 = 0;
  p_Var6 = (__CFError *)0x0;
LAB_000dc0ac:
  _AMSupportSafeFree(local_c78);
  _AMSupportSafeFree(local_c88);
  _AMSupportSafeFree(local_c80);
  _AMSupportSafeFree(local_c90);
  _AMSupportSafeRelease(lVar12);
  _AMSupportSafeRelease(lVar9);
  _AMSupportSafeRelease(local_ca8);
  _AMSupportSafeRelease(p_Var6);
  _AMSupportSafeRelease(local_cb0);
  if ((__CFString *)(long)local_c6c == (__CFString *)0x0) {
    iVar3 = 0;
  }
  else {
    p_Var5 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)local_c6c,0x460510,(__CFString *)0x0,p_Var5);
    *local_cb8 = p_Var5;
    iVar3 = local_c6c;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

