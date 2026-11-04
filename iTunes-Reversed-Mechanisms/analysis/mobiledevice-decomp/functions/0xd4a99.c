// rea decompile_all
// name: _handleProvisioningInfoRequest
// address: 0xd4a99
// body: available
// range: 0xd4a99-0xd52e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleProvisioningInfoRequest(AMRestoreMuxedDeviceMessage*, __CFError**) */

int _handleProvisioningInfoRequest(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  __CFError *p_Var11;
  long lVar12;
  __CFError *p_Var13;
  __CFError *in_RCX;
  uchar extraout_DL;
  uchar extraout_DL_00;
  uchar uVar14;
  uchar extraout_DL_01;
  uchar extraout_DL_02;
  undefined8 *puVar15;
  cfstringStruct *pcVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long local_50;
  long local_48;
  cfstringStruct *local_40;
  ulong local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x10);
  local_50 = 0;
  _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x158));
  if (lVar2 == 0) {
    iVar7 = 1;
    pcVar16 = &cf_deviceisNULL;
    p_Var13 = (__CFError *)0x0;
    lVar9 = 0;
    lVar10 = 0;
LAB_000d4d1d:
    if ((param_2 != (__CFError **)0x0) && (iVar7 != 0)) {
      p_Var11 = (__CFError *)
                _AMRCreateErrorWithUnderlyingError
                          ((__CFString *)(long)iVar7,(long)pcVar16,(__CFString *)0x0,in_RCX);
      *param_2 = p_Var11;
    }
LAB_000d4d3a:
    if (local_50 != 0) {
      _CFRelease();
    }
    if (lVar10 == 0) goto LAB_000d4d55;
  }
  else {
    lVar9 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_BasebandEnableProvisioning);
    if (((lVar9 == 0) || (cVar5 = _CFBooleanGetValue(lVar9), cVar5 != '\x01')) &&
       ((lVar10 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_EnableApOnlyProvisioning),
        lVar10 == 0 || (cVar5 = _CFBooleanGetValue(lVar10), cVar5 != '\x01')))) {
      iVar7 = 0;
      _AMRLog(4,&
                cf_GotRESTORED_PROVISIONING_INFOrequest_butbothprovisioningandaponlyprovisioningarenotenabled
             );
      lVar10 = 0;
      lVar9 = 0;
      p_Var13 = (__CFError *)0x0;
      goto LAB_000d4d3a;
    }
    lVar10 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_ProvisioningInfo);
    if (lVar10 == 0) {
      _CFRelease(*(undefined8 *)(lVar2 + 0x150));
      pcVar16 = &cf____origProvisioningInfoDictisNULL___;
LAB_000d4c4c:
      iVar7 = -1;
      p_Var13 = (__CFError *)0x0;
      lVar9 = 0;
      lVar10 = 0;
LAB_000d4d16:
      *(undefined8 *)(lVar2 + 0x150) = 0;
      goto LAB_000d4d1d;
    }
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    in_RCX = (__CFError *)PTR__kCFAllocatorDefault_004410e8;
    lVar10 = _CFDictionaryCreateMutableCopy(uVar3,0,lVar10);
    if (lVar10 == 0) {
      _CFRelease(*(undefined8 *)(lVar2 + 0x150));
      pcVar16 = &cf____provisioningInfoDictisNULL___;
      goto LAB_000d4c4c;
    }
    if ((lVar9 == 0) || (cVar5 = _CFBooleanGetValue(lVar9), cVar5 != '\x01')) {
      iVar7 = _AMAuthInstallProvisioningAPOnlyEnable(*(undefined8 *)(lVar2 + 0x150),1);
      uVar14 = extraout_DL_00;
    }
    else {
      iVar7 = _AMAuthInstallProvisioningEnable(*(undefined8 *)(lVar2 + 0x150),1);
      uVar14 = extraout_DL;
    }
    if (iVar7 != 0) {
      iVar7 = _AMAuthInstallToRestoreError(iVar7);
      _CFRelease(*(undefined8 *)(lVar2 + 0x150));
      pcVar16 = &cf_failedtoenableprovisioning;
LAB_000d4d10:
      p_Var13 = (__CFError *)0x0;
      lVar9 = 0;
      goto LAB_000d4d16;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x150);
    uVar6 = _CFDictionaryGetBoolean
                      (*(__CFDictionary **)(lVar1 + 0x18),&cf_ProvisioningAllowMissingBMac,uVar14);
    iVar7 = _AMAuthInstallProvisioningAllowMissingBMac(uVar4,uVar6);
    puVar15 = (undefined8 *)(lVar2 + 0x150);
    if (iVar7 != 0) {
      iVar7 = _AMAuthInstallToRestoreError(iVar7);
      _CFRelease(*puVar15);
LAB_000d4d09:
      pcVar16 = &cf_failedtoenablemissingmacaddressesduringprovisioning;
      goto LAB_000d4d10;
    }
    uVar4 = *puVar15;
    uVar6 = _CFDictionaryGetBoolean
                      (*(__CFDictionary **)(lVar1 + 0x18),&cf_ProvisioningAllowMissingEMac,
                       extraout_DL_01);
    iVar7 = _AMAuthInstallProvisioningAllowMissingEMac(uVar4,uVar6);
    if (iVar7 != 0) {
      iVar7 = _AMAuthInstallToRestoreError(iVar7);
      _CFRelease(*puVar15);
      goto LAB_000d4d09;
    }
    uVar4 = *puVar15;
    uVar6 = _CFDictionaryGetBoolean
                      (*(__CFDictionary **)(lVar1 + 0x18),&cf_ProvisioningAllowMissingWMac,
                       extraout_DL_02);
    iVar7 = _AMAuthInstallProvisioningAllowMissingWMac(uVar4,uVar6);
    if (iVar7 != 0) {
      iVar7 = _AMAuthInstallToRestoreError(iVar7);
      _CFRelease(*puVar15);
      goto LAB_000d4d09;
    }
    lVar9 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_BasebandProvisioningLineType);
    if ((lVar9 != 0) && (lVar12 = _CFStringGetLength(lVar9), 0 < lVar12)) {
      _CFDictionarySetValue(lVar10,&cf_LINETYPE,lVar9);
    }
    local_38 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_FakeCCCC);
    if ((local_38 == 0) || (lVar9 = _CFStringGetLength(), 0xc < lVar9)) {
LAB_000d4e98:
      p_Var13 = (__CFError *)0x0;
      lVar9 = 0;
    }
    else {
      local_40 = (cfstringStruct *)_CFDictionaryGetValue(lVar10,&cf_SN);
      if ((local_40 == (cfstringStruct *)0x0) ||
         (lVar9 = _CFStringGetLength(local_40), lVar9 != 0xc)) {
        local_40 = &cf_A00AA00AA00A;
      }
      lVar9 = _CFStringGetLength();
      lVar12 = _CFStringGetLength(local_38);
      in_RCX = (__CFError *)(lVar9 - lVar12);
      p_Var13 = (__CFError *)_CFStringCreateWithSubstring(uVar3,local_40,0);
      if (p_Var13 == (__CFError *)0x0) {
        _AMRLog(3,&cf_failedtocreatetruncatedSerialNumber);
        goto LAB_000d4e98;
      }
      in_RCX = p_Var13;
      lVar9 = _CFStringCreateWithFormat(uVar3,0,&cf_____,p_Var13,local_38);
      if (lVar9 == 0) {
        lVar9 = 0;
        _AMRLog(3,&cf_failedtofakeserialnumber);
      }
      else {
        _CFDictionarySetValue(lVar10,&cf_SN,lVar9);
      }
    }
    lVar12 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_MarketingPartNumber);
    if (lVar12 != 0) {
      _CFDictionarySetValue(lVar10,&cf_MPN,lVar12);
    }
    lVar12 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_RegionCode);
    if (lVar12 != 0) {
      _CFDictionarySetValue(lVar10,&cf_RGN,lVar12);
    }
    lVar12 = _CFDictionaryGetValue(lVar10,&cf_WIFI_MAC);
    if (lVar12 == 0) {
      local_38 = _CFDictionaryGetValue
                           (*(undefined8 *)(lVar1 + 0x18),&cf_ProvisioningAllowMissingWMac);
      pcVar16 = (cfstringStruct *)0x0;
      if (local_38 != 0) {
        local_40 = (cfstringStruct *)_CFBooleanGetTypeID();
        pcVar16 = (cfstringStruct *)_CFGetTypeID(local_38);
        if ((local_40 == pcVar16) &&
           (pcVar16 = (cfstringStruct *)_CFBooleanGetValue(local_38), (char)pcVar16 != '\0')) {
          local_38 = local_38 & 0xffffffff00000000;
          _AMRLog(5,&cf_WIFI_MACnotfound_butforceprovisioningdisabledbyconfiguration_);
          goto LAB_000d4f7a;
        }
      }
      local_38 = CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulong)pcVar16 >> 8),1));
      _AMRLog(5,&cf_WIFI_MACnotfound_forceprovisioningenabled_);
    }
    else {
      local_38 = local_38 & 0xffffffff00000000;
    }
