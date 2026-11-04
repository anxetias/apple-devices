// rea decompile_all
// name: _fPersonalizationAssetAllHeadersAndMetaDataComplete
// address: 0x17daa1
// body: available
// range: 0x17daa1-0x17e9d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPersonalizationAssetAllHeadersAndMetaDataComplete
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong *puVar17;
  void *pvVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ushort *puVar23;
  long lVar24;
  undefined8 uVar25;
  cfstringStruct *pcVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  long lVar30;
  undefined4 *puVar31;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  code *local_160;
  code *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  code *local_140;
  code *pcStack_138;
  code *local_130;
  code *pcStack_128;
  code *local_120;
  code *pcStack_118;
  code *local_110;
  code *pcStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ushort *local_60;
  int local_58;
  uint local_54;
  ushort *local_50;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  
  if (param_3 == (undefined8 *)0x0 || param_1 == 0) {
    return;
  }
  puVar14 = (undefined8 *)_uarpZalloc(0x150);
  puVar14[0x29] = *(undefined8 *)(param_1 + 0x788);
  *(undefined8 **)(param_1 + 0x788) = puVar14;
  _uarpZero(&local_1b8,0xe0);
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_e0 = 0;
  local_1b8 = _fPersonalizationAssetReady;
  local_160 = _fPersonalizationAssetGetBytesAtOffset2;
  pcStack_158 = _fPersonalizationAssetSetBytesAtOffset2;
  local_140 = _fPersonalizationAssetCorrupt;
  pcStack_138 = _fPersonalizationAssetOrphaned;
  local_130 = _fPersonalizationAssetReleased2;
  pcStack_128 = _fPersonalizationAssetProcessingNotification2;
  local_120 = _fPersonalizationAssetProcessingNotificationAck;
  pcStack_118 = _fPersonalizationAssetPreProcessingNotification;
  local_110 = _fPersonalizationAssetPreProcessingNotificationAck;
  pcStack_108 = _fPersonalizationAssetAllHeadersAndMetaDataComplete;
  uVar15 = _uarpAssetTagStructPersonalization();
  lVar21 = param_1 + 0x298;
  local_78 = param_1;
  local_68 = puVar14;
  iVar10 = _uarpPlatformEndpointPrepareDynamicAsset
                     (lVar21,param_1 + 0x6d0,puVar14,uVar15,&local_1b8);
  puVar14 = local_68;
  if (iVar10 != 0) {
    return;
  }
  uVar15 = _uarpPlatformAssetFindByAssetContext(lVar21,local_68);
  lVar30 = local_78;
  *puVar14 = uVar15;
  puVar14[1] = local_78;
  local_50 = (ushort *)param_3;
  local_40 = lVar21;
  puVar16 = (ulong *)_uarpAssetQuerySuperBinaryMetaData(lVar21,*param_3);
  puVar23 = local_50;
  lVar21 = local_40;
  for (; local_50 = puVar23, local_40 = lVar21, puVar16 != (ulong *)0x0;
      puVar16 = (ulong *)puVar16[2]) {
    _CoreUARPRestoreLogInfo(lVar30,3,"Payload Metadata <0x%08x>",(int)*puVar16);
    puVar17 = (ulong *)_uarpZalloc(0x18);
    uVar29 = *puVar16;
    *puVar17 = uVar29;
    pvVar18 = (void *)_uarpZalloc(uVar29 >> 0x20);
    puVar17[1] = (ulong)pvVar18;
    _memcpy(pvVar18,(void *)puVar16[1],(ulong)*(uint *)((long)puVar17 + 4));
    puVar17[2] = puVar14[0x28];
    puVar14[0x28] = puVar17;
    puVar23 = local_50;
    lVar21 = local_40;
  }
  local_60 = (ushort *)((long)puVar23 + 0x120);
  *(undefined2 *)((long)puVar23 + 0x120) = 0;
  iVar10 = _uarpPlatformEndpointAssetQueryNumberOfPayloads(lVar21,*(undefined8 *)puVar23);
  if (iVar10 != 0) {
    return;
  }
  uVar15 = _uarpZalloc((ulong)*(ushort *)((long)puVar23 + 0x120) * 0x160);
  puVar14 = local_68;
  *(undefined8 *)((long)puVar23 + 0x128) = uVar15;
  uVar1 = *(ushort *)((long)puVar23 + 0x120);
  *(ushort *)(local_68 + 0x24) = uVar1;
  uVar15 = _uarpZalloc((ulong)uVar1 * 0x160);
  puVar14[0x25] = uVar15;
  if (*(short *)((long)puVar23 + 0x120) != 0) {
    uVar29 = 0;
    do {
      lVar30 = *(long *)((long)puVar23 + 0x128);
      lVar27 = uVar29 * 0x160;
      lVar24 = local_68[0x25] + lVar27;
      *(short *)(lVar30 + lVar27) = (short)uVar29;
      iVar10 = _uarpAssetQueryPayloadInfo(lVar21,*(undefined8 *)puVar23,uVar29 & 0xffffffff);
      lVar22 = local_78;
      if (iVar10 != 0) {
        return;
      }
      lVar30 = lVar30 + lVar27;
      _CoreUARPRestoreLogInfo(local_78,3,"Payload Index %u",uVar29 & 0xffffffff);
      _CoreUARPRestoreLogInfo
                (lVar22,3,"- Tag is %c%c%c%c",*(undefined1 *)(lVar30 + 4),
                 *(undefined1 *)(lVar30 + 5),*(undefined1 *)(lVar30 + 6),*(undefined1 *)(lVar30 + 7)
                );
      _CoreUARPRestoreLogInfo
                (lVar22,3,"- Version is %u.%u.%u.%u",*(undefined4 *)(lVar30 + 8),
                 *(undefined4 *)(lVar30 + 0xc),*(undefined4 *)(lVar30 + 0x10),
                 *(undefined4 *)(lVar30 + 0x14));
      _CoreUARPRestoreLogInfo(lVar22,3,"- Data length is %u",*(undefined4 *)(lVar30 + 0x1c));
      _CoreUARPRestoreLogInfo(lVar22,3,"- MetaData length is %u",*(undefined4 *)(lVar30 + 0x18));
      *(undefined4 *)(lVar24 + 4) = *(undefined4 *)(lVar30 + 4);
      uVar11 = *(undefined4 *)(lVar30 + 0xc);
      uVar2 = *(undefined4 *)(lVar30 + 0x10);
      uVar3 = *(undefined4 *)(lVar30 + 0x14);
      *(undefined4 *)(lVar24 + 8) = *(undefined4 *)(lVar30 + 8);
      *(undefined4 *)(lVar24 + 0xc) = uVar11;
      *(undefined4 *)(lVar24 + 0x10) = uVar2;
      *(undefined4 *)(lVar24 + 0x14) = uVar3;
      uVar15 = _uarpZalloc(*(undefined4 *)(lVar30 + 0x1c));
      *(undefined8 *)(lVar30 + 0x50) = uVar15;
      local_48 = uVar29;
      puVar16 = (ulong *)_uarpAssetQueryPayloadMetaData
                                   (local_40,*(undefined8 *)puVar23,uVar29 & 0xffffffff);
      *(ulong **)(lVar30 + 0x28) = puVar16;
      puVar23 = local_50;
      lVar21 = local_40;
      for (; local_50 = puVar23, local_40 = lVar21, puVar16 != (ulong *)0x0;
          puVar16 = (ulong *)puVar16[2]) {
        _CoreUARPRestoreLogInfo(lVar22,3,"Payload Metadata <0x%08x>",(int)*puVar16);
        puVar17 = (ulong *)_uarpZalloc(0x18);
        uVar29 = *puVar16;
        *puVar17 = uVar29;
        pvVar18 = (void *)_uarpZalloc(uVar29 >> 0x20);
        puVar17[1] = (ulong)pvVar18;
        _memcpy(pvVar18,(void *)puVar16[1],(ulong)*(uint *)((long)puVar17 + 4));
        puVar17[2] = *(ulong *)(lVar24 + 0x28);
        *(ulong **)(lVar24 + 0x28) = puVar17;
        puVar23 = local_50;
        lVar21 = local_40;
      }
      uVar29 = local_48 + 1;
    } while (uVar29 < *local_60);
  }
  _uarpPlatformEndpointAssetFullyStaged(lVar21,*(undefined8 *)puVar23);
  if (*(short *)(local_68 + 0x24) == 0) {
    return;
  }
  lVar21 = local_68[0x25];
  lVar30 = *(long *)PTR__kCFAllocatorDefault_004410e8;
  local_70 = _CFDictionaryCreateMutable
                       (lVar30,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  piVar28 = *(int **)(lVar21 + 0x28);
  uVar15 = 0;
  local_d0 = lVar21;
  local_40 = lVar30;
  if (piVar28 != (int *)0x0) {
    uVar25 = 0;
    bVar5 = false;
    bVar4 = false;
    bVar7 = false;
    bVar6 = false;
    local_48 = local_48 & 0xffffffff00000000;
    do {
      _CoreUARPRestoreLogDebug
                (local_78,1,"CoreUARP Restore IM4M: First Pass on TLV <0x%08x>",*piVar28);
      iVar10 = *piVar28;
      if (iVar10 < -0x774d6ede) {
        if (iVar10 == -0x774d6efd) {
          uVar25 = _CFStringCreateWithBytes
                             (local_40,*(undefined8 *)(piVar28 + 2),piVar28[1],0x8000100,0);
        }
        else if (((iVar10 == -0x774d6edf) && (piVar28[1] == 1)) &&
                (bVar4 = bVar5, **(char **)(piVar28 + 2) != '\0')) {
          bVar4 = true;
          bVar5 = bVar4;
        }
      }
      else if (iVar10 == -0x774d6ede) {
        if ((piVar28[1] == 1) && (bVar6 = bVar7, **(char **)(piVar28 + 2) != '\0')) {
          bVar7 = true;
          bVar6 = true;
        }
      }
      else if ((iVar10 == -0x774d6edb) && (piVar28[1] == 4)) {
        uVar11 = _uarpNtohl(**(undefined4 **)(piVar28 + 2));
        local_48 = CONCAT44(local_48._4_4_,uVar11);
      }
      lVar30 = local_40;
      piVar28 = *(int **)(piVar28 + 4);
    } while (piVar28 != (int *)0x0);
    if ((bVar4) || (uVar15 = uVar25, bVar6)) {
      iVar10 = (int)local_48;
      if ((int)local_48 == 0) {
        if (_CoreUARPRestoreNextLUNForPrefix_lunDictRef == 0) {
          _CoreUARPRestoreNextLUNForPrefix_lunDictRef =
               _CFDictionaryCreateMutable
                         (local_40,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        }
        local_38 = 0;
        cVar8 = _CFDictionaryGetValueIfPresent(_CoreUARPRestoreNextLUNForPrefix_lunDictRef,uVar25);
        if (cVar8 == '\0') {
          local_58 = 1;
          lVar21 = _CFNumberCreate(lVar30,3);
          if (lVar21 == 0) {
            iVar10 = 0;
          }
          else {
            _CFDictionarySetValue(_CoreUARPRestoreNextLUNForPrefix_lunDictRef,uVar25,lVar21);
LAB_0017e9c0:
            iVar10 = local_58;
            _CFRelease(lVar21);
          }
        }
        else {
          lVar21 = _CFGetTypeID(local_38);
          lVar22 = _CFNumberGetTypeID();
          iVar10 = 0;
          if ((lVar21 == lVar22) && (lVar21 = _CFNumberGetType(local_38), lVar21 == 3)) {
            local_58 = 0;
            cVar8 = _CFNumberGetValue(local_38,3);
            iVar10 = 0;
            if (cVar8 != '\0') {
              local_58 = local_58 + 1;
              lVar21 = _CFNumberCreate(lVar30,3);
              iVar10 = 0;
              if (lVar21 != 0) {
                _CFDictionaryReplaceValue(_CoreUARPRestoreNextLUNForPrefix_lunDictRef,uVar25,lVar21)
                ;
                goto LAB_0017e9c0;
              }
            }
          }
        }
      }
      uVar15 = _CFStringCreateWithFormat(lVar30,0,&cf____d,uVar25,iVar10);
      _CFRelease(uVar25);
      if (bVar6) {
        local_80 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_BoardID,iVar10);
        local_88 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_ChipID,iVar10);
        local_c8 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_ECID,iVar10);
        local_c0 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_Nonce,iVar10);
        local_b8 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_ProductionMode,iVar10);
        local_b0 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_SecurityDomain,iVar10);
        local_a8 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_SecurityMode,iVar10);
        local_a0 = _CFStringCreateWithFormat(lVar30,0,&cf____d,&cf_SocLiveNonce,iVar10);
        uVar25 = local_70;
        goto LAB_0017e290;
      }
    }
  }
  uVar25 = local_70;
  local_80 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_BoardID);
  local_88 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_ChipID);
  local_c8 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_ECID);
  local_c0 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_Nonce);
  local_b8 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_ProductionMode);
  local_b0 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_SecurityDomain);
  local_a8 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_SecurityMode);
  local_a0 = _CFStringCreateWithFormat(lVar30,0,&cf___,&cf_SocLiveNonce);
