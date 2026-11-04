// rea decompile_all
// name: _AMAuthInstallVinylPersonalizeFirmware
// address: 0x2a1603
// body: available
// range: 0x2a1603-0x2a1fd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a1fd4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallVinylPersonalizeFirmware
              (long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  cfstringStruct **ppcVar13;
  bool bVar14;
  undefined4 local_15c;
  undefined8 local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  ulong local_130;
  long local_128;
  long local_120;
  long local_118;
  int local_10c;
  long local_108;
  char local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_148 = 0;
  local_f9 = '\0';
  iVar2 = 1;
  local_140 = param_3;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_002a1dc7;
  if (*(long *)(*(long *)(param_1 + 0x30) + 0xa0) == 0) {
    iVar2 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallVinylPersonalizeFirmware",
                      "No eUICC ChipID specified. Not personalizing VinylFirmware at this time.");
    goto LAB_002a1dc7;
  }
  iVar2 = _AMAuthInstallVinylCreateMeasurements(param_1,param_2,&local_148,0);
  if ((iVar2 != 0) ||
     (iVar2 = _AMAuthInstallVinylIsLegacyChipId(param_1,&local_f9), lVar5 = local_148, iVar2 != 0))
  goto LAB_002a1dc7;
  local_128 = param_2;
  if (local_f9 == '\0') {
    local_150 = 0;
    local_f8 = &cf_euig;
    local_f0 = &cf_update_gold_profile_bin;
    local_e8 = &cf_update_gold_info_plist;
    local_c0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_b8 = &cf_vinyl_update_gold_ticket_der;
    local_b0 = &cf_EuiccGoldTicket;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = &cf_euim;
    local_90 = &cf_update_main_profile_bin;
    local_88 = &cf_update_main_info_plist;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = &cf_vinyl_update_main_ticket_der;
    local_50 = &cf_EuiccMainTicket;
    local_48 = 0;
    uStack_40 = 0;
    iVar2 = 1;
    if ((param_4 == (long *)0x0) || (local_130 = param_5, param_2 == 0)) {
LAB_002a1f60:
      lVar7 = 0;
      lVar6 = 0;
LAB_002a1f62:
      _SafeRelease(lVar7);
    }
    else {
      lVar6 = 0;
      lVar7 = 0;
      if (local_148 == 0) goto LAB_002a1f62;
      if ((*param_4 == 0) || (lVar6 = _CFDictionaryGetValue(*param_4,&cf_eUICC_Ticket), lVar6 == 0))
      {
        _AMAuthInstallLog(3,"_AMAuthInstallVinylPersonalizeFirmwareInternal",
                          "Vinyl server signing is enabled...");
        iVar2 = _AMAuthInstallVinylServerRequestAddRequiredTags(param_1,lVar5,local_130);
        if (iVar2 == 0) {
          iVar2 = _AMAuthInstallRequestSendSync(param_1,lVar5,&local_150);
          lVar5 = local_128;
          if (iVar2 == 0) {
            if (local_150 != 0) {
              lVar7 = _CFDictionaryGetValue(local_150,&cf_eUICC_Ticket);
              goto LAB_002a18ff;
            }
            iVar2 = 0xe;
          }
        }
        else if (iVar2 == 8) {
          iVar2 = 0;
          _AMAuthInstallLog(3,"_AMAuthInstallVinylPersonalizeFirmwareInternal",
                            "Nothing to sign, skipping..");
        }
LAB_002a1ed7:
        lVar6 = 0;
        lVar7 = 0;
        goto LAB_002a1f62;
      }
      lVar7 = _CFDictionaryGetValue(*param_4,&cf_eUICC_Ticket);
      lVar5 = local_128;
LAB_002a18ff:
      if (lVar7 == 0) {
        iVar2 = 0x11;
        goto LAB_002a1ed7;
      }
      lVar6 = _CFGetTypeID(lVar7);
      lVar8 = _CFDataGetTypeID();
      if (lVar6 != lVar8) {
        iVar2 = 0x11;
        goto LAB_002a1f60;
      }
      uVar10 = _CFDataGetBytePtr(lVar7);
      uVar4 = _CFDataGetLength(lVar7);
      _AMAuthInstallLogDumpMemory
                (8,"_AMAuthInstallVinylPersonalizeFirmwareInternal","EUICC,Ticket:",uVar10,uVar4);
      ppcVar13 = &local_f8;
      local_130 = local_130 & 0xffffffff00000000;
      local_118 = 0;
      local_120 = 0;
      local_108 = 0;
      bVar1 = true;
      local_138 = param_1;
      do {
        bVar14 = bVar1;
        lVar6 = *(long *)(param_1 + 0x30);
        ppcVar13[4] = *(cfstringStruct **)(lVar6 + 0x98);
        ppcVar13[5] = *(cfstringStruct **)(lVar6 + 0xa8);
        iVar2 = _BbfwReaderStart(lVar5,___AMAuthInstallVinylFwReaderInfoPlistCallback,ppcVar13);
        if ((iVar2 != 0) ||
           (iVar2 = _BbfwReaderStart(lVar5,___AMAuthInstallVinylFwReaderCallback,ppcVar13),
           iVar2 != 0)) {
          _AMAuthInstallLog(3,"_AMAuthInstallVinylPersonalizeFirmwareInternal",
                            "failed to read zip file");
          lVar6 = local_118;
          lVar9 = local_108;
          lVar8 = local_120;
          goto LAB_002a1d62;
        }
        ppcVar13[4] = (cfstringStruct *)0x0;
        ppcVar13[5] = (cfstringStruct *)0x0;
        lVar5 = local_128;
        if (ppcVar13[3] != (cfstringStruct *)0x0) {
          iVar2 = __AMAuthInstallVinylCreateIm4p(param_1,local_128,ppcVar13,ppcVar13 + 10);
          lVar6 = local_118;
          lVar9 = local_108;
          lVar8 = local_120;
          if (iVar2 != 0) goto LAB_002a1d62;
          _SafeRelease(local_108);
          uVar10 = _CFGetAllocator(param_1);
          lVar5 = _AMAuthInstallApImg4CreateStitchTicket(uVar10,ppcVar13[10],lVar7);
          if (lVar5 == 0) {
            lVar6 = local_118;
            lVar9 = 0;
            lVar8 = local_120;
            iVar2 = 3;
            goto LAB_002a1d62;
          }
          pcVar12 = ppcVar13[3];
          local_158 = 0;
          local_108 = _CFGetAllocator(param_1);
          lVar8 = _CFDataGetLength(lVar5);
          lVar9 = _CFDataGetLength(pcVar12);
          lVar6 = local_108;
          local_108 = lVar5;
          lVar5 = _CFDataCreateMutableCopy(lVar6,lVar8 + lVar9,lVar5);
          if (lVar5 == 0) {
LAB_002a1c70:
            lVar6 = 0;
LAB_002a1c73:
            bVar1 = false;
            local_10c = 2;
          }
          else {
            uVar10 = _CFDataGetBytePtr(pcVar12);
            uVar11 = _CFDataGetLength(pcVar12);
            _CFDataAppendBytes(lVar5,uVar10,uVar11);
            lVar6 = _DEREncoderCreate(1);
            if (lVar6 == 0) goto LAB_002a1c70;
            uVar10 = _CFDataGetBytePtr(lVar5);
            uVar4 = _CFDataGetLength(lVar5);
            _DEREncoderAddData(lVar6,0,0x10,uVar10,uVar4,1);
            iVar2 = _DEREncoderCreateEncodedBuffer(lVar6,&local_158,&local_15c);
            if (iVar2 == 0) {
              uVar10 = _CFGetAllocator(local_138);
              pcVar12 = (cfstringStruct *)_CFDataCreate(uVar10,local_158,local_15c);
              ppcVar13[0xb] = pcVar12;
              if (pcVar12 != (cfstringStruct *)0x0) {
                local_10c = 0;
                goto LAB_002a1b76;
              }
              goto LAB_002a1c73;
            }
            local_10c = 0;
            _AMAuthInstallLog(3,"_AMAuthInstallVinylStitchImg4Vad",
                              "failed to encode img4/vad sequence");
LAB_002a1b76:
            bVar1 = true;
          }
          _DEREncoderDestroy(lVar6);
          _SafeFree(local_158);
          _SafeRelease(lVar5);
          lVar5 = local_128;
          param_1 = local_138;
          lVar6 = local_118;
          lVar9 = local_108;
          lVar8 = local_120;
          iVar2 = local_10c;
          if (!bVar1) goto LAB_002a1d62;
          if ((int)local_130 == 0) {
            if ((local_140 != 0) && (local_120 = _BbfwWriterCreate(), local_120 == 0)) {
              _AMAuthInstallLog(3,"_AMAuthInstallVinylPersonalizeFirmwareInternal",
                                "failed to create output file");
              iVar2 = 4;
              lVar6 = local_118;
              lVar7 = local_108;
              goto LAB_002a1f62;
            }
            uVar10 = _CFGetAllocator(param_1);
            local_118 = _CFDictionaryCreateMutable
                                  (uVar10,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          }
          local_130 = CONCAT44(local_130._4_4_,(int)local_130 + 1);
          _CFDictionaryAddValue(local_118,ppcVar13[9],ppcVar13[0xb]);
          if ((local_140 != 0) &&
             (iVar2 = _BbfwWriterAddFile(local_120,ppcVar13[8],ppcVar13[0xb]), iVar2 != 0)) {
            lVar6 = local_118;
            lVar9 = local_108;
            lVar8 = local_120;
            iVar2 = 4;
            goto LAB_002a1d62;
          }
        }
        ppcVar13 = &local_98;
        bVar1 = false;
      } while (bVar14);
      if ((int)local_130 == 0) {
        uVar10 = _CFDataGetBytePtr(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98));
        uVar4 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98));
        _AMAuthInstallLogDumpMemory
                  (3,"_AMAuthInstallVinylPersonalizeFirmwareInternal",
                   "Error finding profile matching certId",uVar10,uVar4);
      }
      lVar6 = local_118;
      lVar8 = local_120;
      iVar2 = 0;
      if (local_118 == 0) {
        lVar6 = 0;
        lVar9 = local_108;
      }
      else {
        _SafeRelease(*param_4);
        uVar10 = _CFGetAllocator(param_1);
        lVar5 = _CFDictionaryCreateCopy(uVar10,lVar6);
        *param_4 = lVar5;
        lVar9 = local_108;
        if (lVar5 == 0) {
          iVar2 = 2;
        }
      }