LAB_000d4f7a:
    lVar12 = _CFDictionaryGetValue(lVar10,&cf_BT_MAC);
    if (lVar12 == 0) {
      local_40 = (cfstringStruct *)
                 _CFDictionaryGetValue
                           (*(undefined8 *)(lVar1 + 0x18),&cf_ProvisioningAllowMissingBMac);
      lVar12 = 0;
      if (local_40 != (cfstringStruct *)0x0) {
        local_48 = _CFBooleanGetTypeID();
        lVar12 = _CFGetTypeID(local_40);
        if ((local_48 == lVar12) && (lVar12 = _CFBooleanGetValue(local_40), (char)lVar12 != '\0')) {
          _AMRLog(5,&cf_BT_MACnotfound_butforceprovisioningdisabledbyconfiguration_);
          goto LAB_000d4ffb;
        }
      }
      local_38 = CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulong)lVar12 >> 8),1));
      _AMRLog(5,&cf_BT_MACnotfound_forceprovisioningenabled_);
    }
LAB_000d4ffb:
    lVar12 = _CFDictionaryGetValue(lVar10,&cf_USB_ETHER_MAC);
    if (lVar12 == 0) {
      local_40 = (cfstringStruct *)
                 _CFDictionaryGetValue
                           (*(undefined8 *)(lVar1 + 0x18),&cf_ProvisioningAllowMissingEMac);
      lVar12 = 0;
      if (local_40 != (cfstringStruct *)0x0) {
        local_48 = _CFBooleanGetTypeID();
        lVar12 = _CFGetTypeID(local_40);
        if ((local_48 == lVar12) && (lVar12 = _CFBooleanGetValue(local_40), (char)lVar12 != '\0')) {
          _AMRLog(5,&cf_USB_ETHER_MACnotfound_butforceprovisioningdisabledbyconfiguration_);
          goto LAB_000d507c;
        }
      }
      local_38 = CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulong)lVar12 >> 8),1));
      _AMRLog(5,&cf_USB_ETHER_MACnotfound_forceprovisioningenabled_);
    }
