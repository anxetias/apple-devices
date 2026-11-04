// rea decompile_all
// name: _AMFDRLoadLibrary
// address: 0x189a79
// body: available
// range: 0x189a79-0x18a2db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _AMFDRLoadLibrary(void)

{
  long lVar1;
  
  lVar1 = _dlopen("/usr/local/lib/libFDR_internal.dylib",0x105);
  if (lVar1 == 0) {
    _AMFDRLoadLibrary_cold_53();
  }
  else {
    _ExportTable = _dlsym(lVar1,"AMFDRCreateWithOptions");
    if (_ExportTable == 0) {
      _AMFDRLoadLibrary_cold_52();
    }
    else {
      DAT_004a59b8 = _dlsym(lVar1,"AMFDRCreatePermissionsString");
      if (DAT_004a59b8 == 0) {
        _AMFDRLoadLibrary_cold_51();
      }
      else {
        DAT_004a59c0 = _dlsym(lVar1,"AMFDRCreateInstanceString");
        if (DAT_004a59c0 == 0) {
          _AMFDRLoadLibrary_cold_50();
        }
        else {
          DAT_004a59c8 = _dlsym(lVar1,"AMFDRSetOption");
          if (DAT_004a59c8 == 0) {
            _AMFDRLoadLibrary_cold_49();
          }
          else {
            _DAT_004a59d0 = _dlsym(lVar1,"AMFDRSetSealingMap");
            if (_DAT_004a59d0 == 0) {
              _AMFDRLoadLibrary_cold_48();
            }
            else {
              _DAT_004a59d8 = _dlsym(lVar1,"AMFDRGetSealingMap");
              if (_DAT_004a59d8 == 0) {
                _AMFDRLoadLibrary_cold_47();
              }
              else {
                _DAT_004a59e0 = _dlsym(lVar1,"AMFDRSetRecoveryVerifier");
                if (_DAT_004a59e0 == 0) {
                  _AMFDRLoadLibrary_cold_46();
                }
                else {
                  _DAT_004a59e8 = _dlsym(lVar1,"AMFDRGetOptions");
                  if (_DAT_004a59e8 == 0) {
                    _AMFDRLoadLibrary_cold_45();
                  }
                  else {
                    _DAT_004a59f0 = _dlsym(lVar1,"AMFDRGetInfo");
                    if (_DAT_004a59f0 == 0) {
                      _AMFDRLoadLibrary_cold_44();
                    }
                    else {
                      _DAT_004a59f8 = _dlsym(lVar1,"AMFDRGetCert");
                      if (_DAT_004a59f8 == 0) {
                        _AMFDRLoadLibrary_cold_43();
                      }
                      else {
                        _DAT_004a5a00 = _dlsym(lVar1,"AMFDRGetTrustError");
                        if (_DAT_004a5a00 == 0) {
                          _AMFDRLoadLibrary_cold_42();
                        }
                        else {
                          _DAT_004a5a08 = _dlsym(lVar1,"AMFDRCopyClientId");
                          if (_DAT_004a5a08 == 0) {
                            _AMFDRLoadLibrary_cold_41();
                          }
                          else {
                            _DAT_004a5a10 = _dlsym(lVar1,"AMFDRCopyUnderlyingDictionary");
                            if (_DAT_004a5a10 == 0) {
                              _AMFDRLoadLibrary_cold_40();
                            }
                            else {
                              DAT_004a5a18 = _dlsym(lVar1,"AMFDRLogSetHandler");
                              if (DAT_004a5a18 == 0) {
                                _AMFDRLoadLibrary_cold_39();
                              }
                              else {
                                _DAT_004a5a20 = _dlsym(lVar1,"AMFDRPerformManifestCheck");
                                if (_DAT_004a5a20 == 0) {
                                  _AMFDRLoadLibrary_cold_38();
                                }
                                else {
                                  DAT_004a5a28 = _dlsym(lVar1,"AMFDRAppendPermissionsString");
                                  if (DAT_004a5a28 == 0) {
                                    _AMFDRLoadLibrary_cold_37();
                                  }
                                  else {
                                    _DAT_004a5a30 = _dlsym(lVar1,"AMFDRDataCopyDigest");
                                    if (_DAT_004a5a30 == 0) {
                                      _AMFDRLoadLibrary_cold_36();
                                    }
                                    else {
                                      _DAT_004a5a38 = _dlsym(lVar1,"AMFDRDataPresent");
                                      if (_DAT_004a5a38 == 0) {
                                        _AMFDRLoadLibrary_cold_35();
                                      }
                                      else {
                                        _DAT_004a5a40 = _dlsym(lVar1,"AMFDRDataCopy");
                                        if (_DAT_004a5a40 == 0) {
                                          _AMFDRLoadLibrary_cold_34();
                                        }
                                        else {
                                          _DAT_004a5a48 = _dlsym(lVar1,"AMFDRDataMultiCopy");
                                          if (_DAT_004a5a48 == 0) {
                                            _AMFDRLoadLibrary_cold_33();
                                          }
                                          else {
                                            DAT_004a5a50 = _dlsym(lVar1,"AMFDRDataPut");
                                            if (DAT_004a5a50 == 0) {
                                              _AMFDRLoadLibrary_cold_32();
                                            }
                                            else {
                                              _DAT_004a5a58 = _dlsym(lVar1,"AMFDRDataMultiPut");
                                              if (_DAT_004a5a58 == 0) {
                                                _AMFDRLoadLibrary_cold_31();
                                              }
                                              else {
                                                _DAT_004a5a60 = _dlsym(lVar1,"AMFDRDataPrefetch");
                                                if (_DAT_004a5a60 == 0) {
                                                  _AMFDRLoadLibrary_cold_30();
                                                }
                                                else {
                                                  _DAT_004a5a68 = _dlsym(lVar1,"AMFDRDataExport");
                                                  if (_DAT_004a5a68 == 0) {
                                                    _AMFDRLoadLibrary_cold_29();
                                                  }
                                                  else {
                                                    _DAT_004a5a70 =
                                                         _dlsym(lVar1,"AMFDRDataMultiExport");
                                                    if (_DAT_004a5a70 == 0) {
                                                      _AMFDRLoadLibrary_cold_28();
                                                    }
                                                    else {
                                                      _DAT_004a5a78 =
                                                           _dlsym(lVar1,"AMFDRDataDelete");
                                                      if (_DAT_004a5a78 == 0) {
                                                        _AMFDRLoadLibrary_cold_27();
                                                      }
                                                      else {
                                                        _DAT_004a5a80 =
                                                             _dlsym(lVar1,"AMFDRDataMultiDelete");
                                                        if (_DAT_004a5a80 == 0) {
                                                          _AMFDRLoadLibrary_cold_26();
                                                        }
                                                        else {
                                                          DAT_004a5a88 = _dlsym(lVar1,
                                                  "AMFDRDataCopyTrustObject");
                                                  if (DAT_004a5a88 == 0) {
                                                    _AMFDRLoadLibrary_cold_25();
                                                  }
                                                  else {
                                                    DAT_004a5a90 = _dlsym(lVar1,
                                                  "AMFDRDataCopySslRoots");
                                                  if (DAT_004a5a90 == 0) {
                                                    _AMFDRLoadLibrary_cold_24();
                                                  }
                                                  else {
                                                    _DAT_004a5a98 = _dlsym(lVar1,"AMFDRDataIterate")
                                                    ;
                                                    if (_DAT_004a5a98 == 0) {
                                                      _AMFDRLoadLibrary_cold_23();
                                                    }
                                                    else {
                                                      _DAT_004a5aa0 =
                                                           _dlsym(lVar1,"AMFDRDataRecover");
                                                      if (_DAT_004a5aa0 == 0) {
                                                        _AMFDRLoadLibrary_cold_22();
                                                      }
                                                      else {
                                                        _DAT_004a5aa8 =
                                                             _dlsym(lVar1,
                                                  "AMFDRDataLocalCreateFullKey");
                                                  if (_DAT_004a5aa8 == 0) {
                                                    _AMFDRLoadLibrary_cold_21();
                                                  }
                                                  else {
                                                    _DAT_004a5ab0 =
                                                         _dlsym(lVar1,
                                                  "AMFDRSealingMapCreateRecoveryPermissions");
                                                  if (_DAT_004a5ab0 == 0) {
                                                    _AMFDRLoadLibrary_cold_20();
                                                  }
                                                  else {
                                                    _DAT_004a5ab8 =
                                                         _dlsym(lVar1,
                                                  "AMFDRSealingMapRecoverCurrentDevice");
                                                  if (_DAT_004a5ab8 == 0) {
                                                    _AMFDRLoadLibrary_cold_19();
                                                  }
                                                  else {
                                                    _DAT_004a5ac0 =
                                                         _dlsym(lVar1,"AMFDRSealingMapGetEntry");
                                                    if (_DAT_004a5ac0 == 0) {
                                                      _AMFDRLoadLibrary_cold_18();
                                                    }
                                                    else {
                                                      _DAT_004a5ac8 =
                                                           _dlsym(lVar1,
                                                  "AMFDRSealingMapGetEntriesForDevice");
                                                  if (_DAT_004a5ac8 == 0) {
                                                    _AMFDRLoadLibrary_cold_17();
                                                  }
                                                  else {
                                                    _DAT_004a5ad0 =
                                                         _dlsym(lVar1,
                                                  "AMFDRSealingMapCopyInstanceWithIdentifiers");
                                                  if (_DAT_004a5ad0 == 0) {
                                                    _AMFDRLoadLibrary_cold_16();
                                                  }
                                                  else {
                                                    _DAT_004a5ad8 =
                                                         _dlsym(lVar1,
                                                  "AMFDRSealingMapCopyRequiredIdentifiers");
                                                  if (_DAT_004a5ad8 == 0) {
                                                    _AMFDRLoadLibrary_cold_15();
                                                  }
                                                  else {
                                                    _DAT_004a5ae0 =
                                                         _dlsym(lVar1,"AMFDRSealingMapCopyLocalData"
                                                               );
                                                    if (_DAT_004a5ae0 == 0) {
                                                      _AMFDRLoadLibrary_cold_14();
                                                    }
                                                    else {
                                                      _DAT_004a5ae8 =
                                                           _dlsym(lVar1,
                                                  "AMFDRSealingMapCopyLocalDataForClass");
                                                  if (_DAT_004a5ae8 == 0) {
                                                    _AMFDRLoadLibrary_cold_13();
                                                  }
                                                  else {
                                                    _DAT_004a5af0 =
                                                         _dlsym(lVar1,
                                                  "AMFDRSealingMapCopyLocalMinimalManifestForInstance"
                                                  );
                                                  if (_DAT_004a5af0 == 0) {
                                                    _AMFDRLoadLibrary_cold_12();
                                                  }
                                                  else {
                                                    _DAT_004a5af8 =
                                                         _dlsym(lVar1,"AMFDRSealingMapVerifySealing"
                                                               );
                                                    if (_DAT_004a5af8 == 0) {
                                                      _AMFDRLoadLibrary_cold_11();
                                                    }
                                                    else {
                                                      _DAT_004a5b00 =
                                                           _dlsym(lVar1,
                                                  "AMFDRSealingMapCreateAndPopulateSealedData");
                                                  if (_DAT_004a5b00 == 0) {
                                                    _AMFDRLoadLibrary_cold_10();
                                                  }
                                                  else {
                                                    _DAT_004a5b08 =
                                                         _dlsym(lVar1,
                                                  "AMFDRSealingMapVerifyAndCommitSealedData");
                                                  if (_DAT_004a5b08 == 0) {
                                                    _AMFDRLoadLibrary_cold_9();
                                                  }
                                                  else {
                                                    _DAT_004a5b10 =
                                                         _dlsym(lVar1,
                                                  "AMFDRSealedDataCreateSealingRequest");
                                                  if (_DAT_004a5b10 == 0) {
                                                    _AMFDRLoadLibrary_cold_8();
                                                  }
                                                  else {
                                                    _DAT_004a5b18 =
                                                         _dlsym(lVar1,"AMFDRSealedDataCreate");
                                                    if (_DAT_004a5b18 == 0) {
                                                      _AMFDRLoadLibrary_cold_7();
                                                    }
                                                    else {
                                                      _DAT_004a5b20 =
                                                           _dlsym(lVar1,"AMFDRSealedDataPopulate");
                                                      if (_DAT_004a5b20 == 0) {
                                                        _AMFDRLoadLibrary_cold_6();
                                                      }
                                                      else {
                                                        _DAT_004a5b28 =
                                                             _dlsym(lVar1,"AMFDRCopyDisposableKeys")
                                                        ;
                                                        if (_DAT_004a5b28 == 0) {
                                                          _AMFDRLoadLibrary_cold_5();
                                                        }
                                                        else {
                                                          _DAT_004a5b30 =
                                                               _dlsym(lVar1,"AMFDRCopyDeviceKeys");
                                                          if (_DAT_004a5b30 == 0) {
                                                            _AMFDRLoadLibrary_cold_4();
                                                          }
                                                          else {
                                                            _DAT_004a5b40 =
                                                                 _dlsym(lVar1,
                                                  "AMFDRDataPutForSysCfgKey");
                                                  if (_DAT_004a5b40 == 0) {
                                                    _AMFDRLoadLibrary_cold_3();
                                                  }
                                                  else {
                                                    _DAT_004a5b38 =
                                                         _dlsym(lVar1,"AMFDRCreateLocalPending");
                                                    if (_DAT_004a5b38 == 0) {
                                                      _AMFDRLoadLibrary_cold_2();
                                                    }
                                                    else {
                                                      _DAT_004a5b48 =
                                                           _dlsym(lVar1,
                                                  "AMFDRSealingMapSetMGCopyAnswer");
                                                  if (_DAT_004a5b48 != 0) {
                                                    return;
                                                  }
                                                  _AMFDRLoadLibrary_cold_1();
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
  ___bzero(&_ExportTable,0x1a0);
  return;
}

