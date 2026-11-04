// rea decompile_all
// name: _AMAuthInstallRequestSendSyncWithHeader
// address: 0x29cd0a
// body: available
// range: 0x29cd0a-0x29d33e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallRequestSendSyncWithHeader
              (long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  char *pcVar11;
  int iVar12;
  long local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_68 = 0;
  local_40 = 0;
  local_60 = 0;
  local_48 = param_3;
  uVar5 = _CFGetAllocator();
  local_38 = _CFPropertyListCreateDeepCopy(uVar5,param_2,2);
  if (local_38 == 0) {
    iVar3 = 2;
    goto LAB_0029cfb8;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFDictionarySetValue(local_38,&cf__Locality);
  }
  plVar1 = (long *)(param_1 + 0x78);
  lVar6 = *(long *)(param_1 + 0x78);
  lVar8 = lVar6;
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader",
                        "SSO function returned NULL and no SSO token was provided, SSO disabled.");
      goto LAB_0029ce8c;
    }
    _AMAuthInstallLog(5,"AMAuthInstallRequestSendSyncWithHeader","using SSO.");
    lVar8 = *plVar1;
    if (lVar8 != 0) goto LAB_0029cd86;
    pcVar2 = *(code **)(param_1 + 0x68);
    uVar5 = _CFGetAllocator(param_1);
    iVar3 = (*pcVar2)(param_1,uVar5,plVar1,&local_60);
    if (iVar3 == 0) {
      lVar8 = *plVar1;
      if (lVar8 != 0) goto LAB_0029cd86;
      _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader","SSO failed to authenticate.");
      iVar3 = 0x16;
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader","failed to create sso data %@",
                        local_60);
    }
  }
  else {
LAB_0029cd86:
    _AMAuthInstallCryptoCreateDigestForData
              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar8,&local_68);
    if (local_68 != 0) {
      _AMAuthInstallLog(7,"AMAuthInstallRequestSendSyncWithHeader","AuthUserId Hash: %@");
      _CFRelease(local_68);
    }
    _CFDictionarySetValue(local_38,&cf_AuthUserId,*plVar1);
    if (lVar6 == 0) {
      _SafeRelease(*plVar1);
      *plVar1 = 0;
    }
LAB_0029ce8c:
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x90) != 0) {
        iVar3 = 0;
        local_58 = param_1;
        local_50 = _CFDictionaryCreateMutableCopy(0,0,local_38);
        if (local_50 == 0) {
          _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader",
                            "fullrequest copy allocation failure");
          goto LAB_0029cfb8;
        }
        _CFDictionaryApplyFunction(local_38,__ApplyTagPrefix,&local_58);
        _SafeRelease(local_38);
        local_38 = local_50;
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_0029cf0d;
      }
      if (*(long *)(lVar6 + 0x88) != 0) {
        _CFDictionaryApplyFunction(*(long *)(lVar6 + 0x88),__ApplyOverrideTags,local_38);
      }
    }
