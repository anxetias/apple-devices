// rea decompile_all
// name: _CreateYonkersRequestDictForTATSU
// address: 0x2a7d3e
// body: available
// range: 0x2a7d3e-0x2a83ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _CreateYonkersRequestDictForTATSU
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  byte bVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  int local_64;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  uint local_38;
  byte local_31;
  
  puVar3 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  puVar2 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
  local_50 = 0;
  local_64 = 0;
  auVar19._0_4_ = -(uint)((int)((ulong)param_1 >> 0x20) == 0 && (int)param_1 == 0);
  auVar19._4_4_ = -(uint)((int)param_2 == 0 && (int)((ulong)param_2 >> 0x20) == 0);
  auVar19._8_4_ = -(uint)((int)((ulong)param_3 >> 0x20) == 0 && (int)param_3 == 0);
  auVar19._12_4_ = -(uint)((int)param_4 == 0 && (int)((ulong)param_4 >> 0x20) == 0);
  iVar11 = movmskps((int)param_4,auVar19);
  if (iVar11 != 0) {
    return 2;
  }
  if (param_5 == (undefined8 *)0x0) {
    return 2;
  }
  local_48 = param_1;
  lVar5 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar6 = _CFDictionaryCreateMutable(0,0,puVar2,puVar3);
  local_38 = 3;
  local_58 = lVar6;
  local_40 = lVar5;
  if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_002a8391;
  local_60 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
  _CFDictionaryAddValue(lVar6,&cf__Yonkers_Ticket);
  lVar5 = _CFDictionaryGetValue(param_2,&cf_Yonkers_BoardID);
  local_38 = 0x11;
  if (lVar5 != 0) {
    lVar7 = _CFGetTypeID(lVar5);
    lVar8 = _CFNumberGetTypeID();
    if (lVar7 == lVar8) {
      _CFDictionaryAddValue(lVar6,&cf_Yonkers_BoardID,lVar5);
      lVar5 = _CFDictionaryGetValue(param_2,&cf_Yonkers_PatchEpoch);
      if (lVar5 != 0) {
        lVar7 = _CFGetTypeID(lVar5);
        lVar8 = _CFNumberGetTypeID();
        if (lVar7 == lVar8) {
          _CFDictionaryAddValue(lVar6,&cf_Yonkers_PatchEpoch,lVar5);
          lVar5 = _CFDictionaryGetValue(local_48,&cf_Yonkers_ChipID);
          if (lVar5 != 0) {
            lVar7 = _CFGetTypeID(lVar5);
            lVar8 = _CFNumberGetTypeID();
            if (lVar7 == lVar8) {
              _CFDictionaryAddValue(lVar6,&cf_Yonkers_ChipID,lVar5);
              _CFNumberGetValue(lVar5,3,&local_64);
              lVar5 = _CFDictionaryGetValue(local_48,&cf_Yonkers_ProductionMode);
              if (lVar5 != 0) {
                lVar7 = _CFGetTypeID(lVar5);
                lVar8 = _CFBooleanGetTypeID();
                if (lVar7 == lVar8) {
                  local_31 = _CFBooleanGetValue(lVar5);
                  if (local_31 == 0) {
                    local_60 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
                  }
                  _CFDictionaryAddValue(lVar6,&cf_Yonkers_ProductionMode,local_60);
                  lVar5 = _CFDictionaryGetValue(local_48,&cf_YonkersIsProvisioned);
                  bVar17 = true;
                  bVar16 = true;
                  if (lVar5 != 0) {
                    lVar6 = _CFGetTypeID(lVar5);
                    lVar7 = _CFBooleanGetTypeID();
                    if (lVar6 == lVar7) {
                      cVar4 = _CFBooleanGetValue(lVar5);
                      bVar16 = cVar4 != '\0';
                    }
                  }
                  lVar5 = _CFDictionaryGetValue(local_48,&cf_YonkersIsYmgt);
                  if (lVar5 != 0) {
                    lVar6 = _CFGetTypeID(lVar5);
                    lVar7 = _CFBooleanGetTypeID();
                    if (lVar6 == lVar7) {
                      cVar4 = _CFBooleanGetValue(lVar5);
                      bVar17 = cVar4 == '\0';
                    }
                  }
                  lVar5 = _CFDictionaryGetValue(local_48,&cf_Yonkers_WriteECID);
                  if (lVar5 == 0) {
LAB_002a8025:
                    bVar18 = false;
                  }
                  else {
                    lVar6 = _CFGetTypeID(lVar5);
                    lVar7 = _CFBooleanGetTypeID();
                    if (lVar6 != lVar7) goto LAB_002a8025;
                    cVar4 = _CFBooleanGetValue(lVar5);
                    bVar18 = cVar4 != '\0';
                  }
                  lVar5 = _CFDictionaryGetValue(local_48,&cf_Yonkers_ECID);
                  if (lVar5 != 0) {
                    lVar6 = _CFGetTypeID(lVar5);
                    lVar7 = _CFDataGetTypeID();
                    if (lVar6 == lVar7) {
                      _CFDictionaryAddValue(local_58,&cf_Yonkers_ECID,lVar5);
                      lVar5 = _CFDictionaryGetValue(local_48,&cf_Yonkers_Nonce);
                      if (lVar5 != 0) {
                        lVar6 = _CFGetTypeID(lVar5);
                        lVar7 = _CFDataGetTypeID();
                        if (lVar6 == lVar7) {
                          _CFDictionaryAddValue(local_58,&cf_Yonkers_Nonce,lVar5);
                          iVar11 = _GetYonkersMeasurementTags(local_48,&local_50);
                          if (((iVar11 == 0) && (local_50 != 0)) &&
                             (lVar5 = _CFDictionaryGetValue(param_3,&cf_MeasurementDictPatch),
                             lVar5 != 0)) {
                            lVar6 = _CFGetTypeID(lVar5);
                            lVar7 = _CFDictionaryGetTypeID();
                            if (lVar6 == lVar7) {
                              _CFDictionaryAddValue(lVar5,&cf_EPRO,local_60);
                              uVar9 = _CFDictionaryGetValue(local_48,&cf_Yonkers_FabRevision);
                              _CFDictionaryAddValue(lVar5,&cf_FabRevision,uVar9);
                              _CFDictionaryAddValue(local_58,local_50,lVar5);
                              if (!(bool)(bVar16 | bVar18)) {
                                _CFDictionaryRemoveValue(local_58,local_50);
                                if (local_64 == 0x514) {
                                  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
                                  uVar15 = (ulong)((uint)(bVar17 ^ 1U) * 4);
                                  uVar14 = uVar15 + 4;
                                  puVar13 = (undefined4 *)
                                            (&DAT_003b4a20 + (ulong)(bVar17 ^ 1U) * 0x10);
                                  local_38 = (uint)local_31;
                                  do {
                                    uVar1 = *puVar13;
                                    iVar11 = _GetYonkersFabRevisionTags(uVar1,local_38,&local_50);
                                    if ((iVar11 != 0) || (local_50 == 0)) goto LAB_002a83c2;
                                    uVar10 = _CFDictionaryGetValue(param_3,&cf_MeasurementDictPatch)
                                    ;
                                    lVar5 = _CFDictionaryCreateMutableCopy(uVar9,0,uVar10);
                                    if (lVar5 == 0) goto LAB_002a83c2;
                                    lVar6 = _CFGetTypeID(lVar5);
                                    lVar7 = _CFDictionaryGetTypeID();
                                    if (lVar6 != lVar7) goto LAB_002a83c2;
                                    _CFDictionarySetValue(lVar5,&cf_EPRO,local_60);
                                    _SavageCFDictionarySetInteger32(lVar5,&cf_FabRevision,uVar1);
                                    _CFDictionarySetValue(local_58,local_50,lVar5);
                                    _CFRelease(lVar5);
                                    uVar15 = uVar15 + 1;
                                    puVar13 = puVar13 + 1;
                                  } while (uVar15 < uVar14);
                                }
                                else if (local_64 == 0x414) {
                                  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
                                  bVar12 = bVar17 ^ 1;
                                  uVar14 = (ulong)((uint)bVar12 * 4);
                                  puVar13 = (undefined4 *)(&DAT_003b4a00 + (ulong)bVar12 * 0x10);
                                  local_38 = (uint)local_31;
                                  do {
                                    uVar1 = *puVar13;
                                    iVar11 = _GetYonkersFabRevisionTags(uVar1,local_38,&local_50);
                                    if ((iVar11 != 0) || (local_50 == 0)) goto LAB_002a83c2;
                                    uVar10 = _CFDictionaryGetValue(param_3,&cf_MeasurementDictPatch)
                                    ;
                                    lVar5 = _CFDictionaryCreateMutableCopy(uVar9,0,uVar10);
                                    if (lVar5 == 0) goto LAB_002a83c2;
                                    lVar6 = _CFGetTypeID(lVar5);
                                    lVar7 = _CFDictionaryGetTypeID();
                                    if (lVar6 != lVar7) goto LAB_002a83c2;
                                    _CFDictionarySetValue(lVar5,&cf_EPRO,local_60);
                                    _SavageCFDictionarySetInteger32(lVar5,&cf_FabRevision,uVar1);
                                    _CFDictionarySetValue(local_58,local_50,lVar5);
                                    _CFRelease(lVar5);
                                    uVar14 = uVar14 + 1;
                                    puVar13 = puVar13 + 1;
                                  } while (uVar14 < (ulong)bVar12 * 2 + 4);
                                }
                              }
                              lVar5 = local_58;
                              _YonkersAddEntitlementsToTATSURequestDict(local_48,local_58);
                              uVar9 = _SavageSafeRetain(lVar5);
                              *param_5 = uVar9;
                              local_38 = 0;
                              goto LAB_002a8391;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_002a8399:
  _CFRelease(local_40);
LAB_002a83a2:
  if (local_58 != 0) {
    _CFRelease();
  }
  return local_38;
LAB_002a83c2:
  local_38 = 0x11;
LAB_002a8391:
  if (local_40 == 0) goto LAB_002a83a2;
  goto LAB_002a8399;
}

