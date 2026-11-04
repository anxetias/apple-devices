// rea decompile_all
// name: _AMAuthInstallBasebandSetParametersWithUpdaterOutput
// address: 0x1a3bed
// body: available
// range: 0x1a3bed-0x1a4b05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a4b01 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandSetParametersWithUpdaterOutput(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int *piVar14;
  long unaff_RBX;
  int *piVar15;
  undefined4 local_80;
  uint local_7c;
  long local_78;
  int *local_70;
  ulong local_68;
  undefined8 local_60 [4];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_78 = param_1;
  if (param_1 == 0) {
    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_45();
LAB_001a4936:
    iVar7 = 1;
    piVar15 = (int *)0x0;
  }
  else {
    if (param_2 == 0) {
      _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_44();
      goto LAB_001a4936;
    }
    lVar8 = _CFGetTypeID(param_2);
    lVar9 = _CFDictionaryGetTypeID();
    if (lVar8 != lVar9) {
      _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_1();
      goto LAB_001a4936;
    }
    _AMAuthInstallLog(7,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                      "baseband updater output: %@",param_2);
    local_70 = *(int **)(param_1 + 0x30);
    puVar10 = _calloc(1,0xb0);
    if (puVar10 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      iVar7 = 2;
      piVar15 = local_70;
    }
    else {
      puVar10[0x14] = 0;
      puVar10[0x15] = 0;
      puVar10[0x12] = 0;
      puVar10[0x13] = 0;
      puVar10[0x10] = 0;
      puVar10[0x11] = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined8 **)(param_1 + 0x30) = puVar10;
      lVar8 = _CFDictionaryGetValue(param_2,&cf_ManifestInfo);
      if (lVar8 == 0) {
        _AMAuthInstallLog(6,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                          "manifest dict not found");
LAB_001a3ee3:
        lVar8 = _CFDictionaryGetValue(param_2,&cf_VendorID);
        if (lVar8 == 0) {
          **(undefined4 **)(param_1 + 0x30) = 2;
LAB_001a3f37:
          lVar8 = _CFDictionaryGetValue(param_2,&cf_ChipID);
          if (lVar8 != 0) {
            unaff_RBX = _CFGetTypeID(lVar8);
            lVar9 = _CFNumberGetTypeID();
            if (unaff_RBX != lVar9) {
              _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_15();
              goto LAB_001a4acf;
            }
            iVar7 = _AMAuthInstallSupportGetUInt32(lVar8,*(long *)(param_1 + 0x30) + 4);
            if (iVar7 != 0) {
              _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_16();
              goto LAB_001a4a91;
            }
          }
          lVar8 = _CFDictionaryGetValue(param_2,&cf_CertID);
          if ((lVar8 != 0) ||
             (lVar8 = _CFDictionaryGetValue(param_2,&cf_GoldCertID), param_1 = local_78, lVar8 != 0)
             ) {
            unaff_RBX = _CFGetTypeID(lVar8);
            lVar9 = _CFNumberGetTypeID();
            if (unaff_RBX != lVar9) {
              _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_17();
              goto LAB_001a4acf;
            }
            iVar7 = _AMAuthInstallSupportGetUInt32(lVar8,*(long *)(param_1 + 0x30) + 8);
            if (iVar7 != 0) {
              _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_18();
              piVar15 = local_70;
              goto LAB_001a4ad9;
            }
          }
          lVar9 = _CFDictionaryGetValue(param_2,&cf_FusingStatus);
          lVar8 = local_78;
          if (lVar9 != 0) {
            unaff_RBX = _CFGetTypeID(lVar9);
            lVar11 = _CFNumberGetTypeID();
            if (unaff_RBX != lVar11) {
              _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_19();
              goto LAB_001a4acf;
            }
            iVar7 = _AMAuthInstallSupportGetUInt32(lVar9,*(long *)(lVar8 + 0x30) + 0x60);
            if (iVar7 != 0) {
              _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_20();
              goto LAB_001a4a91;
            }
          }
          lVar9 = _CFDictionaryGetValue(param_2,&cf_ChipSerialNo);
          if (lVar9 == 0) {
LAB_001a40d7:
            lVar9 = _CFDictionaryGetValue(param_2,&cf_ProvisioningManifest);
            if (lVar9 != 0) {
              unaff_RBX = _CFGetTypeID(lVar9);
              lVar11 = _CFDataGetTypeID();
              if (unaff_RBX != lVar11) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_22();
                goto LAB_001a4acf;
              }
              _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x70));
              uVar13 = _CFRetain(lVar9);
              *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x70) = uVar13;
            }
            lVar9 = _CFDictionaryGetValue(param_2,&cf_Nonce);
            if (lVar9 == 0) {
LAB_001a4182:
              lVar9 = _CFDictionaryGetValue(param_2,&cf_provisioning);
              if (lVar9 != 0) {
                lVar11 = _CFDictionaryGetValue(lVar9,&cf_MEID);
                if (lVar11 != 0) {
                  unaff_RBX = _CFGetTypeID(lVar11);
                  lVar12 = _CFStringGetTypeID();
                  if (unaff_RBX != lVar12) {
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_25();
                    goto LAB_001a4acf;
                  }
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                  uVar13 = _CFRetain(lVar11);
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20) = uVar13;
                }
                lVar11 = _CFDictionaryGetValue(lVar9,&cf_IMEI);
                if (lVar11 != 0) {
                  unaff_RBX = _CFGetTypeID(lVar11);
                  lVar12 = _CFStringGetTypeID();
                  if (unaff_RBX != lVar12) {
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_26();
                    goto LAB_001a4acf;
                  }
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x28));
                  uVar13 = _CFRetain(lVar11);
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x28) = uVar13;
                }
                lVar11 = _CFDictionaryGetValue(lVar9,&cf_IMEI2);
                if (lVar11 != 0) {
                  unaff_RBX = _CFGetTypeID(lVar11);
                  lVar12 = _CFStringGetTypeID();
                  if (unaff_RBX != lVar12) {
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_27();
                    goto LAB_001a4acf;
                  }
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x30));
                  uVar13 = _CFRetain(lVar11);
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x30) = uVar13;
                }
                lVar11 = _CFDictionaryGetValue(lVar9,&cf_EID);
                if (lVar11 != 0) {
                  unaff_RBX = _CFGetTypeID(lVar11);
                  lVar12 = _CFStringGetTypeID();
                  if (unaff_RBX != lVar12) {
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_28();
                    goto LAB_001a4acf;
                  }
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x38));
                  uVar13 = _CFRetain(lVar11);
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x38) = uVar13;
                }
                lVar11 = _CFDictionaryGetValue(lVar9,&cf_EncryptedSessionKey);
                if (lVar11 != 0) {
                  unaff_RBX = _CFGetTypeID(lVar11);
                  lVar12 = _CFDataGetTypeID();
                  if (unaff_RBX != lVar12) {
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_29();
                    goto LAB_001a4acf;
                  }
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x48));
                  uVar13 = _CFRetain(lVar11);
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x48) = uVar13;
                }
                lVar9 = _CFDictionaryGetValue(lVar9,&cf_CarrierID);
                if (lVar9 != 0) {
                  unaff_RBX = _CFGetTypeID(lVar9);
                  lVar11 = _CFStringGetTypeID();
                  if (unaff_RBX != lVar11) {
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_30();
                    goto LAB_001a4acf;
                  }
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x68));
                  uVar13 = _CFRetain(lVar9);
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x68) = uVar13;
                }
              }
              lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCCSN);
              if (lVar9 == 0) {
LAB_001a43d5:
                lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCMainNonce);
                if (lVar9 == 0) {
LAB_001a4439:
                  lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCGoldNonce);
                  if (lVar9 == 0) {
LAB_001a449d:
                    lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCTicketVersion);
                    if (lVar9 != 0) {
                      unaff_RBX = _CFGetTypeID(lVar9);
                      lVar11 = _CFNumberGetTypeID();
                      if (unaff_RBX != lVar11) {
                        _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_37();
                        goto LAB_001a4acf;
                      }
                      _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x90));
                      uVar13 = _CFRetain(lVar9);
                      *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x90) = uVar13;
                    }
                    lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCChipID);
                    if (lVar9 != 0) {
                      unaff_RBX = _CFGetTypeID(lVar9);
                      lVar11 = _CFNumberGetTypeID();
                      if (unaff_RBX != lVar11) {
                        _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_38();
                        goto LAB_001a4acf;
                      }
                      _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0xa0));
                      uVar13 = _CFRetain(lVar9);
                      *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0xa0) = uVar13;
                    }
                    lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCCertIdentifier);
                    if (lVar9 == 0) {
LAB_001a45a7:
                      lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCFirmwareLoaderVersion);
                      piVar15 = local_70;
                      if (lVar9 == 0) {
                        piVar14 = *(int **)(lVar8 + 0x30);
                        if (piVar14 != (int *)0x0) {
LAB_001a4623:
                          if (piVar15 == (int *)0x0) {
                            iVar7 = 0;
                            _AMAuthInstallLog(5,"_AMAuthInstallBasebandCheckForParameterChange",
                                              "bbParameters is now non-NULL");
                            piVar15 = (int *)0x0;
                          }
                          else {
                            iVar3 = *piVar15;
                            iVar7 = *piVar14;
                            if (iVar3 != iVar7) {
                              _AMAuthInstallLog(4,"_AMAuthInstallBasebandCheckForParameterChange",
                                                "vendorID changed");
                              piVar14 = *(int **)(lVar8 + 0x30);
                            }
                            iVar4 = piVar15[1];
                            iVar1 = piVar14[1];
                            if (iVar4 != iVar1) {
                              _AMAuthInstallLog(4,"_AMAuthInstallBasebandCheckForParameterChange",
                                                "chipID changed");
                              piVar14 = *(int **)(lVar8 + 0x30);
                            }
                            iVar5 = piVar15[2];
                            iVar2 = piVar14[2];
                            if (iVar5 != iVar2) {
                              _AMAuthInstallLog(4,"_AMAuthInstallBasebandCheckForParameterChange",
                                                "goldCertID changed");
                              piVar14 = *(int **)(lVar8 + 0x30);
                            }
                            lVar9 = _AMAuthInstallSupportCFDataCompare
                                              (*(undefined8 *)(piVar15 + 4),
                                               *(undefined8 *)(piVar14 + 4));
                            if (lVar9 != 0) {
                              _AMAuthInstallLog(4,"_AMAuthInstallBasebandCheckForParameterChange",
                                                "snum changed");
                            }
                            lVar11 = _AMAuthInstallSupportCFDataCompare
                                               (*(undefined8 *)(piVar15 + 6),
                                                *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x18));
                            if (lVar11 != 0) {
                              _AMAuthInstallLog(4,"_AMAuthInstallBasebandCheckForParameterChange",
                                                "nonce changed");
                            }
                            local_68 = *(ulong *)(piVar15 + 0x1e);
                            lVar8 = *(long *)(lVar8 + 0x30);
                            local_60[0] = *(undefined8 *)(lVar8 + 0x78);
                            local_60[1] = *(undefined8 *)(piVar15 + 0x20);
                            local_60[2] = *(undefined8 *)(lVar8 + 0x80);
                            local_60[3] = *(undefined8 *)(piVar15 + 0x26);
                            local_40 = *(undefined8 *)(lVar8 + 0x98);
                            uVar13 = CONCAT71((int7)((ulong)unaff_RBX >> 8),
                                              lVar11 == 0 &&
                                              (lVar9 == 0 &&
                                              (iVar5 == iVar2 && (iVar4 == iVar1 && iVar3 == iVar7))
                                              ));
                            lVar8 = 0;
                            do {
                              local_7c = (uint)uVar13;
                              puVar10 = local_60 + lVar8 * 2;
                              lVar9 = lVar8;
                              while (lVar8 = _AMAuthInstallSupportCFDataCompare
                                                       (puVar10[-1],*puVar10), lVar8 == 0) {
                                lVar8 = lVar9 + 1;
                                _AMAuthInstallLog(4,"_AMAuthInstallBasebandCheckForParameterChange",
                                                  "eUICC Param %d unchanged",lVar9);
                                puVar10 = puVar10 + 2;
                                lVar9 = lVar8;
                                if (lVar8 == 3) {
                                  if ((local_7c & 1) != 0) goto LAB_001a4832;
                                  goto LAB_001a480a;
                                }
                              }
                              uVar13 = 0;
                              _AMAuthInstallLog(4,"_AMAuthInstallBasebandCheckForParameterChange",
                                                "eUICC Param %d changed",lVar9);
                              lVar8 = lVar9 + 1;
                            } while (lVar9 != 2);
LAB_001a480a:
                            _AMAuthInstallLog(4,
                                              "AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                              "bbParameters changed, triggering bbfw re-personalization"
                                             );
                            *(undefined1 *)(local_78 + 0xe0) = 1;
LAB_001a4832:
                            iVar7 = 0;
                            piVar15 = local_70;
                          }
                          goto LAB_001a4836;
                        }
                        _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_43(&local_68);
                      }
                      else {
                        unaff_RBX = _CFGetTypeID(lVar9);
                        lVar11 = _CFDataGetTypeID();
                        piVar15 = local_70;
                        if (unaff_RBX == lVar11) {
                          lVar11 = _CFDataGetLength(lVar9);
                          if (lVar11 == 3) {
                            _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0xa8));
                            uVar13 = _CFRetain(lVar9);
                            piVar14 = *(int **)(lVar8 + 0x30);
                            *(undefined8 *)(piVar14 + 0x2a) = uVar13;
                            goto LAB_001a4623;
                          }
                          _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_42();
                        }
                        else {
                          _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_41();
                        }
                      }
                      iVar7 = 1;
                      goto LAB_001a4ad9;
                    }
                    unaff_RBX = _CFGetTypeID(lVar9);
                    lVar11 = _CFDataGetTypeID();
                    if (unaff_RBX == lVar11) {
                      lVar11 = _CFDataGetLength(lVar9);
                      if (lVar11 != 0) {
                        _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x98));
                        uVar13 = _CFRetain(lVar9);
                        *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x98) = uVar13;
                        goto LAB_001a45a7;
                      }
                      _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_40();
                    }
                    else {
                      _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_39();
                    }
                  }
                  else {
                    unaff_RBX = _CFGetTypeID(lVar9);
                    lVar11 = _CFDataGetTypeID();
                    if (unaff_RBX == lVar11) {
                      lVar11 = _CFDataGetLength(lVar9);
                      if (lVar11 != 0) {
                        _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x88));
                        uVar13 = _CFRetain(lVar9);
                        *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x88) = uVar13;
                        goto LAB_001a449d;
                      }
                      _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_36();
                    }
                    else {
                      _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_35();
                    }
                  }
                }
                else {
                  unaff_RBX = _CFGetTypeID(lVar9);
                  lVar11 = _CFDataGetTypeID();
                  if (unaff_RBX == lVar11) {
                    lVar11 = _CFDataGetLength(lVar9);
                    if (lVar11 != 0) {
                      _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x80));
                      uVar13 = _CFRetain(lVar9);
                      *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x80) = uVar13;
                      goto LAB_001a4439;
                    }
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_34();
                  }
                  else {
                    _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_33();
                  }
                }
              }
              else {
                unaff_RBX = _CFGetTypeID(lVar9);
                lVar11 = _CFDataGetTypeID();
                if (unaff_RBX == lVar11) {
                  lVar11 = _CFDataGetLength(lVar9);
                  if (lVar11 != 0) {
                    _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x78));
                    uVar13 = _CFRetain(lVar9);
                    *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x78) = uVar13;
                    goto LAB_001a43d5;
                  }
                  _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_32();
                }
                else {
                  _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_31();
                }
              }
            }
            else {
              unaff_RBX = _CFGetTypeID(lVar9);
              lVar11 = _CFDataGetTypeID();
              if (unaff_RBX == lVar11) {
                lVar11 = _CFDataGetLength(lVar9);
                if (lVar11 != 0) {
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x18));
                  uVar13 = _CFRetain(lVar9);
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x18) = uVar13;
                  goto LAB_001a4182;
                }
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_24();
              }
              else {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_23();
              }
            }
          }
          else {
            unaff_RBX = _CFGetTypeID(lVar9);
            lVar11 = _CFDataGetTypeID();
            if (unaff_RBX == lVar11) {
              iVar7 = __AMAuthInstallBasebandCheckSnum
                                (*(undefined4 *)(*(long *)(lVar8 + 0x30) + 4),lVar9);
              if (iVar7 == 0) {
                _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10));
                uVar13 = _SavageSafeRetain(lVar9);
                *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10) = uVar13;
                cVar6 = _AMAuthInstallBasebandPersonalizationRequired(lVar8);
                if (cVar6 == '\0') {
                  _AMAuthInstallLog(3,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                    "This baseband is does not require personalization. Personalization disabled, continuing."
                                   );
                  _SafeRelease(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10));
                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10) = 0;
                }
                goto LAB_001a40d7;
              }
              _AMAuthInstallLog(7,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "invalid snum: %@",lVar9);
            }
            else {
              _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_21();
            }
          }
