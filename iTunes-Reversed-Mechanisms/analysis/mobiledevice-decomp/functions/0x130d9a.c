// rea decompile_all
// name: __CopyEscrowBag
// address: 0x130d9a
// body: available
// range: 0x130d9a-0x1312c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __CopyEscrowBag(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long local_50;
  long local_40;
  long local_38;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xf8) != 0)) {
    iVar2 = _AMDeviceIsValid(param_1);
    if (iVar2 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar4 = 0;
      __os_log_internal(0,_md_log_log,0x10,
                        "Device \'%@\' is no longer valid; cannot copy escrow bag.",
                        *(undefined8 *)(param_1 + 0x20));
      iVar2 = -0x17ffff7c;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xf8);
      if (lVar5 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = 0;
        __os_log_internal(0,_md_log_log,0x10,"Invalid RemotePairing handle.");
      }
      else {
        cVar1 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"respondsToSelector:","remoteUnlockKey")
        ;
        if (cVar1 != '\0') {
          if (param_2 != (undefined8 *)0x0) {
            lVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"remoteUnlockKey");
            if (lVar3 != 0) {
              uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"remoteUnlockKey");
              _CFRetain(uVar4);
            }
            uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"remoteUnlockKey");
            *param_2 = uVar4;
          }
          iVar2 = 0;
          uVar4 = 0;
          goto LAB_00130ff3;
        }
        uVar4 = __AMDRemotePairingCopyFrameworkVersion();
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,
                          "Remote unlock key is not supported in RemotePairing version \'%@\'",uVar4
                         );
      }
      iVar2 = -0x17fffff1;
    }
LAB_00130ff3:
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    return iVar2;
  }
  cVar1 = __AMDeviceIsBackedByRSD(param_1);
  if (cVar1 != '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "Escrow bag unlocking is unsupported on RSD devices not backed by RemotePairing."
                     );
    return -0x17fffff1;
  }
  local_40 = 0;
  if (param_2 == (undefined8 *)0x0) {
    iVar2 = -0x17fffff9;
  }
  else {
    iVar2 = __CreatePairingRecordFromRecordOnDiskForIdentifier
                      (*(undefined8 *)(param_1 + 0x20),&local_40);
    if (iVar2 == 0) {
      cVar1 = _CFDictionaryContainsKey(local_40,&cf_WiFiMACAddress);
      if (cVar1 == '\0') {
        local_38 = _AMDeviceCopyValueWithError(param_1,0,&cf_WiFiAddress,0);
        if (local_38 == 0) {
          local_38 = 0;
          bVar8 = false;
        }
        else {
          lVar5 = _CFGetTypeID(local_38);
          lVar3 = _CFStringGetTypeID();
          bVar8 = lVar5 == lVar3;
          if (bVar8) {
            _CFDictionarySetValue(local_40,&cf_WiFiMACAddress,local_38);
          }
        }
      }
      else {
        bVar8 = false;
        local_38 = 0;
      }
      lVar5 = local_40;
      lVar3 = _CFDataGetTypeID();
      lVar5 = _CFDictionaryGetValue(lVar5,&cf_EscrowBag);
      if ((lVar5 == 0) || (lVar6 = _CFGetTypeID(lVar5), lVar6 != lVar3)) {
        iVar2 = 0;
        local_50 = _copy_lockdown_value(param_1,0,&cf_ProductVersion,0);
        if ((local_50 == 0) || (lVar5 = _CFStringCompare(local_50,&cf_4_0,0x40), lVar5 == -1)) {
          *param_2 = 0;
          lVar3 = 0;
          lVar5 = local_38;
        }
        else {
          lVar3 = _copy_lockdown_value(param_1,0,&cf_EscrowBag,0);
          if (lVar3 != 0) {
            lVar5 = _CFGetTypeID(lVar3);
            lVar6 = _CFDataGetTypeID();
            if (lVar5 == lVar6) {
              lVar6 = _CFGetTypeID(lVar3);
              lVar7 = _CFStringGetTypeID();
              iVar2 = -0x17ffffe6;
              lVar5 = local_38;
              if (lVar6 != lVar7) {
                _CFDictionarySetValue(local_40,&cf_EscrowBag,lVar3);
                bVar8 = true;
                lVar5 = lVar3;
                goto LAB_0013105a;
              }
              goto LAB_0013116f;
            }
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar5 = local_38;
          __os_log_internal(0,_md_log_log,0x10,"Error trying to create an escrow bag");
          iVar2 = -0x17ffff7f;
        }
      }
      else {
        lVar3 = 0;
        local_50 = 0;
LAB_0013105a:
        uVar4 = _CFRetain(lVar5);
        *param_2 = uVar4;
        iVar2 = 0;
        lVar5 = local_38;
      }
LAB_0013116f:
      if (((bool)(local_40 != 0 & bVar8)) &&
         (cVar1 = __SavePairingRecordWithDeviceID(*(undefined8 *)(param_1 + 0x20),local_40,0),
         cVar1 == '\0')) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Could not store pairing record for \'%@\'.",
                          *(undefined8 *)(param_1 + 0x20));
        iVar2 = -0x17fffff6;
      }
      goto LAB_001311cc;
    }
  }
  local_50 = 0;
  lVar3 = 0;
  lVar5 = 0;
LAB_001311cc:
  if (local_40 != 0) {
    _CFRelease(local_40);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (local_50 != 0) {
    _CFRelease(local_50);
  }
  return iVar2;
}

