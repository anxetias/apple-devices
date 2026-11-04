// rea decompile_all
// name: _AMAuthInstallApImg4CreateMeasurementsWithTag
// address: 0x2778ea
// body: available
// range: 0x2778ea-0x2782ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2782e9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4CreateMeasurementsWithTag
              (undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined1 local_188 [24];
  long local_170;
  undefined8 local_168;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined4 local_10c;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  int local_dc;
  undefined1 local_d8 [96];
  long local_78;
  undefined8 local_70;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_f0 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_e8 = 0;
  local_dc = 1;
  local_10c = param_4;
  if (param_2 == 0) {
LAB_00278161:
    local_e8 = 0;
    lVar9 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar3 = 0;
    goto LAB_00277e48;
  }
  lVar9 = 0;
  lVar4 = 0;
  lVar5 = 0;
  lVar3 = 0;
  local_108 = param_3;
  local_100 = param_1;
  if (param_5 == (undefined8 *)0x0) goto LAB_00277e48;
  local_158 = param_5;
  lVar3 = _CFURLCopyFileSystemPath(param_2,0);
  local_dc = 2;
  if (lVar3 == 0) goto LAB_00278161;
  lVar4 = _CFStringFind(lVar3,&cf__,0);
  uVar7 = local_100;
  if (lVar4 != -1) {
    local_118 = lVar3;
    lVar4 = _CFStringCreateArrayBySeparatingStrings(local_100,lVar3,&cf__);
    lVar5 = local_108;
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar3 = _CFArrayGetValueAtIndex(lVar4,0);
      if (lVar3 != 0) {
        if (lVar5 == 0) {
          lVar5 = _AMAuthInstallApImg4GetTypeForEntryName(lVar3);
          if (lVar5 == 0) goto LAB_002781e9;
          lVar3 = _CFStringCompare(lVar5,lVar3,0);
          if ((((lVar3 == 0) && (lVar3 = _CFStringCompare(lVar5,&cf_ftap,0), lVar3 != 0)) &&
              (lVar3 = _CFStringCompare(lVar5,&cf_rfta,0), lVar3 != 0)) &&
             (lVar3 = _CFStringCompare(lVar5,&cf_ftsp,0), lVar3 != 0)) {
            lVar3 = _CFStringCompare(lVar5,&cf_rfts,0);
            if (lVar3 != 0) {
              lVar5 = 0;
            }
          }
        }
        lVar3 = _CFArrayGetValueAtIndex(lVar4,1);
        if (lVar3 != 0) {
          local_f8 = lVar4;
          lVar9 = _CFURLCreateWithFileSystemPath
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar3,0,0);
          lVar3 = local_118;
          if (lVar9 == 0) {
            local_e8 = 0;
            lVar9 = 0;
            lVar5 = 0;
            lVar4 = local_f8;
            goto LAB_00277e48;
          }
          goto LAB_00277ab2;
        }
      }
LAB_002781e9:
      local_dc = 8;
    }
    local_e8 = 0;
    lVar9 = 0;
    lVar5 = 0;
    lVar3 = local_118;
    goto LAB_00277e48;
  }
  lVar9 = _CFRetain(param_2);
  local_f8 = 0;
  uVar7 = local_100;
  lVar5 = local_108;
