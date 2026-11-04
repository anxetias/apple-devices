// rea decompile_all
// name: _AMAuthInstallProvisioningPopulateRequestDict
// address: 0x299065
// body: available
// range: 0x299065-0x299f46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningPopulateRequestDict(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  cfstringStruct *pcVar13;
  ulong uVar14;
  long local_78;
  long local_70;
  ulong local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  iVar2 = 1;
  if (((param_2 == 0) || (local_70 = param_1, param_1 == 0)) || (param_3 == 0)) {
    local_40 = 0;
    lVar5 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x140) != 0) {
      uVar4 = _CFGetAllocator();
      iVar2 = _AMAuthInstallHttpSetUriEscapedValue(uVar4,param_2,&cf_COMMAND_CODE,param_3);
      if (iVar2 == 0) {
        lVar5 = _CFStringCompare(param_3,&cf_100,0);
        lVar8 = local_70;
        if (lVar5 == 0) {
          _CFDictionaryRemoveValue(*(undefined8 *)(local_70 + 0x140),&cf_PINECRESTID);
        }
        uVar4 = _CFGetAllocator(lVar8);
        iVar2 = _AMAuthInstallHttpSetUriEscapedValue(uVar4,param_2,&cf_TICKET_VERSION,&cf_2);
        if (iVar2 != 0) goto LAB_00299d9b;
        if (*(long *)(lVar8 + 0x30) == 0) {
          lVar5 = 0;
          goto LAB_00299461;
        }
        if (*(long *)(*(long *)(lVar8 + 0x30) + 0x10) == 0) {
LAB_00299167:
          if (*(long *)(lVar8 + 0x138) == 0) {
            if (*(long *)(*(long *)(lVar8 + 0x30) + 0x48) != 0) {
              uVar4 = _CFGetAllocator(lVar8);
              iVar2 = _AMAuthInstallHttpSetBase64EncodedValue
                                (uVar4,param_2,&cf_B64_SESS_KEY,
                                 *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x48));
              if (iVar2 != 0) {
                _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",
                                  "setting B64_SESS_KEY failed, \'%@\'",
                                  *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x48));
                goto LAB_00299dd2;
              }
            }
            iVar2 = _AMAuthInstallBasebandGetKeyHash
                              (lVar8,&cf_BbProvisioningManifestKeyHash,&local_78);
            if (iVar2 != 0) {
              pcVar12 = "AMAuthInstallBasebandGetKeyHash failed";
              goto LAB_00299db2;
            }
            if (local_78 != 0) {
              uVar4 = _CFGetAllocator(lVar8);
              iVar2 = _AMAuthInstallHttpSetBase64EncodedValue
                                (uVar4,param_2,&cf_B64_SKEY_HASH,local_78);
              if (iVar2 != 0) {
                pcVar12 = "setting B64_SKEY_HASH failed";
                goto LAB_00299db2;
              }
            }
          }
          uVar4 = _CFGetAllocator(lVar8);
          lVar5 = _CFDataCreate(uVar4,*(long *)(lVar8 + 0x30) + 4,4);
          if (lVar5 != 0) {
            uVar4 = _CFGetAllocator(lVar8);
            iVar2 = _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2,&cf_B64_BB_CHIPID,lVar5);
            if (iVar2 == 0) {
              lVar9 = *(long *)(lVar8 + 0x30);
              if (*(long *)(lVar9 + 0x40) != 0) {
                uVar4 = _CFGetAllocator(lVar8);
                _AMAuthInstallHttpSetUriEscapedValue
                          (uVar4,param_2,&cf_ICCID,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x40));
                lVar9 = *(long *)(lVar8 + 0x30);
              }
              if (*(long *)(lVar9 + 0x68) != 0) {
                uVar4 = _CFGetAllocator(lVar8);
                iVar2 = _AMAuthInstallHttpSetUriEscapedValue
                                  (uVar4,param_2,&cf_BB_CARRIERID,
                                   *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x68));
                if (iVar2 != 0) {
                  pcVar12 = "setting BB_CARRIERID failed";
                  goto LAB_00299ece;
                }
                lVar9 = *(long *)(lVar8 + 0x30);
              }
              if (*(long *)(lVar9 + 0x70) != 0) {
                uVar4 = _CFGetAllocator(lVar8);
                iVar2 = _AMAuthInstallHttpSetBase64EncodedValue
                                  (uVar4,param_2,&cf_MANIFESTDATA,
                                   *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x70));
                if (iVar2 != 0) {
                  pcVar12 = "setting MANIFESTDATA failed";
                  goto LAB_00299ece;
                }
                lVar9 = *(long *)(lVar8 + 0x30);
              }
              if (*(long *)(lVar9 + 0x20) != 0) {
                local_38 = 0;
                iVar2 = _AMAuthInstallMonetCreateReversedMEIDFromString
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
                if ((iVar2 == 0) && (local_38 != 0)) {
                  uVar4 = _CFGetAllocator(lVar8);
                  _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2,&cf_B64_MEID,local_38);
                  _CFRelease(local_38);
                  lVar9 = *(long *)(lVar8 + 0x30);
                  goto LAB_0029933d;
                }
                pcVar12 = "failed to reverse meid";