LAB_000d507c:
    lVar12 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_ForceServerProvisioning);
    if (((char)local_38 != '\0') ||
       ((lVar12 != 0 && (cVar5 = _CFBooleanGetValue(lVar12), cVar5 == '\x01')))) {
      iVar7 = _AMAuthInstallProvisioningForceServer(*puVar15,1);
      local_38 = CONCAT44(local_38._4_4_,iVar7);
      if (iVar7 == 0) goto LAB_000d50ee;
      _AMRLog(3,&cf_failedtoforceserverprovisioning_d,iVar7);
      iVar7 = _AMAuthInstallToRestoreError(local_38 & 0xffffffff);
      _CFRelease(*puVar15);
      pcVar16 = &cf_failedtoforceserverprovisioning;
      goto LAB_000d4d16;
    }
LAB_000d50ee:
    auVar17 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_ForceProvisioning);
    local_38 = auVar17._0_8_;
    if (local_38 != 0) {
      auVar18 = _CFStringGetLength();
      auVar17._8_8_ = auVar18._8_8_;
      auVar17._0_8_ = local_38;
      if (0 < auVar18._0_8_) {
        lVar12 = _CFStringCompare(local_38,&cf_Local,0);
        if (lVar12 == 0) {
          uVar8 = _AMAuthInstallProvisioningForceLocal(*puVar15,1);
          local_40 = (cfstringStruct *)CONCAT44(local_40._4_4_,uVar8);
        }
        else {
          uVar8 = _AMAuthInstallProvisioningForceServer(*puVar15,1);
          local_40 = (cfstringStruct *)CONCAT44(local_40._4_4_,uVar8);
        }
        auVar17._8_8_ = local_38;
        auVar17._0_8_ = local_38;
        in_RCX = (__CFError *)((ulong)local_40 & 0xffffffff);
        if ((int)local_40 != 0) {
          _AMRLog(3,&cf_failedtoforce__provisioning_d);
          iVar7 = _AMAuthInstallToRestoreError((ulong)local_40 & 0xffffffff);
          _CFRelease(*puVar15);
          pcVar16 = &cf_failedtoforceprovisioning;
          goto LAB_000d4d16;
        }
      }
    }
    local_38 = auVar17._0_8_;
    lVar12 = _CFDictionaryGetValue
                       (*(undefined8 *)(lVar1 + 0x18),&cf_FDRSubmitPinecrest,auVar17._8_8_);
    if ((lVar12 != 0) && (cVar5 = _CFBooleanGetValue(lVar12), cVar5 == '\x01')) {
      _CFDictionaryRemoveValue(lVar10,&cf_PINECRESTID);
    }
    lVar12 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),&cf_FDRSubmitProvInfo);
    if ((lVar12 != 0) && (cVar5 = _CFBooleanGetValue(lVar12), cVar5 == '\x01')) {
      _CFDictionaryRemoveValue(lVar10,&cf_PINECRESTID);
    }
    iVar7 = _AMAuthInstallProvisioningSetInfo(*puVar15,lVar10);
    if (iVar7 != 0) {
      iVar7 = _AMAuthInstallToRestoreError(iVar7);
      _CFRelease(*puVar15);
      pcVar16 = &cf_failedtosetprovisioninginfo;
      goto LAB_000d4d16;
    }
    iVar7 = _AMRAuthInstallCopyProvisioningServerURL(*(undefined8 *)(lVar1 + 0x18),0,&local_50);
    if (iVar7 != 0) {
      _AMRLog(3,&cf_AMRAuthInstallCopyProvisioningServerURLfailed_d,iVar7);
      pcVar16 = &cf_FailedtoProvisioningInfomessage;
      goto LAB_000d4d1d;
    }
    if (local_50 != 0) {
      iVar7 = _AMAuthInstallProvisioningSetServerURL(*puVar15);
      if (iVar7 == 0) {
        iVar7 = 0;
        goto LAB_000d4d3a;
      }
      _AMRLog(3,&cf_AMAuthInstallProvisioningSetServerURLfailed_d,iVar7);
      iVar7 = _AMAuthInstallToRestoreError(iVar7);
      _CFRelease(*puVar15);
      pcVar16 = &cf_AMAuthInstallProvisioningSetServerURLfailed;
      goto LAB_000d4d16;
    }
    iVar7 = 0;
  }
  _CFRelease(lVar10);
LAB_000d4d55:
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (p_Var13 != (__CFError *)0x0) {
    _CFRelease(p_Var13);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x158));
  return iVar7;
}