LAB_00277ab2:
  if (lVar5 != 0) {
    _CFStringGetCString(lVar5,local_d8,0x20,0x8000100);
    iVar2 = _AMAuthInstallSupportCreateDataFromMappedFileURL(uVar7,&local_f0,lVar9);
    if (iVar2 == 0) {
      iVar2 = _AMAuthInstallApImg4ReCreatePayloadWithProperties
                        (local_d8,0,local_f0,0,0,0,0,&local_128);
      if (iVar2 == 0) {
        _AMSupportSafeRelease(local_f0);
        local_f0 = 0;
        iVar2 = _AMAuthInstallCryptoCreateDigestForDataType(uVar7,local_128,&local_130,local_10c);
        if (iVar2 != 1) {
          lVar5 = _AMSupportSafeRetain(lVar5);
          _AMSupportSafeRelease(local_128);
          local_128 = 0;
          goto LAB_00277be9;
        }
        pcVar8 = "Unsupported digestType";
        local_dc = 1;
      }
      else {
        pcVar8 = "failed to create im4p with override tag";
        local_dc = iVar2;
      }
      _AMAuthInstallLog(3,"AMAuthInstallApImg4CreateMeasurementsWithTag",pcVar8);
      iVar2 = local_dc;
    }
    local_dc = iVar2;
    local_e8 = 0;
    lVar5 = 0;
    lVar4 = local_f8;
    goto LAB_00277e48;
  }
  iVar2 = _AMAuthInstallSupportCreateDataFromMappedFileURL(uVar7,&local_f0,lVar9);
  if (iVar2 == 0) {
    lVar5 = _AMAuthInstallApImg4CopyPayloadType(uVar7,local_f0);
  }
  else {
    lVar5 = 0;
  }
  _AMAuthInstallCryptoCreateDigestForDataType(uVar7,local_f0,&local_130,local_10c);
  if (local_130 == 0) {
    local_e8 = 0;
    local_dc = 3;
    _AMAuthInstallLog(3,"AMAuthInstallApImg4CreateMeasurementsWithTag",
                      "failed to create digest for %@ with error %d",lVar9,3);
    lVar4 = local_f8;
    goto LAB_00277e48;
  }
  _AMSupportSafeRelease(local_f0);
  local_f0 = 0;