LAB_00299ce0:
                local_40 = 0;
                _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",pcVar12);
                _SafeRelease(local_38);
                goto LAB_00299d03;
              }
LAB_0029933d:
              if (*(long *)(lVar9 + 0x28) != 0) {
                local_38 = 0;
                iVar2 = _AMAuthInstallMonetCreateReversedMEIDFromString
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
                if ((iVar2 != 0) || (local_38 == 0)) {
                  pcVar12 = "failed to reverse imei";
                  goto LAB_00299ce0;
                }
                uVar4 = _CFGetAllocator(lVar8);
                _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2,&cf_B64_IMEI,local_38);
                _CFRelease(local_38);
                lVar9 = *(long *)(lVar8 + 0x30);
              }
              if (*(long *)(lVar9 + 0x30) != 0) {
                local_38 = 0;
                iVar2 = _AMAuthInstallMonetCreateReversedMEIDFromString
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
                if ((iVar2 != 0) || (local_38 == 0)) {
                  pcVar12 = "failed to reverse imei2";
                  goto LAB_00299ce0;
                }
                uVar4 = _CFGetAllocator(lVar8);
                _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2,&cf_B64_IMEI2,local_38);
                _CFRelease(local_38);
                lVar9 = *(long *)(lVar8 + 0x30);
              }
              if (*(long *)(lVar9 + 0x38) != 0) {
                local_38 = 0;
                iVar2 = _AMAuthInstallSupportCopyDataFromHexString
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
                if ((iVar2 != 0) || (local_38 == 0)) {
                  pcVar12 = "failed to create euiccEID data";
                  goto LAB_00299ce0;
                }
                uVar4 = _CFGetAllocator(lVar8);
                _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2,&cf_B64_EID,local_38);
                _CFRelease(local_38);
              }