LAB_002a1d62:
      _SafeRelease(lVar9);
      if (lVar8 != 0) {
        _BbfwWriterFinalize(lVar8);
      }
    }
    _SafeRelease(local_e0);
    _SafeRelease(local_a8);
    _SafeRelease(uStack_a0);
    _SafeRelease(local_80);
    _SafeRelease(local_48);
    _SafeRelease(uStack_40);
    _SafeRelease(local_150);
  }
  else {
    iVar2 = 1;
    if ((param_4 != (long *)0x0) && (local_148 != 0)) {
      if (*param_4 == 0) {
        iVar2 = 0xe;
      }
      else if (local_140 == 0) {
        iVar2 = 0;
        _AMAuthInstallLog(3,"_AMAuthInstallVinylPersonalizeLegacyFirmwareInternal",
                          "No dstURL provided. Running in restore environment?");
      }
      else {
        lVar5 = _BbfwWriterCreate();
        if (lVar5 == 0) {
          _AMAuthInstallLog(3,"_AMAuthInstallVinylPersonalizeLegacyFirmwareInternal",
                            "failed to create output file");
        }
        else {
          lVar6 = _BbfwReaderOpen(local_128);
          if (lVar6 != 0) {
            lVar7 = _CFDictionaryGetValue(*param_4,&cf_EuiccMainTicket);
            if (lVar7 == 0) {
LAB_002a1766:
              iVar2 = 0x11;
              lVar7 = _CFDictionaryGetValue(*param_4,&cf_EuiccGoldTicket);
              if (lVar7 == 0) {
                iVar2 = 0;
              }
              else {
                lVar8 = _CFDataGetTypeID();
                lVar9 = _CFGetTypeID(lVar7);
                if (lVar8 == lVar9) {
                  iVar3 = _BbfwWriterAddFile(lVar5,&cf_vinyl_update_gold_ticket_der,lVar7);
                  iVar2 = 0;
                  if (iVar3 != 0) goto LAB_002a17c4;
                }
              }
            }
            else {
              lVar8 = _CFDataGetTypeID();
              lVar9 = _CFGetTypeID(lVar7);
              if (lVar8 == lVar9) {
                iVar2 = _BbfwWriterAddFile(lVar5,&cf_vinyl_update_main_ticket_der,lVar7);
                if (iVar2 == 0) goto LAB_002a1766;
LAB_002a17c4:
                iVar2 = 4;
              }
              else {
                iVar2 = 0x11;
              }
            }
            _BbfwWriterFinalize(lVar5);
            _BbfwReaderClose(lVar6);
            goto LAB_002a1d47;
          }
          _BbfwWriterFinalize(lVar5);
        }
        iVar2 = 4;
      }
    }
LAB_002a1d47:
    _SafeRelease(0);
    _SafeRelease(0);
    lVar6 = 0;
  }
  _SafeRelease(lVar6);
LAB_002a1dc7:
  _SafeRelease(local_148);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

