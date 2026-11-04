// rea decompile_all
// name: _AMAuthInstallMonetLocalHandleRequest
// address: 0x2936ef
// body: available
// range: 0x2936ef-0x294d1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallMonetLocalHandleRequest(long param_1,undefined8 param_2,undefined8 *param_3)

{
  CC_LONG aCVar1 [2];
  long lVar2;
  cfstringStruct *pcVar3;
  char cVar4;
  int iVar5;
  CC_LONG len;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  void *data;
  uchar *md;
  char *pcVar16;
  long lVar17;
  CC_LONG aCVar18 [2];
  bool bVar19;
  undefined1 local_1b0 [120];
  CC_LONG local_138 [2];
  long local_130;
  long local_128;
  long local_120;
  CC_LONG local_114;
  CC_LONG local_110 [2];
  undefined8 local_108;
  CC_LONG local_100 [2];
  undefined8 local_f8;
  CC_LONG local_f0 [2];
  long local_e8;
  long local_e0;
  CC_LONG local_d8 [2];
  long local_d0;
  long local_c8;
  long local_c0;
  CC_LONG local_b8 [2];
  CC_LONG local_b0 [2];
  CC_LONG local_a8 [2];
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  ulong local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  
  local_1b0._96_4_ = 0;
  local_1b0._100_4_ = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_1b0._104_4_ = 0;
  local_1b0._108_4_ = 0;
  local_110[0] = 0;
  local_110[1] = 0;
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  local_138[0] = 0;
  local_138[1] = 0;
  local_100[0] = 0;
  local_100[1] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  uVar6 = _CFGetAllocator();
  lVar7 = _CFDictionaryCreateMutable
                    (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar7 == 0) {
    local_48 = (cfstringStruct *)0x0;
    _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest","Failed to allocate responseDict");
    local_40 = 0;
    local_50 = 0;
    iVar5 = 2;
    lVar9 = 0;
    lVar10 = 0;
    lVar8 = 0;
    lVar11 = 0;
    goto LAB_00294290;
  }
  local_1b0._112_8_ = param_3;
  _AMAuthInstallMonetLocalRegisterKeys(param_1);
  lVar8 = _CFDictionaryGetValue(param_2,&cf_BbSNUM);
  if (lVar8 == 0) {
LAB_00294a55:
    pcVar16 = "bad or missing SNUM";
LAB_00293bc5:
    local_48 = (cfstringStruct *)0x0;
    _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest",pcVar16);
    local_50 = 0;
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar9 = _CFDataGetTypeID();
    lVar8 = _CFGetTypeID(lVar8);
    if (lVar9 != lVar8) goto LAB_00294a55;
    lVar8 = _CFDictionaryGetValue(param_2,&cf_BbChipID);
    if (lVar8 == 0) {
LAB_00294a68:
      pcVar16 = "bad or missing chipid";
      goto LAB_00293bc5;
    }
    lVar9 = _CFNumberGetTypeID();
    lVar10 = _CFGetTypeID(lVar8);
    if (lVar9 != lVar10) goto LAB_00294a68;
    cVar4 = _CFNumberGetValue(lVar8,3,&local_114);
    if (cVar4 == '\0') {
      pcVar16 = "failed to read chipid";
      goto LAB_00293bc5;
    }
    lVar8 = _CFDictionaryGetValue(param_2,&cf_BbGoldCertId);
    if (lVar8 == 0) {
LAB_00294a7b:
      pcVar16 = "bad or missing certid";
      goto LAB_00293bc5;
    }
    lVar9 = _CFNumberGetTypeID();
    lVar8 = _CFGetTypeID(lVar8);
    if (lVar9 != lVar8) goto LAB_00294a7b;
    local_38 = lVar7;
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BasebandFirmware);
    if (lVar7 == 0) {
LAB_00294a8e:
      local_48 = (cfstringStruct *)0x0;
      _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest",
                        "bad or missing baseband firmware dict");
LAB_002944b7:
      lVar9 = 0;
LAB_002944cc:
      local_50 = 0;
      lVar8 = 0;
      lVar7 = local_38;
    }
    else {
      lVar8 = _CFDictionaryGetTypeID();
      lVar9 = _CFGetTypeID(lVar7);
      if (lVar8 != lVar9) goto LAB_00294a8e;
      local_48 = &cf_BasebandFirmware;
      lVar8 = _CFDictionaryGetValue(lVar7,&cf_ENANDPRG_PartialDigest);
      if (lVar8 != 0) {
        lVar9 = _CFDataGetTypeID();
        lVar10 = _CFGetTypeID(lVar8);
        if (lVar9 == lVar10) goto LAB_002938d0;
LAB_00294a48:
        local_48 = (cfstringStruct *)0x0;
        goto LAB_002944b7;
      }
LAB_002938d0:
      local_b8 = (CC_LONG  [2])param_2;
      local_40 = _CFDictionaryGetValue(lVar7,&cf_DBL_PartialDigest);
      if (local_40 != 0) {
        lVar9 = _CFDataGetTypeID();
        lVar10 = _CFGetTypeID(local_40);
        if (lVar9 != lVar10) goto LAB_00294a48;
      }
      lVar9 = _CFDictionaryGetValue(lVar7,&cf_eDBL_PartialDigest);
      if (lVar9 != 0) {
        lVar10 = _CFDataGetTypeID();
        lVar11 = _CFGetTypeID(lVar9);
        if (lVar10 != lVar11) goto LAB_00294a48;
      }
      local_78 = param_1;
      local_128 = _CFDictionaryGetValue(lVar7,&cf_RestoreDBL_PartialDigest);
      lVar10 = local_40;
      if (local_40 != 0) {
        lVar11 = _CFDataGetTypeID();
        lVar10 = _CFGetTypeID(lVar10);
        if (lVar11 != lVar10) goto LAB_00294a48;
      }
      local_90 = lVar8;
      lVar8 = _CFDictionaryGetValue(lVar7,&cf_SBL1_PartialDigest);
      if (lVar8 != 0) {
        lVar10 = _CFDataGetTypeID();
        lVar11 = _CFGetTypeID(lVar8);
        if (lVar10 != lVar11) goto LAB_00294a48;
      }
      local_120 = lVar9;
      uVar12 = _CFDictionaryGetValue(lVar7,&cf_RestoreSBL1_PartialDigest);
      if (uVar12 != 0) {
        lVar9 = _CFDataGetTypeID();
        lVar10 = _CFGetTypeID(uVar12);
        if (lVar9 != lVar10) goto LAB_00294a48;
      }
      local_98 = lVar8;
      local_80 = uVar12;
      lVar8 = _CFDictionaryGetValue(lVar7,&cf_Misc_PartialDigest);
      if (lVar8 != 0) {
        lVar9 = _CFDataGetTypeID();
        lVar10 = _CFGetTypeID(lVar8);
        if (lVar9 != lVar10) goto LAB_00294a48;
      }
      local_e0 = lVar8;
      lVar13 = _CFDictionaryGetValue(lVar7,&cf_RestoreSBL1_HashTableDigest);
      if (lVar13 != 0) {
        lVar8 = _CFDataGetTypeID();
        lVar9 = _CFGetTypeID(lVar13);
        if (lVar8 != lVar9) goto LAB_00294a48;
      }
      lVar9 = _CFDictionaryGetValue(lVar7,&cf_SBL1_HashTableDigest);
      if (lVar9 != 0) {
        lVar8 = _CFDataGetTypeID();
        lVar10 = _CFGetTypeID(lVar9);
        if (lVar8 != lVar10) goto LAB_00294a48;
      }
      aCVar18 = local_b8;
      _CFDictionaryGetValue(local_b8,local_48);
      lVar8 = local_78;
      local_130 = lVar9;
      local_e8 = lVar7;
      if ((local_114 == 0x3b0e1) || (local_114 == 0x7f0e1)) {
LAB_00293db3:
        if (lVar13 == 0 && lVar9 == 0) {
          pcVar16 = "bad or missing sbl1/restoreSbl1 hash section measurements";
LAB_00294cc6:
          local_48 = (cfstringStruct *)0x0;
          _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest",pcVar16);
          iVar5 = 8;
LAB_00294cf6:
          local_40 = 0;
          local_50 = 0;
          lVar9 = 0;
          lVar10 = 0;
          lVar7 = local_38;
          lVar8 = 0;
          lVar11 = 0;
          goto LAB_00294290;
        }
LAB_00293de2:
        local_50 = 0;
        local_58 = 0;
        local_68 = 0;
        lVar7 = local_78;
LAB_00293dfa:
        uVar6 = _CFGetAllocator(lVar7);
        lVar8 = _CFPropertyListCreateDeepCopy(uVar6,aCVar18,2);
        pcVar3 = local_48;
        local_c0 = lVar9;
        if (lVar8 == 0) {
          local_48 = (cfstringStruct *)0x0;
          local_40 = 0;
          iVar5 = 2;
          lVar9 = local_58;
          lVar10 = 0;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = 0;
          goto LAB_00294290;
        }
        local_70 = lVar8;
        local_b0 = (CC_LONG  [2])_CFDictionaryGetValue(lVar8,local_48);
        uVar6 = _CFGetAllocator(lVar7);
        lVar7 = _CFDictionaryCreateMutable
                          (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar7 == 0) {
          local_40 = 0;
          iVar5 = 2;
          local_48 = (cfstringStruct *)0x0;
          lVar9 = local_58;
          lVar10 = 0;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = local_70;
          goto LAB_00294290;
        }
        local_60 = lVar7;
        _CFDictionarySetValue(local_38,pcVar3,lVar7);
        lVar7 = local_78;
        if (local_40 == 0) {
          local_48 = (cfstringStruct *)0x0;
          local_40 = 0;
        }
        else {
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,1,local_40,0,local_1b0 + 0x60);
          uVar6 = local_1b0._96_8_;
          local_48 = (cfstringStruct *)local_1b0._96_8_;
          if (iVar5 != 0) {
            local_40 = 0;
            lVar9 = local_58;
            lVar10 = local_60;
            lVar7 = local_38;
            lVar8 = local_68;
            lVar11 = local_70;
            goto LAB_00294290;
          }
          local_88 = lVar13;
          _CFDictionarySetValue(local_60,&cf_DBL_Blob,local_1b0._96_8_);
          uVar14 = _CFGetAllocator(lVar7);
          lVar15 = _CFDataCreateMutable(uVar14,0x14);
          iVar5 = 0;
          if (lVar15 == 0) {
            iVar5 = 2;
            uVar14 = 0;
          }
          else {
            _CFDataSetLength(lVar15,0x14);
            lVar7 = _CFDataGetBytePtr(local_40);
            __SHA1Partial_Init(lVar7 + 0x20,*(undefined4 *)(lVar7 + 0x1c),(CC_SHA1_CTX *)local_1b0);
            data = (void *)_CFDataGetBytePtr(uVar6);
            len = _CFDataGetLength(uVar6);
            _CC_SHA1_Update((CC_SHA1_CTX *)local_1b0,data,len);
            md = (uchar *)_CFDataGetMutableBytePtr(lVar15);
            _CC_SHA1_Final(md,(CC_SHA1_CTX *)local_1b0);
            uVar14 = _CFRetain(lVar15);
          }
          _SafeRelease(lVar15);
          local_40 = uVar14;
          _CFDictionarySetValue(local_b0,&cf_DBL_DownloadDigest,uVar14);
          uVar6 = _CFDataGetLength(uVar6);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest","dblStitchData size=0x%x",uVar6
                           );
          lVar13 = local_88;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar7 = local_38;
          lVar8 = local_68;
          aCVar18 = local_b8;
          lVar11 = local_70;
          if (lVar15 == 0) goto LAB_00294290;
        }
        lVar7 = local_38;
        lVar15 = local_e8;
        if (local_90 != 0) {
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,2,local_90,0,local_110);
          aCVar1 = local_110;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          _CFDictionarySetValue(local_60,&cf_ENANDPRG_Blob,local_110);
          uVar6 = _CFDataGetLength(aCVar1);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest","nandprogStitchData size=0x%x",
                            uVar6);
        }
        lVar2 = local_78;
        lVar17 = local_120;
        if (local_120 != 0) {
          local_88 = lVar13;
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,2,local_120,0,&local_108);
          uVar6 = local_108;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          _CFDictionarySetValue(local_60,&cf_eDBL_Blob,local_108);
          uVar14 = _CFDataGetLength(uVar6);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest","eDblStitchData size=0x%x",
                            uVar14);
          iVar5 = __AMAuthInstallMonetLocalCreateEDBLDownloadDigestData(lVar2,lVar17,uVar6);
          _CFDictionarySetValue(local_b0,&cf_eDBL_DownloadDigest,local_138);
          lVar13 = local_88;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
        }
        if (local_128 != 0) {
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,2,local_128,0,local_100);
          aCVar1 = local_100;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          _CFDictionarySetValue(local_60,&cf_RestoreDBL_Blob,local_100);
          uVar6 = _CFDataGetLength(aCVar1);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest",
                            "restoreDblStitchData size=0x%x",uVar6);
        }
        lVar2 = local_78;
        lVar17 = local_98;
        if ((((local_98 != 0) &&
             (iVar5 = *(int *)(*(long *)(local_78 + 0x30) + 4), iVar5 != 0x3b0e1)) &&
            ((iVar5 != 0x7f0e1 && ((iVar5 != 0xe50e1 && (iVar5 != 0x1440e1)))))) &&
           ((iVar5 != 0x1720e1 &&
            ((((iVar5 != 0x19f0e1 && (iVar5 != 0x1fe0e1)) && (iVar5 != 0x2af0e1)) &&
             (iVar5 != 0x9540e1)))))) {
          local_88 = lVar13;
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,1,local_98,0,local_a8);
          aCVar1 = local_a8;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          _CFDictionarySetValue(local_60,&cf_SBL1_Blob,local_a8);
          iVar5 = __AMAuthInstallMonetLocalCreateEDBLDownloadDigestData(lVar2,lVar17,aCVar1);
          _CFDictionarySetValue(local_b0,&cf_SBL1_DownloadDigest,local_d8);
          uVar6 = _CFDataGetLength(aCVar1);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest","sbl1StitchData size=0x%x",
                            uVar6);
          lVar13 = local_88;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
        }
        if (((((local_80 != 0) &&
              (iVar5 = *(int *)(*(long *)(local_78 + 0x30) + 4), iVar5 != 0x3b0e1)) &&
             ((iVar5 != 0x7f0e1 && ((iVar5 != 0xe50e1 && (iVar5 != 0x1440e1)))))) &&
            (iVar5 != 0x1720e1)) &&
           ((((iVar5 != 0x19f0e1 && (iVar5 != 0x1fe0e1)) && (iVar5 != 0x2af0e1)) &&
            (iVar5 != 0x9540e1)))) {
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,1,local_80,0,&local_a0);
          uVar6 = local_a0;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          uVar14 = _CFDataGetLength(local_a0);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest",
                            "restoreSbl1StitchData size=0x%x",uVar14);
          _CFDictionarySetValue(local_60,&cf_RestoreSBL1_Blob,uVar6);
        }
        lVar2 = local_78;
        lVar17 = local_98;
        if ((local_130 != 0) &&
           (((iVar5 = *(int *)(*(long *)(local_78 + 0x30) + 4), iVar5 == 0x3b0e1 ||
             (iVar5 == 0x9540e1)) || (iVar5 == 0x7f0e1)))) {
          local_88 = lVar13;
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,1,local_98,local_130,local_a8);
          aCVar1 = local_a8;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          _CFDictionarySetValue(local_60,&cf_SBL1_HashTableDigest_Blob,local_a8);
          iVar5 = __AMAuthInstallMonetLocalCreateEDBLDownloadDigestData(lVar2,lVar17,aCVar1);
          _CFDictionarySetValue(local_b0,&cf_SBL1_DownloadDigest,local_d8);
          uVar6 = _CFDataGetLength(aCVar1);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest","sbl1StitchData size=0x%x",
                            uVar6);
          lVar13 = local_88;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar7 = local_38;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
        }
        lVar17 = local_e0;
        if ((lVar13 != 0) &&
           (((iVar5 = *(int *)(*(long *)(local_78 + 0x30) + 4), iVar5 == 0x3b0e1 ||
             (iVar5 == 0x9540e1)) || (iVar5 == 0x7f0e1)))) {
          iVar5 = __AMAuthInstallMonetLocalCreateStitchData(local_78,1,local_80,lVar13,&local_a0);
          uVar6 = local_a0;
          lVar9 = local_58;
          lVar10 = local_60;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          uVar14 = _CFDataGetLength(local_a0);
          _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest",
                            "restoreSbl1StitchData size=0x%x",uVar14);
          _CFDictionarySetValue(local_60,&cf_RestoreSBL1_HashTableDigest_Blob,uVar6);
        }
        iVar5 = *(int *)(*(long *)(local_78 + 0x30) + 4);
        if ((((iVar5 == 0xe50e1) || (iVar5 == 0x1440e1)) || (iVar5 == 0x1720e1)) ||
           (((iVar5 == 0x19f0e1 || (iVar5 == 0x2af0e1)) || (iVar5 == 0x1fe0e1)))) {
          lVar13 = _CFDictionaryGetValue(local_70,&cf_BbJtagEnable);
          if (lVar13 == 0) {
LAB_0029406f:
            bVar19 = false;
          }
          else {
            lVar7 = _CFGetTypeID(lVar13);
            lVar8 = _CFBooleanGetTypeID();
            if (lVar7 != lVar8) goto LAB_0029406f;
            cVar4 = _CFBooleanGetValue(lVar13);
            bVar19 = cVar4 != '\0';
          }
          lVar7 = local_c8;
          uVar12 = (ulong)bVar19;
          if (local_c8 != 0) {
            local_90 = _CFDictionaryGetValue(lVar15,&cf_RestoreSBL1_HashTableHeaderDefault);
            uVar12 = local_80;
            local_80 = CONCAT44(local_80._4_4_,(uint)bVar19);
            iVar5 = __AMAuthInstallMonetLocalCreateStitchDataMav20
                              (local_78,uVar12,lVar7,&local_a0,local_90,(uint)bVar19);
            uVar6 = local_a0;
            lVar9 = local_58;
            lVar10 = local_60;
            lVar7 = local_38;
            lVar8 = local_68;
            lVar11 = local_70;
            if (iVar5 != 0) goto LAB_00294290;
            uVar14 = _CFDataGetLength(local_a0);
            _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest",
                              "restoreSbl1StitchData size=0x%x",uVar14);
            _CFDictionarySetValue(local_60,&cf_RestoreSBL1_HashTableBody_Blob,uVar6);
            _SafeRelease(local_90);
            uVar12 = local_80 & 0xffffffff;
            aCVar18 = local_b8;
          }
          lVar7 = local_c0;
          if (local_c0 != 0) {
            local_90 = _CFDictionaryGetValue(lVar15,&cf_SBL1_HashTableHeaderDefault);
            lVar17 = local_98;
            local_80 = CONCAT44(local_80._4_4_,(int)uVar12);
            iVar5 = __AMAuthInstallMonetLocalCreateStitchDataMav20
                              (local_78,local_98,lVar7,local_a8,local_90,uVar12);
            aCVar18 = local_a8;
            lVar9 = local_58;
            lVar10 = local_60;
            lVar7 = local_38;
            lVar8 = local_68;
            lVar11 = local_70;
            if (iVar5 != 0) goto LAB_00294290;
            uVar6 = _CFDataGetLength(local_a8);
            _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest","sbl1StitchData size=0x%x",
                              uVar6);
            _CFDictionarySetValue(local_60,&cf_SBL1_HashTableBody_Blob,aCVar18);
            iVar5 = __AMAuthInstallMonetLocalCreateEDBLDownloadDigestData
                              (local_78,lVar17,aCVar18,local_d8);
            _CFDictionarySetValue(local_b0,&cf_SBL1_DownloadDigest,local_d8);
            lVar9 = local_58;
            lVar10 = local_60;
            lVar7 = local_38;
            lVar8 = local_68;
            lVar11 = local_70;
            if (iVar5 != 0) goto LAB_00294290;
            _SafeRelease(local_90);
            uVar12 = local_80 & 0xffffffff;
            lVar17 = local_e0;
            aCVar18 = local_b8;
          }
          if ((local_d0 != 0) &&
             (((iVar5 = *(int *)(*(long *)(local_78 + 0x30) + 4), iVar5 == 0xe50e1 ||
               (iVar5 == 0x1440e1)) ||
              ((iVar5 == 0x1720e1 ||
               (((iVar5 == 0x19f0e1 || (iVar5 == 0x2af0e1)) || (iVar5 == 0x1fe0e1)))))))) {
            local_98 = _CFDictionaryGetValue(lVar15,&cf_Misc_HashTableHeaderDefault);
            lVar15 = local_78;
            iVar5 = __AMAuthInstallMonetLocalCreateStitchDataMav20
                              (local_78,lVar17,local_d0,&local_f8,local_98,uVar12);
            uVar6 = local_f8;
            lVar9 = local_58;
            lVar10 = local_60;
            lVar7 = local_38;
            lVar8 = local_68;
            lVar11 = local_70;
            if (iVar5 != 0) goto LAB_00294290;
            iVar5 = __AMAuthInstallMonetLocalCreateEDBLDownloadDigestData
                              (lVar15,lVar17,local_f8,local_1b0 + 0x68);
            _CFDictionarySetValue(local_b0,&cf_Misc_DownloadDigest,local_1b0._104_8_);
            lVar9 = local_58;
            lVar10 = local_60;
            lVar7 = local_38;
            lVar8 = local_68;
            lVar11 = local_70;
            if (iVar5 != 0) goto LAB_00294290;
            uVar14 = _CFDataGetLength(uVar6);
            _AMAuthInstallLog(7,"AMAuthInstallMonetLocalHandleRequest","miscStitchData size=0x%x",
                              uVar14);
            _CFDictionarySetValue(local_60,&cf_Misc_HashTableBody_Blob,uVar6);
            _SafeRelease(local_98);
            aCVar18 = local_b8;
          }
          _SafeRelease(lVar13);
          lVar7 = local_38;
        }
        pcVar3 = local_48;
        cVar4 = _CFDictionaryContainsKey(aCVar18,&cf__BBTicket);
        lVar13 = local_50;
        local_48 = pcVar3;
        if (cVar4 != '\0') {
          iVar5 = _AMAuthInstallMonetLocalCreateRootTicket(local_78,local_70,local_f0);
          lVar9 = local_58;
          lVar10 = local_60;
          lVar8 = local_68;
          lVar11 = local_70;
          if (iVar5 != 0) goto LAB_00294290;
          _CFDictionarySetValue(lVar7,&cf_BBTicket,local_f0);
        }
        uVar6 = _CFRetain(lVar7);
        lVar8 = local_78;
        *(undefined8 *)local_1b0._112_8_ = uVar6;
        _AMAuthInstallDebugWriteObject(local_78,aCVar18,&cf_tss_request_bb_local,2);
        _AMAuthInstallDebugWriteObject(lVar8,lVar7,&cf_tss_response_bb_local,2);
        lVar9 = local_58;
        _CFRetain(local_58);
        _CFRetain(lVar13);
        lVar8 = local_68;
        _CFRetain(local_68);
        iVar5 = 0;
        lVar10 = local_60;
        lVar11 = local_70;
        goto LAB_00294290;
      }
      if (((local_114 != 0xe50e1) &&
          (((local_114 != 0x1440e1 && (local_114 != 0x1720e1)) && (local_114 != 0x19f0e1)))) &&
         ((local_114 != 0x1fe0e1 && (local_114 != 0x2af0e1)))) {
        if (local_114 == 0x4600e1) {
LAB_00293b93:
          if (local_90 == 0 && local_40 == 0) {
            pcVar16 = "bad or missing nandprog/dbl measurements";
            goto LAB_00294cc6;
          }
        }
        else {
          if (local_114 == 0x9540e1) goto LAB_00293db3;
          if (local_114 == 0x5a00e1) {
            if (local_120 == 0 && local_128 == 0) {
              pcVar16 = "bad or missing RestoreDBL/eDBL measurements";
              goto LAB_00294cc6;
            }
          }
          else {
            if (((local_114 != 0x6f10e1) && (local_114 != 0x6f20e1)) &&
               ((local_114 != 0x7f50e1 && (local_114 != 0x9210e1)))) {
              if (local_114 != 0x5000e1) {
                local_48 = (cfstringStruct *)0x0;
                _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest",
                                  "unrecognized chipid: 0x%08X");
                goto LAB_002944b7;
              }
              goto LAB_00293b93;
            }
            if (local_98 == 0 && local_80 == 0) goto LAB_00293da0;
          }
        }
        goto LAB_00293de2;
      }
      if (((local_80 == 0) && (local_98 == 0)) && (local_e0 == 0)) {
LAB_00293da0:
        pcVar16 = "bad or missing sbl1/restoreSbl1 measurements";
        goto LAB_00294cc6;
      }
      uVar6 = _CFGetAllocator(local_78);
      local_c8 = _CFDataCreateMutable(uVar6,0);
      if (local_c8 == 0) {
        local_48 = (cfstringStruct *)0x0;
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest","restoreSbl1 stitchData is NULL")
        ;
        local_c8 = 0;
        iVar5 = 2;
        goto LAB_00294cf6;
      }
      lVar9 = _CFDictionaryGetValue(lVar7,&cf_RestoreSBL1_HashTableBody);
      if (lVar9 != 0) {
        lVar7 = _CFDataGetTypeID();
        lVar10 = _CFGetTypeID(lVar9);
        if (lVar7 == lVar10) goto LAB_00293c69;
        local_48 = (cfstringStruct *)0x0;
        goto LAB_002944cc;
      }
