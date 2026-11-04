// rea decompile_all
// name: __AMRAuthInstallSetAndCopyFDRTrustObjectHash
// address: 0xf69e6
// body: available
// range: 0xf69e6-0xf6da0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRAuthInstallSetAndCopyFDRTrustObjectHash(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CC_LONG len;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *data;
  uchar *md;
  bool bVar8;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  char local_31;
  
  local_31 = '\0';
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    __AMRAuthInstallSetAndCopyFDRTrustObjectHash_cold_6();
    iVar2 = 1;
LAB_000f6a78:
    lVar6 = 0;
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = _CFDictionaryGetValue(param_2,&cf_CertifySEP);
    iVar2 = 0;
    if (lVar4 == 0) {
LAB_000f6a63:
      bVar8 = false;
    }
    else {
      lVar5 = _CFBooleanGetTypeID();
      lVar6 = _CFGetTypeID(lVar4);
      if (lVar5 != lVar6) goto LAB_000f6a63;
      cVar1 = _CFBooleanGetValue(lVar4);
      bVar8 = cVar1 == '\x01';
    }
    cVar1 = __AMRAuthInstallFDRSupported(param_1,param_2);
    if ((cVar1 == '\0') && (!bVar8)) goto LAB_000f6a78;
    iVar2 = __AMRAuthInstallCopyTrustObjectOverride
                      (param_2,&cf_FDRTrustObjectFile,&cf_FDRTrustObject,&local_48);
    if (iVar2 != 0) {
      __AMRAuthInstallSetAndCopyFDRTrustObjectHash_cold_1();
      goto LAB_000f6a78;
    }
    if (local_48 != 0) {
      iVar2 = __AMRAuthInstallCopyTrustObjectOverride
                        (param_2,&cf_FDRBootedOSTrustObjectFile,&cf_BootedOSFDRTrustObject,&local_40
                        );
      if (iVar2 == 0) {
        if (local_40 == 0) {
          local_40 = _CFRetain(local_48);
        }
        iVar2 = _AMAuthInstallBundleOverrideEntry(param_1,&cf_ftap,local_40);
        if ((((iVar2 == 0) &&
             (iVar2 = _AMAuthInstallBundleOverrideEntry(param_1,&cf_rfta,local_48), iVar2 == 0)) &&
            (iVar2 = _AMAuthInstallBundleOverrideEntry(param_1,&cf_ftsp,local_40), iVar2 == 0)) &&
           (iVar2 = _AMAuthInstallBundleOverrideEntry(param_1,&cf_rfts,local_48), iVar2 == 0)) {
          uVar7 = _CFGetAllocator(param_1);
          iVar2 = _AMSupportCreateDataFromFileURL(uVar7,&local_58,local_40);
          if (iVar2 == 0) goto LAB_000f6b81;
        }
        iVar2 = _AMAuthInstallToRestoreError(iVar2);
      }
      else {
        __AMRAuthInstallSetAndCopyFDRTrustObjectHash_cold_2();
      }
      goto LAB_000f6a78;
    }
LAB_000f6b81:
    lVar4 = _AMRAuthInstallCopyVariant(param_1,param_2);
    if (lVar4 == 0) {
      __AMRAuthInstallSetAndCopyFDRTrustObjectHash_cold_5();
      lVar6 = 0;
      iVar2 = 0;
      lVar4 = 0;
      lVar5 = 0;
    }
    else {
      local_50 = lVar4;
      lVar4 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
      if (lVar4 == 0) {
        __AMRAuthInstallSetAndCopyFDRTrustObjectHash_cold_4();
        lVar5 = 0;
        lVar6 = 0;
        iVar2 = 0;
        lVar4 = local_50;
      }
      else {
        uVar7 = _CFGetAllocator(param_1);
        iVar2 = 0;
        lVar6 = _CFURLCreateWithFileSystemPath(uVar7,lVar4,0,1);
        lVar4 = local_50;
        iVar3 = _AMAuthInstallBundleFDRBasebandSupported(param_1,lVar6,local_50,&local_31);
        if (iVar3 == 0) {
          if (local_58 == 0) {
            iVar2 = 0;
            goto LAB_000f6cd0;
          }
          lVar5 = _CFDataCreateMutable(0,0);
          if (lVar5 == 0) {
            iVar2 = 0x12;
            lVar4 = local_50;
            lVar5 = 0;
          }
          else {
            _CFDataSetLength(lVar5,0x20);
            data = (void *)_CFDataGetBytePtr(local_58);
            len = _CFDataGetLength(local_58);
            md = (uchar *)_CFDataGetMutableBytePtr(lVar5);
            _CC_SHA256(data,len,md);
            if ((local_31 == '\0') ||
               (iVar2 = _AMAuthInstallBasebandSetKeyHash(param_1,&cf_BbFDRSecurityKeyHash,lVar5),
               iVar2 == 0)) {
              iVar2 = 0;
              lVar4 = local_50;
              if (param_3 != (undefined8 *)0x0) {
                uVar7 = _CFRetain(lVar5);
                *param_3 = uVar7;
                lVar4 = local_50;
              }
            }
            else {
              _AMRLog(3,&cf_failedtosetbasebandkeyhashforkAMAuthInstallBasebandFDRSecurityKeyHash);
              iVar2 = 0xbc6;
              lVar4 = local_50;
            }
          }
        }
        else {
          __AMRAuthInstallSetAndCopyFDRTrustObjectHash_cold_3();
          lVar5 = 0;
        }
      }
    }
  }
  if (local_58 != 0) {
    _CFRelease();
    local_58 = 0;
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
LAB_000f6cd0:
  if (local_48 != 0) {
    _CFRelease();
    local_48 = 0;
  }
  if (local_40 != 0) {
    _CFRelease();
    local_40 = 0;
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return iVar2;
}