LAB_00277be9:
  if (local_130 == 0) {
    pcVar8 = "created digest is NULL";
  }
  else {
    lVar4 = _CFDictionaryCreateMutable
                      (uVar7,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar4 != 0) {
      _CFDictionarySetValue(lVar4,&cf_Digest,local_130);
      local_108 = lVar5;
      local_e8 = lVar4;
      if (lVar5 != 0) {
        lVar6 = _CFStringCompare(lVar5,&cf_sepi,0);
        if (lVar6 == 0) {
          iVar2 = _AMAuthInstallApImg4CopyPayloadVersionProperty(uVar7,lVar9,1,&local_120);
          if (iVar2 != 0) {
            pcVar8 = "could not get tbms property, status:%d\n";
            goto LAB_00277cd6;
          }
LAB_00277d28:
          _CFDictionarySetValue(lVar4,&cf_TBMDigests,local_120);
        }
        else {
          lVar5 = _CFStringCompare(lVar5,&cf_rsep,0);
          if (lVar5 == 0) {
            iVar2 = _AMAuthInstallApImg4CopyPayloadVersionProperty(uVar7,lVar9,2,&local_120);
            if (iVar2 == 0) goto LAB_00277d28;
            pcVar8 = "could not get tbmr property, status:%d\n";
LAB_00277cd6:
            _AMAuthInstallLog(3,"AMAuthInstallApImg4CreateMeasurementsWithTag",pcVar8,iVar2);
          }
        }
        local_138 = 0;
        local_140 = 0;
        if (lVar9 == 0) {
          iVar2 = 1;
LAB_0027829c:
          uVar7 = 0;
        }
        else {
          iVar2 = _AMAuthInstallApImg4CopyPayload(uVar7,lVar9,&local_138);
          if (iVar2 != 0) goto LAB_0027829c;
          local_150 = _CFDataGetBytePtr(local_138);
          local_148 = _CFDataGetLength(local_138);
          ___bzero(local_d8,0xa0);
          iVar2 = _DERImg4DecodePayloadWithProperties(&local_150,local_d8);
          lVar5 = local_108;
          if (iVar2 == 0) {
            if (local_78 == 0) {
              uVar7 = 0;
              goto LAB_00277de7;
            }
            lVar6 = _CFStringCompare(local_108,&cf_sepi,0);
            if (lVar6 == 0) {
              iVar2 = _AMAuthInstallApImg4DecodePayloadProperty
                                (&local_150,0xe000000074626d73,local_188);
              if ((iVar2 != 0) || (local_170 == 0)) {
                pcVar8 = "could not get tbms payload property, status:%d\n";
LAB_002782b2:
                _AMAuthInstallLog(3,"AMAuthInstallCopyPayloadPropertiesToMeasurementDictionary",
                                  pcVar8,0x17);
                goto LAB_00278030;
              }
LAB_00277ff7:
              lVar5 = _CFDataCreate(local_100,local_170,local_168);
              if (lVar5 != 0) {
                _CFDictionarySetValue(lVar4,&cf_TBMDigests,lVar5);
                _SafeRelease(lVar5);
                goto LAB_00278030;
              }
LAB_002782c4:
              uVar7 = 0;
            }
            else {
              lVar5 = _CFStringCompare(lVar5,&cf_rsep,0);
              if (lVar5 == 0) {
                iVar2 = _AMAuthInstallApImg4DecodePayloadProperty
                                  (&local_150,0xe000000074626d72,local_188);
                if ((iVar2 != 0) || (local_170 == 0)) {
                  pcVar8 = "could not get tbmr payload property, status:%d\n";
                  goto LAB_002782b2;
                }
                goto LAB_00277ff7;
              }
LAB_00278030:
              iVar2 = _AMAuthInstallApImg4DecodePayloadProperty
                                (&local_150,0xe00000006d6d6170,local_188);
              if ((iVar2 == 0) && (local_170 != 0)) {
                lVar5 = _CFDataCreate(local_100,local_170,local_168);
                if (lVar5 == 0) goto LAB_002782c4;
                _CFDictionarySetValue(lVar4,&cf_MemoryMap,lVar5);
                _SafeRelease(lVar5);
              }
              iVar2 = _AMAuthInstallApImg4DecodePayloadProperty
                                (&local_150,0xe000000072646467,local_188);
              if (local_170 != 0 && iVar2 == 0) {
                lVar5 = _CFDataCreate(local_100,local_170,local_168);
                if (lVar5 == 0) goto LAB_002782c4;
                _CFDictionarySetValue(lVar4,&cf_RawDataDigest,lVar5);
                _SafeRelease(lVar5);
              }
              uVar1 = local_100;
              uVar7 = _CFDataCreate(local_100,local_78,local_70);
              _AMAuthInstallCryptoCreateDigestForDataType(uVar1,uVar7,&local_140,local_10c);
              if (local_140 != 0) {
                _CFDictionarySetValue(lVar4,&cf_ObjectPayloadPropertyDigest);
                goto LAB_00277de7;
              }
              _AMAuthInstallLog(3,"AMAuthInstallCopyPayloadPropertiesToMeasurementDictionary",
                                "created digest is NULL");
            }
            iVar2 = 2;
          }
          else {
            uVar7 = 0;
            _AMAuthInstallLog(7,"AMAuthInstallCopyPayloadPropertiesToMeasurementDictionary",
                              "failed to decode img4 payload with properties (error=%d), assuming no properties"
                              ,iVar2);
LAB_00277de7:
            iVar2 = 0;
          }
        }
        _SafeRelease(local_140);
        _SafeRelease(uVar7);
        _SafeRelease(0);
        _SafeRelease(local_138);
        if (iVar2 != 0) {
          local_dc = iVar2;
          _AMAuthInstallLog(3,"AMAuthInstallApImg4CreateMeasurementsWithTag",
                            "failed to copy payload properties to measurement dictionary.");
          lVar4 = local_f8;
          lVar5 = local_108;
          goto LAB_00277e48;
        }
      }
      uVar7 = _CFRetain(lVar4);
      *local_158 = uVar7;
      local_dc = 0;
      lVar4 = local_f8;
      lVar5 = local_108;
      goto LAB_00277e48;
    }
    pcVar8 = "failed to create mutable dict measurementDict";
  }
  local_e8 = 0;
  _AMAuthInstallLog(3,"AMAuthInstallApImg4CreateMeasurementsWithTag",pcVar8);
  lVar4 = local_f8;
LAB_00277e48:
  _AMSupportSafeRelease(local_f0);
  _AMSupportSafeRelease(local_130);
  _AMSupportSafeRelease(local_120);
  _AMSupportSafeRelease(lVar5);
  _AMSupportSafeRelease(local_e8);
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(lVar4);
  _AMSupportSafeRelease(lVar9);
  _AMSupportSafeRelease(local_128);
  _AMSupportSafeRelease(0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_dc;
}