LAB_00293c69:
      uVar6 = _CFDataGetBytePtr(lVar9);
      local_58 = lVar9;
      uVar14 = _CFDataGetLength(lVar9);
      _CFDataAppendBytes(local_c8,uVar6,uVar14);
      uVar6 = _CFGetAllocator(lVar8);
      lVar9 = _CFDataCreateMutable(uVar6,0);
      lVar8 = local_e8;
      if (lVar9 == 0) {
        local_48 = (cfstringStruct *)0x0;
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest","sbl1 stitchData is NULL");
        local_50 = 0;
        local_c0 = 0;
LAB_00294c1e:
        local_40 = 0;
        iVar5 = 2;
        lVar9 = local_58;
        lVar10 = 0;
        lVar7 = local_38;
        lVar8 = 0;
        lVar11 = 0;
        goto LAB_00294290;
      }
      lVar7 = _CFDictionaryGetValue(local_e8,&cf_SBL1_HashTableBody);
      local_50 = lVar7;
      local_c0 = lVar9;
      if (lVar7 == 0) {
LAB_00293cee:
        uVar6 = _CFDataGetBytePtr(lVar7);
        uVar14 = _CFDataGetLength(lVar7);
        _CFDataAppendBytes(lVar9,uVar6,uVar14);
        lVar7 = local_78;
        uVar6 = _CFGetAllocator(local_78);
        local_d0 = _CFDataCreateMutable(uVar6,0);
        if (local_d0 == 0) {
          local_48 = (cfstringStruct *)0x0;
          _AMAuthInstallLog(3,"AMAuthInstallMonetLocalHandleRequest","misc stitchData is NULL");
          local_d0 = 0;
          goto LAB_00294c1e;
        }
        lVar8 = _CFDictionaryGetValue(lVar8,&cf_Misc_HashTableBody);
        if (lVar8 != 0) {
          lVar10 = _CFDataGetTypeID();
          lVar11 = _CFGetTypeID(lVar8);
          if (lVar10 != lVar11) goto LAB_00294c92;
        }
        uVar6 = _CFDataGetBytePtr(lVar8);
        local_68 = lVar8;
        uVar14 = _CFDataGetLength();
        _CFDataAppendBytes(local_d0,uVar6,uVar14);
        aCVar18 = local_b8;
        goto LAB_00293dfa;
      }
      lVar10 = _CFDataGetTypeID();
      lVar11 = _CFGetTypeID(lVar7);
      if (lVar10 == lVar11) goto LAB_00293cee;
      lVar8 = 0;
LAB_00294c92:
      local_48 = (cfstringStruct *)0x0;
      lVar9 = local_58;
      lVar7 = local_38;
    }
  }
  local_40 = 0;
  iVar5 = 1;
  lVar10 = 0;
  lVar11 = 0;
LAB_00294290:
  _SafeRelease(lVar10);
  _SafeRelease(local_48);
  _SafeRelease(local_40);
  _SafeRelease(lVar9);
  _SafeRelease(local_50);
  _SafeRelease(lVar8);
  _SafeRelease(local_110);
  _SafeRelease(local_f0);
  _SafeRelease(lVar11);
  _SafeRelease(lVar7);
  _SafeRelease(local_a8);
  _SafeRelease(local_f8);
  _SafeRelease(local_d8);
  _SafeRelease(local_a0);
  _SafeRelease(local_108);
  _SafeRelease(local_100);
  _SafeRelease(local_138);
  _SafeRelease(local_c8);
  _SafeRelease(local_c0);
  _SafeRelease(local_d0);
  return iVar5;
}

