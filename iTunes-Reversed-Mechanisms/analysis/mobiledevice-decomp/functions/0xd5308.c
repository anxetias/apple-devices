// rea decompile_all
// name: _handleProvisioningStatus
// address: 0xd5308
// body: available
// range: 0xd5308-0xd57b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000d53ab) */
/* _handleProvisioningStatus(AMRestoreMuxedDeviceMessage*) */

int _handleProvisioningStatus(AMRestoreMuxedDeviceMessage *param_1)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  pthread_mutex_t *ppVar15;
  ulong uVar16;
  long local_40;
  int local_34;
  
  lVar13 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar13 + 0x10);
  ppVar1 = (pthread_mutex_t *)(lVar2 + 0x158);
  uVar16 = 0;
  ppVar15 = ppVar1;
  _pthread_mutex_lock(ppVar1);
  if (*(long *)(lVar2 + 0x150) == 0) {
    local_40 = 0;
    _AMRLog(6,&cf_device_>amaiisNULL);
    iVar5 = 1;
  }
  else {
    lVar7 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Status);
    if (lVar7 == 0) {
      iVar6 = 0x69;
      _AMRLog(3,&cf_devicedidnotreturnprovisioningstatus_treatingasfailure_);
    }
    else {
      _CFNumberGetValue(lVar7,9);
      _AMRLog(6,&cf_devicereturnedprovisioningstatus_d,0);
      iVar6 = 0;
    }
    lVar7 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_UDID);
    if (lVar7 == 0) {
      local_34 = 99;
    }
    else {
      iVar5 = _AMAuthInstallProvisioningSetItem(*(undefined8 *)(lVar2 + 0x150),&cf_UDID,lVar7);
      local_34 = 0;
      if (iVar5 != 0) {
        iVar5 = _AMAuthInstallToRestoreError(iVar5);
        bVar3 = true;
        local_40 = 0;
        goto LAB_000d5729;
      }
    }
    _AMFDRLogSetHandler(__AMAuthInstallLogHandler);
    uVar14 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_40 = _AMFDRCreatePermissionsString(uVar14,1,&cf_bbpv,&cf__);
    if (local_40 == 0) {
      local_40 = 0;
      _AMRLog(3,&cf_AMFDRCreatePermissionsStringfailed);
LAB_000d558d:
      iVar5 = 0x3fd;
    }
    else {
      lVar8 = _CFDictionaryGetValue(*(undefined8 *)(lVar13 + 0x18),&cf_FDRSubmitProvDataFromDevice);
      lVar9 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_PINECRESTID);
      if (lVar9 == 0) {
LAB_000d5610:
        if (lVar8 == 0) {
LAB_000d5638:
          iVar5 = _AMRAuthInstallSubmitProvisioningDataToFDR
                            (*(undefined8 *)(lVar2 + 0x150),local_40,*(undefined8 *)(lVar13 + 0x18))
          ;
          if (iVar5 != 0) {
            bVar3 = true;
            _AMRLog(7,&cf_AMRAuthInstallSubmitProvisioningDataToFDRfailed_d,iVar5);
            goto LAB_000d5729;
          }
        }
        else {
          lVar7 = _CFGetTypeID();
          lVar9 = _CFBooleanGetTypeID();
          if ((lVar7 != lVar9) || (cVar4 = _CFBooleanGetValue(lVar8), cVar4 == '\0'))
          goto LAB_000d5638;
        }
        local_34 = _AMAuthInstallProvisioningSendAck(*(undefined8 *)(lVar2 + 0x150),iVar6);
        if (local_34 == 0) {
          _pthread_mutex_unlock(ppVar1);
          iVar5 = 0;
          if (iVar6 != 0xbca) {
            if (iVar6 == 0) {
              lVar13 = _CFDictionaryCreate(uVar14,&_RESTORED_MSG_TYPE,
                                           &_RESTORED_MSG_TYPE_PROVISIONING_ACK,1,
                                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                           PTR__kCFTypeDictionaryValueCallBacks_004411b8,uVar14,
                                           ppVar15,uVar16 & 0xffffffffffffff00);
              if (lVar13 == 0) {
                _AMRLog(3,&cf_Failedtoallocateprovisioningackmessage);
              }
              else {
                _AMRLog(7,&cf_Sendingacknowledgementthatprovisioningackhasbeencompleted);
                iVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar13);
                if (iVar6 != 0) {
                  _AMRLog(3,&cf_Failedtosendfinalstatusacknowledgement_error__d,iVar6);
                }
                _CFRelease(lVar13);
              }
            }
            else {
              iVar5 = 0xbc9;
            }
          }
          bVar3 = false;
          goto LAB_000d5729;
        }
      }
      else {
        lVar10 = _CFDictionaryGetValue(*(undefined8 *)(lVar13 + 0x18),&cf_FDRSubmitPinecrest);
        if (lVar10 == 0) {
LAB_000d559a:
          lVar7 = _CFDictionaryGetValue(*(undefined8 *)(lVar13 + 0x18),&cf_FDRSubmitProvInfo);
          if (lVar7 != 0) {
            lVar10 = _CFGetTypeID(lVar7);
            lVar11 = _CFBooleanGetTypeID();
            if ((lVar10 == lVar11) && (cVar4 = _CFBooleanGetValue(lVar7), cVar4 != '\0')) {
              _AMRLog(6,&cf_NotreturningProvInfotoTreeckoifwe_resubmittingitlater_);
              goto LAB_000d5606;
            }
          }
          local_34 = _AMAuthInstallProvisioningSetItem
                               (*(undefined8 *)(lVar2 + 0x150),&cf_PINECRESTID,lVar9);
        }
        else {
          lVar11 = _CFGetTypeID(lVar10);
          lVar12 = _CFBooleanGetTypeID();
          if ((lVar11 != lVar12) || (cVar4 = _CFBooleanGetValue(lVar10), cVar4 == '\0'))
          goto LAB_000d559a;
          if (lVar8 == 0) {
LAB_000d5520:
            cVar4 = _AMFDRAppendPermissionsString(1,&cf_pcrt,&cf__,local_40);
            if (cVar4 == '\0') {
              _AMRLog(3,&cf_AMFDRAppendPermissionsStringfailed);
              goto LAB_000d558d;
            }
            local_34 = _AMRAuthInstallSubmitFDRData
                                 (&cf_pcrt,lVar7,lVar9,*(undefined8 *)(lVar2 + 0x150),local_40,
                                  *(undefined8 *)(lVar13 + 0x18));
          }
          else {
            lVar10 = _CFGetTypeID(lVar8);
            lVar11 = _CFBooleanGetTypeID();
            if ((lVar10 != lVar11) || (cVar4 = _CFBooleanGetValue(lVar8), cVar4 == '\0'))
            goto LAB_000d5520;
          }
        }
LAB_000d5606:
        if (local_34 == 0) goto LAB_000d5610;
      }
      iVar5 = _AMAuthInstallToRestoreError(local_34);
    }
  }
  bVar3 = true;
LAB_000d5729:
  _AMSupportSafeRelease(local_40);
  if (bVar3) {
    _pthread_mutex_unlock(ppVar1);
  }
  return iVar5;
}