LAB_0029cf0d:
    lVar6 = local_38;
    uVar5 = _AMAuthInstallPlatformGetSimplePlatformInfoString();
    _CFDictionarySetValue(lVar6,&cf__HostPlatformInfo,uVar5);
    lVar6 = local_38;
    uVar5 = _AMAuthInstallSupportGetLibraryVersionString();
    _CFDictionarySetValue(lVar6,&cf__VersionInfo,uVar5);
    if ((*(long *)(param_1 + 0x10) == 0) || (*(char *)(*(long *)(param_1 + 0x10) + 0x74) == '\0')) {
      _CFDictionarySetValue(local_38,&cf__BBTicket,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      _CFDictionarySetValue(local_38,&cf__UUID);
    }
    iVar3 = _AMAuthInstallVinylRemoveFirmwareLoaderVersionTag(param_1,&local_38);
    if (iVar3 == 0) {
      iVar3 = 2;
      _AMAuthInstallDebugWriteObject(param_1,local_38,&cf_tss_request,2);
      lVar6 = _tss_create_session(&cf___,*(undefined8 *)(param_1 + 0x48));
      iVar12 = 0;
      if (lVar6 != 0) {
        _CFRelease(*(undefined8 *)(lVar6 + 0x18));
        uVar5 = _CFRetain(local_38);
        *(undefined8 *)(lVar6 + 0x18) = uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(param_1 + 0x50);
        *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(param_1 + 0x1e8);
        *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_1 + 0x200);
        *(long *)(lVar6 + 0x20) = local_48;
        uVar4 = _tss_submit(lVar6);
        if (uVar4 != 0) {
          lVar8 = *(long *)(lVar6 + 0x48);
          if (lVar8 == 0 || 10000 < uVar4) {
LAB_0029d0dc:
            _SafeRelease(0);
            if ((int)uVar4 < 10000) {
              iVar12 = uVar4 + 0xc1c;
            }
            else if (uVar4 - 10000 < 0xd) {
              iVar12 = *(int *)(&DAT_0033b904 + (ulong)(uVar4 - 10000) * 4);
            }
            else {
              iVar12 = 0xe;
            }
          }
          else {
            iVar12 = uVar4 + 0xc1c;
            local_58 = CONCAT44(local_58._4_4_,iVar12);
            if (899 < uVar4) {
              _AMAuthInstallLog(3,"kAMAuthInstallRequestCacheLocalizedTssError",
                                "tss error code out of bounds (%d)",iVar12);
              goto LAB_0029d0dc;
            }
            uVar5 = _CFGetAllocator(param_1);
            lVar7 = _CFNumberCreate(uVar5,9,&local_58);
            if (lVar7 == 0) {
              pcVar11 = "failed to cache server error text: (%d) %@";
              uVar5 = 3;
            }
            else {
              local_48 = lVar7;
              _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x160),lVar7,lVar8);
              pcVar11 = "cached server error text: (%d) %@";
              uVar5 = 7;
              lVar7 = local_48;
            }
            _AMAuthInstallLog(uVar5,"kAMAuthInstallRequestCacheLocalizedTssError",pcVar11,
                              (undefined4)local_58,lVar8);
            _SafeRelease(lVar7);
          }
          uVar5 = _AMAuthInstallGetLocalizedStatusString(param_1,iVar12);
          _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader","failed tss submission: %@",
                            uVar5);
        }
        uVar5 = _CFGetAllocator(param_1);
        lVar8 = _CFPropertyListCreateData(uVar5,local_38,100,0,0);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          uVar5 = _CFGetAllocator(param_1);
          iVar3 = _AMAuthInstallSupportBase64Encode(uVar5,lVar8,&local_40);
          if (uVar4 == 0) {
            if (iVar3 == 0) {
              _AMAuthInstallLog(8,"AMAuthInstallRequestSendSyncWithHeader",
                                "successful tss request:<<<<<<<<<<\n%@",local_40);
              _AMAuthInstallLog(8,"AMAuthInstallRequestSendSyncWithHeader",
                                "successful tss request:>>>>>>>>>>");
            }
            pcVar9 = (cfstringStruct *)
                     _CFDictionaryGetValue(*(undefined8 *)(lVar6 + 0x28),&cf__ServerVersion);
            pcVar10 = &cf_unavailable;
            if (pcVar9 != (cfstringStruct *)0x0) {
              pcVar10 = pcVar9;
            }
            iVar12 = 0;
            _AMAuthInstallLog(5,"AMAuthInstallRequestSendSyncWithHeader",
                              "received tss response (server version: %@)",pcVar10);
            _AMAuthInstallDebugWriteObject(param_1,*(undefined8 *)(lVar6 + 0x28),&cf_tss_response,2)
            ;
            if (param_4 != (undefined8 *)0x0) {
              uVar5 = _CFRetain(*(undefined8 *)(lVar6 + 0x28));
              *param_4 = uVar5;
            }
          }
          else if (iVar3 == 0) {
            _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader",
                              "failed tss request:<<<<<<<<<<\n%@",local_40);
            _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader",
                              "failed tss request:>>>>>>>>>>");
          }
        }
        goto LAB_0029cfbb;
      }
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallRequestSendSyncWithHeader",
                        "AMAuthInstallVinylRemoveFirmwareLoaderVersionTag %d",iVar3);
    }
  }
LAB_0029cfb8:
  lVar8 = 0;
  lVar6 = 0;
  iVar12 = iVar3;
LAB_0029cfbb:
  _SafeRelease(0);
  _SafeRelease(0);
  _SafeRelease(local_38);
  _SafeRelease(0);
  _SafeRelease(lVar8);
  _SafeRelease(local_40);
  _SafeRelease(0);
  if (lVar6 != 0) {
    _tss_close_session(lVar6);
  }
  return iVar12;
}