LAB_00299461:
              if (*(long *)(lVar8 + 0x60) != 0) {
                uVar4 = _CFGetAllocator(lVar8);
                iVar2 = _AMAuthInstallHttpSetUriEscapedValue
                                  (uVar4,param_2,&cf_CLIENT_ID,*(undefined8 *)(lVar8 + 0x60));
                if (iVar2 != 0) {
                  pcVar12 = "setting CLIENT_ID failed";
                  goto LAB_00299ece;
                }
              }
              local_48 = lVar5;
              local_40 = _CFDictionaryGetCount(*(undefined8 *)(lVar8 + 0x140));
              sVar1 = local_40 * 8;
              pvVar6 = _malloc(sVar1);
              pvVar7 = _malloc(sVar1);
              if ((pvVar6 == (void *)0x0) || (pvVar7 == (void *)0x0)) {
                local_40 = 0;
                lVar5 = local_48;
                uVar4 = 0;
                iVar2 = 2;
              }
              else {
                local_50 = pvVar6;
                _CFDictionaryGetKeysAndValues(*(undefined8 *)(local_70 + 0x140),pvVar6,pvVar7);
                local_60 = pvVar7;
                if (0 < local_40) {
                  lVar5 = 0;
                  do {
                    pvVar7 = local_60;
                    if (*(long *)((long)local_50 + lVar5 * 8) == 0) {
                      pcVar12 = "invalid provisioningInfoKeysBuffer array";
LAB_00299d29:
                      local_40 = 0;
                      _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",pcVar12);
                      pvVar6 = local_50;
                      lVar5 = local_48;
                      uVar4 = 0;
                      iVar2 = 99;
                      goto LAB_00299e46;
                    }
                    if (*(long *)((long)local_60 + lVar5 * 8) == 0) {
                      pcVar12 = "invalid provisioningInfoValuesBuffer array";
                      goto LAB_00299d29;
                    }
                    lVar8 = _CFGetTypeID();
                    lVar9 = _CFDataGetTypeID();
                    uVar4 = _CFGetAllocator(local_70);
                    if (lVar8 == lVar9) {
                      iVar2 = _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2);
                    }
                    else {
                      iVar2 = _AMAuthInstallHttpSetUriEscapedValue
                                        (uVar4,param_2,*(undefined8 *)((long)local_50 + lVar5 * 8),
                                         *(undefined8 *)((long)pvVar7 + lVar5 * 8));
                    }
                    pvVar6 = local_50;
                    if (iVar2 != 0) {
                      local_40 = 0;
                      _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",
                                        "setting %@ failed",
                                        *(undefined8 *)((long)local_50 + lVar5 * 8));
                      lVar5 = local_48;
                      pvVar7 = local_60;
                      uVar4 = 0;
                      goto LAB_00299e46;
                    }
                    lVar5 = lVar5 + 1;
                  } while (local_40 != lVar5);
                }
                uVar14 = *(ulong *)PTR__kCFAllocatorDefault_004410e8;
                uVar4 = _CFArrayCreateMutable(uVar14,0,PTR__kCFTypeArrayCallBacks_004411a8);
                _CFArrayAppendValue(uVar4,&cf_1_2_0);
                pcVar10 = (cfstringStruct *)_AMAuthInstallSupportGetLibraryVersionString();
                lVar5 = _CFStringGetLength(pcVar10);
                pcVar13 = &cf_libauthinstall____;
                if (lVar5 != 0) {
                  pcVar13 = pcVar10;
                }
                _CFArrayAppendValue(uVar4,pcVar13);
                local_68 = uVar14;
                local_58 = uVar4;
                uVar4 = _CFStringCreateByCombiningStrings(uVar14,uVar4,&cf__);
                lVar8 = local_70;
                uVar11 = _CFGetAllocator(local_70);
                local_40 = uVar4;
                iVar2 = _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_VERSION,uVar4);
                if (iVar2 == 0) {
                  pvVar6 = local_50;
                  lVar5 = local_48;
                  pvVar7 = local_60;
                  uVar4 = local_58;
                  iVar2 = 0;
                  if (*(long *)(lVar8 + 0x138) != 0) {
                    lVar5 = _CFDictionaryGetValue(*(long *)(lVar8 + 0x138),&cf_MEID);
                    if (lVar5 == 0) {
                      _CFDictionaryRemoveValue(param_2,&cf_B64_MEID);
                      _CFDictionaryRemoveValue(param_2,&cf_MEID);
                      uVar14 = 0;
                    }
                    else {
                      local_38 = 0;
                      iVar2 = _AMAuthInstallMonetCreateReversedMEIDFromString(local_68,lVar5);
                      if ((iVar2 == 0) && (local_38 != 0)) {
                        uVar4 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2,&cf_B64_MEID,local_38)
                        ;
                        _CFRelease(local_38);
                        uVar14 = 0;
                        if (*(long *)(lVar8 + 0x30) != 0) {
                          uVar14 = (ulong)(*(long *)(*(long *)(lVar8 + 0x30) + 0x20) != 0);
                        }
                      }
                      else {
                        uVar14 = 0;
                        _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",
                                          "failed to reverse meid, adding original string to response"
                                         );
                        _SafeRelease(local_38);
                        uVar4 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetUriEscapedValue(uVar4,param_2,&cf_MEID,lVar5);
                      }
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_IMEI);
                    if (lVar5 == 0) {
                      _CFDictionaryRemoveValue(param_2,&cf_B64_IMEI);
                      _CFDictionaryRemoveValue(param_2,&cf_IMEI);
                    }
                    else {
                      local_38 = 0;
                      iVar2 = _AMAuthInstallMonetCreateReversedMEIDFromString(local_68,lVar5);
                      if ((iVar2 == 0) && (local_38 != 0)) {
                        uVar4 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetBase64EncodedValue(uVar4,param_2,&cf_B64_IMEI,local_38)
                        ;
                        _CFRelease(local_38);
                        if (*(long *)(lVar8 + 0x30) != 0) {
                          uVar3 = (uint)uVar14 + 0x100;
                          if (*(long *)(*(long *)(lVar8 + 0x30) + 0x28) == 0) {
                            uVar3 = (uint)uVar14;
                          }
                          uVar14 = (ulong)uVar3;
                        }
                      }
                      else {
                        _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",
                                          "failed to reverse imei, adding original string to response"
                                         );
                        _SafeRelease(local_38);
                        uVar4 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetUriEscapedValue(uVar4,param_2,&cf_IMEI,lVar5);
                      }
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_IMEI2);
                    if (lVar5 == 0) {
                      _CFDictionaryRemoveValue(param_2,&cf_B64_IMEI2);
                      _CFDictionaryRemoveValue(param_2,&cf_IMEI2);
                    }
                    else {
                      local_38 = 0;
                      iVar2 = _AMAuthInstallMonetCreateReversedMEIDFromString(local_68,lVar5);
                      if ((iVar2 == 0) && (local_38 != 0)) {
                        uVar4 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetBase64EncodedValue
                                  (uVar4,param_2,&cf_B64_IMEI2,local_38);
                        _CFRelease(local_38);
                        if (*(long *)(lVar8 + 0x30) != 0) {
                          uVar3 = (uint)uVar14 + 0x200;
                          if (*(long *)(*(long *)(lVar8 + 0x30) + 0x30) == 0) {
                            uVar3 = (uint)uVar14;
                          }
                          uVar14 = (ulong)uVar3;
                        }
                      }
                      else {
                        _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",
                                          "failed to reverse imei2, adding original string to response"
                                         );
                        _SafeRelease(local_38);
                        uVar4 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetUriEscapedValue(uVar4,param_2,&cf_IMEI2,lVar5);
                      }
                    }
                    uVar4 = local_58;
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_WIFI_MAC);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_WIFI_MAC,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_BT_MAC);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_BT_MAC,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_USB_ETHER_MAC);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_USB_ETHER_MAC,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_WIFI_MAC2);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_WIFI_MAC2,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_BT_MAC2);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_BT_MAC2,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_ETH_MAC);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_ETH_MAC,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_ETHER_MAC2);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_ETHER_MAC2,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_T_MAC);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_T_MAC,lVar5);
                    }
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_ETHER_MAC3);
                    if (lVar5 != 0) {
                      uVar11 = _CFGetAllocator(lVar8);
                      _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_ETHER_MAC3,lVar5);
                    }
                    local_68 = uVar14;
                    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_PAICHUSUO);
                    if (lVar5 != 0) {
                      _AMAuthInstallLog(5,"AMAuthInstallProvisioningPopulateRequestDict",
                                        "PAICHUSUO:%@",lVar5);
                      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_SN);
                      if (lVar5 != 0) {
                        _AMAuthInstallLog(5,"AMAuthInstallProvisioningPopulateRequestDict",
                                          "PAICHUSUO SN:%@",lVar5);
                        uVar11 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_SN,lVar5);
                      }
                      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_RGN);
                      if (lVar5 != 0) {
                        _AMAuthInstallLog(5,"AMAuthInstallProvisioningPopulateRequestDict",
                                          "PAICHUSUO RGN:%@",lVar5);
                        uVar11 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_RGN,lVar5);
                      }
                      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_MPN);
                      if (lVar5 != 0) {
                        _AMAuthInstallLog(5,"AMAuthInstallProvisioningPopulateRequestDict",
                                          "PAICHUSUO MPN:%@",lVar5);
                        uVar11 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_MPN,lVar5);
                      }
                      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x138),&cf_MLB);
                      if (lVar5 != 0) {
                        _AMAuthInstallLog(5,"AMAuthInstallProvisioningPopulateRequestDict",
                                          "PAICHUSUO MLB:%@",lVar5);
                        uVar11 = _CFGetAllocator(lVar8);
                        _AMAuthInstallHttpSetUriEscapedValue(uVar11,param_2,&cf_MLB,lVar5);
                      }
                    }
                    uVar11 = _CFGetAllocator(lVar8);
                    lVar5 = _CFStringCreateWithFormat(uVar11,0,&cf_0x_X,local_68);
                    if (lVar5 == 0) {
                      pvVar6 = local_50;
                      lVar5 = local_48;
                      pvVar7 = local_60;
                      iVar2 = 2;
                    }
                    else {
                      _CFDictionarySetValue(param_2,&cf_STATUS1,lVar5);
                      _CFRelease(lVar5);
                      pvVar6 = local_50;
                      lVar5 = local_48;
                      pvVar7 = local_60;
                      iVar2 = 0;
                    }
                  }
                }
                else {
                  _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",
                                    "setting VERSION (%@) failed",local_40);
                  pvVar6 = local_50;
                  lVar5 = local_48;
                  pvVar7 = local_60;
                  uVar4 = local_58;
                }
              }
              goto LAB_00299e46;
            }
            pcVar12 = "setting B64_BB_CHIPID failed";