LAB_001a4acf:
          iVar7 = 1;
          piVar15 = local_70;
        }
        else {
          unaff_RBX = _CFGetTypeID(lVar8);
          lVar9 = _CFNumberGetTypeID();
          if (unaff_RBX != lVar9) {
            _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_13();
            goto LAB_001a4acf;
          }
          iVar7 = _AMAuthInstallSupportGetUInt32(lVar8,*(undefined8 *)(param_1 + 0x30));
          if (iVar7 == 0) goto LAB_001a3f37;
          _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_14();
LAB_001a4a91:
          iVar7 = 3;
          piVar15 = local_70;
        }
      }
      else {
        lVar9 = _CFDictionaryGetValue(lVar8,&cf_SKeyStatus);
        lVar11 = _CFDictionaryGetValue(lVar8,&cf_CKeyStatus);
        if (*(long *)(param_1 + 0xd8) != 0) {
          if (lVar9 == 0) {
            _AMAuthInstallLog(3,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                              "provisioning key status not found");
            unaff_RBX = param_1;
LAB_001a3d98:
            if (lVar11 == 0) {
              _AMAuthInstallLog(3,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "calibration key status not found");
            }
            else {
              unaff_RBX = _CFGetTypeID(lVar11);
              lVar9 = _CFNumberGetTypeID();
              if (unaff_RBX != lVar9) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_4();
                goto LAB_001a4acf;
              }
              cVar6 = _CFNumberGetValue(lVar11,3,&local_80);
              if (cVar6 == '\0') {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_5();
                goto LAB_001a4a91;
              }
              _AMAuthInstallLog(6,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "calibration key status=%d",local_80);
            }
            lVar9 = _CFDictionaryGetValue(lVar8,&cf_SKeyHash);
            if (lVar9 == 0) {
              _AMAuthInstallLog(6,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "manifestProvisioningKeyHash not found in ManifestInfo");
            }
            else {
              unaff_RBX = _CFGetTypeID(lVar9);
              lVar11 = _CFDataGetTypeID();
              if (unaff_RBX != lVar11) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_6();
                goto LAB_001a4acf;
              }
              _AMAuthInstallLog(6,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "Provisioning Key Hash found, setting to %@",lVar9);
              iVar7 = _AMAuthInstallBasebandSetKeyHashRootManifest
                                (local_78,&cf_BbProvisioningManifestKeyHash,lVar9);
              if (iVar7 != 0) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_7();
                piVar15 = local_70;
                goto LAB_001a4ad9;
              }
            }
            lVar11 = _CFDictionaryGetValue(lVar8,&cf_CKeyHash);
            if (lVar11 == 0) {
              _AMAuthInstallLog(6,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "manifestCalibrationKeyHash not found in ManifestInfo");
            }
            else {
              unaff_RBX = _CFGetTypeID(lVar11);
              lVar12 = _CFDataGetTypeID();
              if (unaff_RBX != lVar12) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_8();
                goto LAB_001a4acf;
              }
              _AMAuthInstallLog(6,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "Calibration Key Hash found, setting to %@",lVar11);
              iVar7 = _AMAuthInstallBasebandSetKeyHashRootManifest
                                (local_78,&cf_BbCalibrationManifestKeyHash,lVar9);
              if (iVar7 != 0) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_9();
                piVar15 = local_70;
                goto LAB_001a4ad9;
              }
            }
            lVar9 = _CFDictionaryGetValue(lVar8,&cf_ProvisioningManifestSupported);
            param_1 = local_78;
            if (lVar9 != 0) {
              unaff_RBX = _CFGetTypeID(lVar9);
              lVar11 = _CFBooleanGetTypeID();
              if (unaff_RBX != lVar11) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_10();
                goto LAB_001a4acf;
              }
              *(long *)(*(long *)(param_1 + 0x30) + 0x50) = lVar9;
            }
            lVar8 = _CFDictionaryGetValue(lVar8,&cf_ProvisioningManifestExists);
            if (lVar8 != 0) {
              unaff_RBX = _CFGetTypeID(lVar8);
              lVar9 = _CFBooleanGetTypeID();
              if (unaff_RBX != lVar9) {
                _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_11();
                goto LAB_001a4acf;
              }
              *(long *)(*(long *)(param_1 + 0x30) + 0x58) = lVar8;
            }
            goto LAB_001a3ee3;
          }
          unaff_RBX = _CFGetTypeID(lVar9);
          lVar12 = _CFNumberGetTypeID();
          if (unaff_RBX == lVar12) {
            cVar6 = _CFNumberGetValue(lVar9,3,&local_68);
            if (cVar6 != '\0') {
              _AMAuthInstallLog(6,"AMAuthInstallBasebandSetParametersWithUpdaterOutput",
                                "provisioning key status=%d",local_68 & 0xffffffff);
              goto LAB_001a3d98;
            }
            _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_3();
            goto LAB_001a4a91;
          }
          _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_2();
          goto LAB_001a4acf;
        }
        _AMAuthInstallBasebandSetParametersWithUpdaterOutput_cold_12();
        iVar7 = 0xe;
        piVar15 = local_70;
      }
    }
  }
LAB_001a4ad9:
  lVar8 = local_78;
  __AMAuthInstallBasebandParametersFinalize(*(undefined8 *)(local_78 + 0x30));
  *(undefined8 *)(lVar8 + 0x30) = 0;
LAB_001a4836:
  __AMAuthInstallBasebandParametersFinalize(piVar15);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