LAB_0017e290:
  piVar28 = *(int **)(local_d0 + 0x28);
  local_50 = *(ushort **)PTR__kCFBooleanTrue_00441110;
  if (piVar28 == (int *)0x0) {
    local_54 = 0;
  }
  else {
    local_60 = *(ushort **)PTR__kCFBooleanFalse_00441108;
    local_54 = 0;
    local_90 = uVar15;
    do {
      iVar10 = *piVar28;
      switch(iVar10) {
      case -0x774d6efc:
        if (piVar28[1] == 4) {
          uVar11 = _uarpNtohl(**(undefined4 **)(piVar28 + 2));
          local_38 = CONCAT44(local_38._4_4_,uVar11);
          uVar19 = 3;
LAB_0017e4e0:
          uVar19 = _CFNumberCreate(lVar30,uVar19,&local_38);
          goto LAB_0017e505;
        }
        break;
      case -0x774d6efb:
        if (piVar28[1] == 4) {
          uVar11 = _uarpNtohl(**(undefined4 **)(piVar28 + 2));
          local_38 = CONCAT44(local_38._4_4_,uVar11);
          uVar19 = _CFNumberCreate(lVar30,3,&local_38);
          goto LAB_0017e505;
        }
        break;
      case -0x774d6efa:
        if (piVar28[1] == 8) {
          local_38 = _uarpNtohll(**(undefined8 **)(piVar28 + 2));
          uVar19 = _CFNumberCreate(lVar30,4,&local_38);
          goto LAB_0017e505;
        }
        break;
      case -0x774d6ef9:
      case -0x774d6ef8:
        uVar19 = _CFDataCreate(lVar30,*(undefined8 *)(piVar28 + 2),piVar28[1]);
LAB_0017e505:
        uVar20 = _CFStringCreateWithFormat(lVar30,0,&cf______,uVar15);
        _CFDictionaryAddValue(uVar25,uVar20,uVar19);
        _CFRelease(uVar19);
        break;
      case -0x774d6ef7:
        if (piVar28[1] == 4) {
          uVar11 = _uarpNtohl(**(undefined4 **)(piVar28 + 2));
          local_38 = CONCAT44(local_38._4_4_,uVar11);
          uVar19 = _CFNumberCreate(lVar30,3,&local_38);
          goto LAB_0017e505;
        }
        break;
      case -0x774d6ef6:
        if (piVar28[1] == 4) {
          iVar10 = _uarpNtohl(**(undefined4 **)(piVar28 + 2));
          puVar23 = local_50;
          if (iVar10 == 0) {
            puVar23 = local_60;
          }
LAB_0017e758:
          uVar19 = _CFStringCreateWithFormat(lVar30,0,&cf______,uVar15);
          _CFDictionaryAddValue(uVar25,uVar19,puVar23);
        }
        break;
      case -0x774d6ef5:
        if (piVar28[1] == 4) {
          iVar10 = _uarpNtohl(**(undefined4 **)(piVar28 + 2));
          puVar23 = local_50;
          if (iVar10 == 0) {
            puVar23 = local_60;
          }
          goto LAB_0017e758;
        }
        break;
      case -0x774d6ef4:
      case -0x774d6ef3:
      case -0x774d6ef2:
      case -0x774d6ef1:
      case -0x774d6eef:
      case -0x774d6eee:
      case -0x774d6eed:
      case -0x774d6eec:
      case -0x774d6eeb:
      case -0x774d6eea:
      case -0x774d6ee9:
      case -0x774d6ee7:
      case -0x774d6ee6:
        break;
      case -0x774d6ef0:
        local_48 = _CFDictionaryCreateMutable
                             (lVar30,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        iVar10 = piVar28[1];
        if (iVar10 != 0) {
          puVar31 = *(undefined4 **)(piVar28 + 2);
          local_d8 = 0;
          local_98 = piVar28;
          do {
            iVar12 = _uarpNtohl(*puVar31);
            uVar13 = _uarpNtohl(puVar31[1]);
            uVar29 = (ulong)uVar13;
            puVar31 = puVar31 + 2;
            switch(iVar12) {
            case -0x774d6eee:
              local_d8 = _CFStringCreateWithBytes(local_40,puVar31,uVar29,0x8000100,0);
              break;
            case -0x774d6eed:
              uVar15 = _CFDataCreate(local_40,puVar31,uVar29);
              pcVar26 = &cf_Digest;
LAB_0017e655:
              _CFDictionaryAddValue(local_48,pcVar26,uVar15);
              _CFRelease(uVar15);
              break;
            default:
              if (uVar13 == 4 && iVar12 == -0x774d6ee0) {
                uVar11 = _uarpNtohl(*puVar31);
                local_38 = CONCAT44(local_38._4_4_,uVar11);
                uVar15 = _CFNumberCreate(local_40,3,&local_38);
                pcVar26 = &cf_DigestListSize;
                goto LAB_0017e655;
              }
              break;
            case -0x774d6eeb:
              if (uVar13 == 2) {
                sVar9 = _uarpNtohs(*(undefined2 *)puVar31);
                puVar23 = local_50;
                if (sVar9 == 0) {
                  puVar23 = local_60;
                }
                pcVar26 = &cf_ESEC;
LAB_0017e6b5:
                _CFDictionaryAddValue(local_48,pcVar26,puVar23);
              }
              break;
            case -0x774d6eea:
              if (uVar13 == 2) {
                sVar9 = _uarpNtohs(*(undefined2 *)puVar31);
                puVar23 = local_50;
                if (sVar9 == 0) {
                  puVar23 = local_60;
                }
                pcVar26 = &cf_EPRO;
                goto LAB_0017e6b5;
              }
              break;
            case -0x774d6ee9:
              if (uVar13 == 2) {
                sVar9 = _uarpNtohs(*(undefined2 *)puVar31);
                puVar23 = local_50;
                if (sVar9 == 0) {
                  puVar23 = local_60;
                }
                pcVar26 = &cf_Trusted;
                goto LAB_0017e6b5;
              }
            }
            lVar30 = local_40;
            uVar15 = local_90;
            puVar31 = (undefined4 *)((long)puVar31 + uVar29);
            iVar10 = (iVar10 - uVar13) + -8;
          } while (iVar10 != 0);
          uVar25 = local_70;
          piVar28 = local_98;
          if (local_d8 != 0) {
            uVar19 = _CFStringCreateWithFormat(local_40,0,&cf______,local_90);
            uVar25 = local_70;
            _CFDictionaryAddValue(local_70,uVar19,local_48);
            _CFRelease(uVar19);
            piVar28 = local_98;
          }
        }
        break;
      case -0x774d6ee8:
        if (piVar28[1] == 1) {
          puVar23 = local_50;
          if (**(char **)(piVar28 + 2) == '\0') {
            puVar23 = local_60;
          }
          goto LAB_0017e758;
        }
        break;
      case -0x774d6ee5:
        if (piVar28[1] == 8) {
          local_38 = _uarpNtohll(**(undefined8 **)(piVar28 + 2));
          uVar19 = 4;
          goto LAB_0017e4e0;
        }
        break;
      default:
        if (iVar10 == -0x774d6ed9) {
          if ((piVar28[1] == 1) && (local_54 = local_54 & 0xff, **(char **)(piVar28 + 2) != '\0')) {
            local_54 = 1;
          }
        }
        else if (iVar10 == -0x774d6ecb) {
          uVar19 = _CFDataCreate(lVar30,*(undefined8 *)(piVar28 + 2),piVar28[1]);
          goto LAB_0017e505;
        }
      }
      piVar28 = *(int **)(piVar28 + 4);
    } while (piVar28 != (int *)0x0);
  }
  uVar19 = _CFStringCreateWithFormat(lVar30,0,&cf______,uVar15,&cf_Ticket);
  lVar21 = local_d0;
  *(undefined8 *)(local_d0 + 0x38) = uVar19;
  uVar19 = _CFStringCreateWithFormat(lVar30,0,&cf____,uVar19);
  _CFDictionaryAddValue(uVar25,uVar19,local_50);
  _CFRelease(uVar19);
  _CFRelease(uVar15);
  _CFRelease(local_80);
  _CFRelease(local_88);
  _CFRelease(local_c8);
  _CFRelease(local_c0);
  _CFRelease(local_b8);
  _CFRelease(local_b0);
  _CFRelease(local_a8);
  _CFRelease(local_a0);
  *(undefined8 *)(lVar21 + 0x30) = uVar25;
  if (*(code **)(local_78 + 0x38) != (code *)0x0) {
    (**(code **)(local_78 + 0x38))
              (*(undefined8 *)(local_78 + 0x798),local_68,*(undefined8 *)(local_68[0x25] + 0x30),
               "https://gs.apple.com:443",(undefined1)local_54);
  }
  return;
}