LAB_00299ece:
            local_40 = 0;
            _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",pcVar12);
            goto LAB_00299d03;
          }
          pcVar12 = "chipID failed to convert to data";
          iVar2 = 3;
        }
        else {
          uVar4 = _CFGetAllocator(lVar8);
          iVar2 = _AMAuthInstallHttpSetBase64EncodedValue
                            (uVar4,param_2,&cf_B64_BB_SNUM,
                             *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10));
          if (iVar2 == 0) goto LAB_00299167;
          pcVar12 = "setting B64_BB_SNUM failed";
        }
      }
      else {
LAB_00299d9b:
        pcVar12 = "setting COMMAND_CODE failed";
      }
LAB_00299db2:
      _AMAuthInstallLog(3,"AMAuthInstallProvisioningPopulateRequestDict",pcVar12);
    }
LAB_00299dd2:
    lVar5 = 0;
    local_40 = 0;
  }
LAB_00299d03:
  pvVar6 = (void *)0x0;
  pvVar7 = (void *)0x0;
  uVar4 = 0;
LAB_00299e46:
  _SafeFree(pvVar6);
  _SafeFree(pvVar7);
  _SafeRelease(lVar5);
  _SafeRelease(local_40);
  _SafeRelease(uVar4);
  return iVar2;
}

