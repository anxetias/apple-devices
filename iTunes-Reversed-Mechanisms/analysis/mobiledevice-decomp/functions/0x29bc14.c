// rea decompile_all
// name: _AMAuthInstallRembrandtLocalCreateSigningResponse
// address: 0x29bc14
// body: available
// range: 0x29bc14-0x29c3fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallRembrandtLocalCreateSigningResponse
              (long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  CC_LONG CVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  void *pvVar19;
  uchar *puVar20;
  cfstringStruct *pcVar21;
  char *pcVar22;
  CC_SHA512_CTX local_170;
  undefined1 local_9c [4];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_60 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar8 = _CFGetAllocator();
  lVar9 = _CFDictionaryCreateMutable
                    (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  iVar5 = 2;
  if (lVar9 == 0) {
    _AMAuthInstallLog(3,"AMAuthInstallRembrandtLocalCreateSigningResponse",
                      "Failed to allocate responseDict");
    lVar10 = 0;
    lVar11 = 0;
    uVar8 = 0;
    goto LAB_0029c264;
  }
  iVar4 = _AMAuthInstallRembrandtLocalRegisterKeys(param_1);
  if (iVar4 != 0) {
    lVar10 = 0;
    lVar11 = 0;
    uVar8 = 0;
    iVar5 = iVar4;
    goto LAB_0029c264;
  }
  local_98 = param_3;
  local_58 = param_1;
  lVar10 = _CFDictionaryGetValue(param_2,&cf_BbSNUM);
  if (lVar10 == 0) {
LAB_0029c2fe:
    pcVar22 = "bad or missing SNUM";
LAB_0029c095:
    _AMAuthInstallLog(3,"AMAuthInstallRembrandtLocalCreateSigningResponse",pcVar22);
    lVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar11 = _CFDataGetTypeID();
    lVar10 = _CFGetTypeID(lVar10);
    if (lVar11 != lVar10) goto LAB_0029c2fe;
    lVar10 = _CFDictionaryGetValue(param_2,&cf_BbChipID);
    if (lVar10 == 0) {
LAB_0029c311:
      pcVar22 = "bad or missing chipid";
      goto LAB_0029c095;
    }
    lVar11 = _CFNumberGetTypeID();
    lVar12 = _CFGetTypeID(lVar10);
    if (lVar11 != lVar12) goto LAB_0029c311;
    cVar3 = _CFNumberGetValue(lVar10,3,local_9c);
    if (cVar3 == '\0') {
      pcVar22 = "failed to read chipid";
      goto LAB_0029c095;
    }
    lVar10 = _CFDictionaryGetValue(param_2,&cf_BbGoldCertId);
    if (lVar10 == 0) {
LAB_0029c338:
      pcVar22 = "bad or missing certid";
      goto LAB_0029c095;
    }
    lVar11 = _CFNumberGetTypeID();
    lVar10 = _CFGetTypeID(lVar10);
    if (lVar11 != lVar10) goto LAB_0029c338;
    local_68 = param_2;
    lVar12 = _CFDictionaryGetValue(param_2,&cf_BasebandFirmware);
    if (lVar12 == 0) {
LAB_0029c34b:
      pcVar22 = "bad or missing baseband firmware dict";
      goto LAB_0029c095;
    }
    lVar11 = _CFDictionaryGetTypeID();
    lVar13 = _CFGetTypeID(lVar12);
    lVar10 = local_58;
    if (lVar11 != lVar13) goto LAB_0029c34b;
    local_40 = lVar9;
    uVar8 = _CFGetAllocator(local_58);
    lVar13 = 2;
    lVar9 = _CFPropertyListCreateDeepCopy(uVar8,local_68,2);
    if (lVar9 == 0) {
      lVar10 = 0;
      lVar11 = 0;
      lVar9 = local_40;
      uVar8 = 0;
      goto LAB_0029c264;
    }
    local_48 = lVar9;
    local_90 = _CFDictionaryGetValue(lVar9,&cf_BasebandFirmware);
    uVar8 = _CFGetAllocator(lVar10);
    lVar9 = _CFDictionaryCreateMutable
                      (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar9 == 0) {
      lVar11 = 0;
      lVar10 = local_48;
      lVar9 = local_40;
      uVar8 = 0;
      goto LAB_0029c264;
    }
    local_38 = lVar9;
    _CFDictionarySetValue(local_40,&cf_BasebandFirmware,lVar9);
    lVar14 = _CFDictionaryGetValue(lVar12,&cf_PSI_PartialDigest);
    if (lVar14 == 0) {
LAB_0029be72:
      lVar15 = _CFDictionaryGetValue(lVar12,&cf_RestorePSI_PartialDigest);
      if (lVar15 != 0) {
        lVar16 = _CFDataGetTypeID();
        lVar17 = _CFGetTypeID(lVar15);
        lVar11 = local_38;
        lVar10 = local_48;
        lVar9 = local_40;
        if (lVar16 != lVar17) goto LAB_0029c0a7;
        iVar5 = __AMAuthInstallRembrandtLocalCreatePSIStitchData(local_58,lVar15,&local_88);
        if (iVar5 != 0) goto LAB_0029c3ce;
        _CFDictionarySetValue(local_38,&cf_RestorePSI_Blob,local_88);
      }
      lVar15 = _CFDictionaryGetValue(lVar12,&cf_PSI2_PartialDigest);
      if (lVar14 != 0) {
        lVar16 = _CFDataGetTypeID();
        lVar17 = _CFGetTypeID(lVar14);
        lVar11 = local_38;
        lVar10 = local_48;
        lVar9 = local_40;
        if (lVar16 != lVar17) goto LAB_0029c0a7;
      }
      if (lVar15 != 0) {
        iVar5 = __AMAuthInstallRembrandtLocalCreatePSIStitchData(local_58,lVar15,&local_80);
        if (iVar5 != 0) goto LAB_0029c3ce;
        _CFDictionarySetValue(local_38,&cf_PSI2_Blob,local_80);
      }
      lVar15 = _CFDictionaryGetValue(lVar12,&cf_RestorePSI2_PartialDigest);
      lVar12 = local_58;
      if (lVar15 != 0) {
        lVar16 = _CFDataGetTypeID();
        lVar17 = _CFGetTypeID(lVar15);
        lVar11 = local_38;
        lVar10 = local_48;
        lVar9 = local_40;
        if (lVar16 != lVar17) goto LAB_0029c0a7;
        iVar5 = __AMAuthInstallRembrandtLocalCreatePSIStitchData(lVar12,lVar15,&local_78);
        if (iVar5 != 0) goto LAB_0029c3ce;
        _CFDictionarySetValue(local_38,&cf_RestorePSI2_Blob,local_78);
      }
      uVar8 = local_60;
      local_50 = 0;
      uVar6 = *(int *)(*(long *)(lVar12 + 0x30) + 4) - 0x5e;
      if (uVar6 < 0xb) {
        if ((0x284U >> (uVar6 & 0x1f) & 1) == 0) {
          if ((0x401U >> (uVar6 & 0x1f) & 1) == 0) goto LAB_0029c1aa;
          uVar18 = _CFGetAllocator(lVar12);
          lVar15 = _CFDataCreateMutable(uVar18,0x30);
          if (lVar15 == 0) {
            iVar5 = 2;
            uVar8 = 0;
          }
          else {
            local_50 = uVar8;
            _CFDataSetLength(lVar15,0x30);
            lVar9 = _CFDataGetBytePtr(lVar14);
            uVar6 = *(uint *)(lVar9 + 4);
            _CC_SHA384_Init(&local_170);
            uVar8 = local_50;
            do {
              uVar2 = *(ulong *)(lVar9 + -8 + lVar13 * 8);
              local_170.count[lVar13] =
                   uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                   (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                   (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                   | uVar2 << 0x38;
              lVar13 = lVar13 + 1;
            } while (lVar13 != 10);
            local_170.count[1] = 0;
            local_170.count[0] = (ulong)uVar6;
            pvVar19 = (void *)_CFDataGetBytePtr(local_50);
            CVar7 = _CFDataGetLength(uVar8);
            _CC_SHA384_Update(&local_170,pvVar19,CVar7);
            puVar20 = (uchar *)_CFDataGetMutableBytePtr(lVar15);
            _CC_SHA384_Final(puVar20,&local_170);
            uVar8 = _CFRetain(lVar15);
            iVar5 = 0;
            lVar12 = local_58;
          }
          _SafeRelease(lVar15);
          local_50 = uVar8;
          _CFDictionarySetValue(local_90,&cf_PSI_DownloadDigest,uVar8);
          uVar8 = local_50;
          lVar10 = local_48;
          lVar9 = local_40;
          lVar11 = local_38;
        }
        else {
          uVar18 = _CFGetAllocator(lVar12);
          lVar15 = _CFDataCreateMutable(uVar18,0x20);
          if (lVar15 == 0) {
            iVar5 = 2;
            uVar8 = 0;
          }
          else {
            _CFDataSetLength(lVar15,0x20);
            lVar10 = _CFDataGetBytePtr(lVar14);
            uVar6 = *(uint *)(lVar10 + 4);
            _CC_SHA256_Init((CC_SHA256_CTX *)&local_170);
            lVar9 = 2;
            do {
              uVar1 = *(uint *)(lVar10 + lVar9 * 4);
              *(uint *)((long)local_170.count + lVar9 * 4) =
                   uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
              lVar9 = lVar9 + 1;
            } while (lVar9 != 10);
            local_170.count[0] = (CC_LONG64)uVar6;
            pvVar19 = (void *)_CFDataGetBytePtr(uVar8);
            CVar7 = _CFDataGetLength(uVar8);
            _CC_SHA256_Update((CC_SHA256_CTX *)&local_170,pvVar19,CVar7);
            puVar20 = (uchar *)_CFDataGetMutableBytePtr(lVar15);
            _CC_SHA256_Final(puVar20,(CC_SHA256_CTX *)&local_170);
            uVar8 = _CFRetain(lVar15);
            iVar5 = 0;
          }
          _SafeRelease(lVar15);
          local_50 = uVar8;
          _CFDictionarySetValue(local_90,&cf_PSI_DownloadDigest,uVar8);
          lVar12 = local_58;
          uVar8 = local_50;
          lVar10 = local_48;
          lVar9 = local_40;
          lVar11 = local_38;
        }
        local_50 = uVar8;
        local_48 = lVar10;
        local_40 = lVar9;
        local_38 = lVar11;
        if (lVar15 == 0) goto LAB_0029c264;
      }
LAB_0029c1aa:
      cVar3 = _CFDictionaryContainsKey(local_68,&cf__BBTicket);
      lVar9 = local_40;
      lVar10 = local_48;
      if (cVar3 != '\0') {
        iVar5 = *(int *)(*(long *)(lVar12 + 0x30) + 4);
        pcVar21 = &cf_bb_rembrandt_ticket_root;
        if (iVar5 == 0x5e) {
          pcVar21 = &cf_bb_rembrandt_bbticket;
        }
        if (iVar5 == 0x68) {
          pcVar21 = &cf_bb_rembrandt_bbticket;
        }
        iVar5 = _AMAuthInstallMaverickLocalCreateRootTicket(lVar12,local_48,pcVar21,0,&local_70);
        lVar11 = local_38;
        uVar8 = local_50;
        if (iVar5 != 0) goto LAB_0029c264;
        _CFDictionarySetValue(lVar9,&cf_BBTicket,local_70);
      }
      uVar8 = _CFRetain(lVar9);
      *local_98 = uVar8;
      _AMAuthInstallDebugWriteObject(lVar12,local_68,&cf_tss_request_bb_local,2);
      _AMAuthInstallDebugWriteObject(lVar12,lVar9,&cf_tss_response_bb_local,2);
      iVar5 = 0;
      lVar11 = local_38;
      uVar8 = local_50;
      goto LAB_0029c264;
    }
    lVar15 = _CFDataGetTypeID();
    lVar16 = _CFGetTypeID(lVar14);
    lVar11 = local_38;
    lVar10 = local_48;
    lVar9 = local_40;
    if (lVar15 == lVar16) {
      iVar5 = __AMAuthInstallRembrandtLocalCreatePSIStitchData(local_58,lVar14,&local_60);
      if (iVar5 == 0) {
        _CFDictionarySetValue(local_38,&cf_PSI_Blob,local_60);
        goto LAB_0029be72;
      }
LAB_0029c3ce:
      lVar11 = local_38;
      lVar10 = local_48;
      lVar9 = local_40;
      uVar8 = 0;
      goto LAB_0029c264;
    }
  }
LAB_0029c0a7:
  uVar8 = 0;
  iVar5 = 1;
LAB_0029c264:
  _SafeRelease(lVar11);
  _SafeRelease(local_60);
  _SafeRelease(local_88);
  _SafeRelease(local_80);
  _SafeRelease(local_78);
  _SafeRelease(local_70);
  _SafeRelease(lVar10);
  _SafeRelease(lVar9);
  _SafeRelease(uVar8);
  _SafeRelease(0);
  return iVar5;
}

