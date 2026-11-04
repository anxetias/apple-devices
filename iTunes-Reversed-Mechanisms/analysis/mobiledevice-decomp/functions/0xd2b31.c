// rea decompile_all
// name: _handleDataRequestMessage
// address: 0xd2b31
// body: available
// range: 0xd2b31-0xd4a5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd4581 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleDataRequestMessage(AMRestoreMuxedDeviceMessage*, __CFError**) */

int _handleDataRequestMessage(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  __CFDictionary *p_Var7;
  long lVar8;
  __CFError *p_Var9;
  pthread_mutex_t *ppVar10;
  undefined8 uVar11;
  __AMRestoreModeDevice *p_Var12;
  pthread_mutex_t *ppVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  cfstringStruct *pcVar18;
  undefined1 in_RCX [8];
  undefined *puVar19;
  uchar extraout_DL;
  uchar extraout_DL_00;
  cfstringStruct *pcVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  long local_c8;
  pthread_mutex_t *local_c0;
  pthread_mutex_t *local_b8;
  __AMRestoreModeDevice *local_b0;
  undefined1 local_a8 [16];
  long local_98;
  long local_90;
  long local_88;
  undefined1 local_80 [16];
  __CFError *local_70;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  undefined1 *local_58;
  long *local_50;
  undefined8 *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_70 = (__CFError *)0x0;
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataType);
  if (lVar6 == 0) {
    _AMRLog(3,&cf_nodatatypespecifiedindatarequestmessage);
    iVar5 = 10;
    goto LAB_000d33d4;
  }
  p_Var7 = (__CFDictionary *)_CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Arguments);
  lVar8 = _CFStringCompare(lVar6,&cf_SystemImageData,0);
  if (lVar8 == 0) {
    iVar5 = _handleImageDataRequest(param_1,(__CFString *)&cf_SystemImage);
    goto LAB_000d337d;
  }
  lVar8 = _CFStringCompare(lVar6,&cf_HostSystemTime,0);
  if (lVar8 == 0) {
    local_68 = (undefined1  [8])0x0;
    puStack_60 = (undefined1 *)0x0;
    lVar6 = 0;
    iVar5 = _gettimeofday((timeval *)local_68,(void *)0x0);
    if (iVar5 != 0) {
      iVar5 = -1;
LAB_000d440a:
      _AMSupportSafeRelease(lVar6);
      pcVar20 = &cf_Failedtohandlehostsystemtimerequest;
      goto LAB_000d3388;
    }
    lVar6 = 0;
    _AMRLog(6,&cf_HostsystemtimeinsecondsinceEpochis_ld_,local_68);
    uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    in_RCX = (undefined1  [8])PTR__kCFTypeDictionaryValueCallBacks_004411b8;
    lVar8 = _CFDictionaryCreateMutable(uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
    if (lVar8 == 0) {
      iVar5 = 0x12;
      goto LAB_000d440a;
    }
    uVar11 = _CFNumberCreate(uVar11,10,local_68);
    _CFDictionarySetValue(lVar8,&cf_SetHostTimeOnDevice,uVar11);
    iVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar8);
    if (iVar5 != 0) {
      iVar5 = 9;
      lVar6 = lVar8;
      goto LAB_000d440a;
    }
    _AMSupportSafeRelease(lVar8);
LAB_000d3283:
    iVar5 = 0;
    pcVar20 = (cfstringStruct *)0x0;
  }
  else {
    lVar8 = _CFStringCompare(lVar6,&cf_SystemImageRootHash,0);
    if (lVar8 == 0) {
      local_a8._8_8_ = *(undefined8 *)(param_1 + 0x10);
      p_Var12 = *(__AMRestoreModeDevice **)(local_a8._8_8_ + 0x10);
      in_RCX = (undefined1  [8])0x0;
      local_80._0_8_ = 0;
      local_98 = 0;
      cVar1 = _AMRestoreOptionsAreLegacy(*(undefined8 *)(local_a8._8_8_ + 0x18));
      if (cVar1 == '\0') {
        local_68 = (undefined1  [8])&PTR____func_00445bf8;
        puStack_60 = local_a8 + 8;
        local_58 = local_80;
        local_48 = (undefined8 *)local_68;
        __AMRestoreModeDevice::with_amai_locked(p_Var12,local_68);
        if (local_48 == (undefined8 *)local_68) {
          lVar6 = 0x20;
LAB_000d37cc:
          in_RCX = (undefined1  [8])*local_48;
          (**(code **)(((pthread_mutex_t *)in_RCX)->__opaque + lVar6 + -8))();
        }
        else {
          lVar6 = 0x28;
          if (local_48 != (undefined8 *)0x0) goto LAB_000d37cc;
        }
        if (local_80._0_8_ == 0) {
          _AMRLog(3,&cf_FailedtocreatestringfromURL);
          iVar5 = -1;
          lVar6 = 0;
        }
        else {
          in_RCX = (undefined1  [8])0x0;
          _AMRestoreModeDeviceProgressAsync(p_Var12,0x4d,-1,(__CFString *)0x0);
          _AMRLogWithFilePath(8,local_80._0_8_,&cf_sendingsystemvolumeroothash);
          iVar5 = __AMRestoreCreateCFDataWithContentsOfFile(local_80._0_8_,&local_98);
          if (iVar5 != 0) {
            _AMRLog(3,&cf_couldn_tloadsystemvolumeroothash__d,iVar5);
            goto LAB_000d3c29;
          }
          lVar6 = _CFDictionaryCreateMutable
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                             PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          _CFDictionarySetValue(lVar6,&cf_SystemImageRootHashFile,local_98);
          iVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar6);
          in_RCX = (undefined1  [8])(ulong)(iVar5 != 0);
          iVar5 = (uint)(iVar5 != 0) * 9;
        }
      }
      else {
        lVar6 = 0;
        _AMRLog(3,&cf_LegacyoptionsnotimplementedfornewDeviceTreerequestmessage);
        iVar5 = -1;
      }
      if (local_80._0_8_ != 0) {
        _CFRelease();
      }
      if (local_98 != 0) {
        _CFRelease();
      }
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
LAB_000d337d:
      bVar21 = iVar5 == 0;
      pcVar18 = &cf_Failedtohandleimagerequest;
LAB_000d3384:
      pcVar20 = (cfstringStruct *)0x0;
      if (!bVar21) {
        pcVar20 = pcVar18;
      }
    }
    else {
      lVar8 = _CFStringCompare(lVar6,&cf_SystemImageCanonicalMetadata,0);
      if (lVar8 == 0) {
        local_a8._8_8_ = *(undefined8 *)(param_1 + 0x10);
        p_Var12 = *(__AMRestoreModeDevice **)(local_a8._8_8_ + 0x10);
        in_RCX = (undefined1  [8])0x0;
        local_80._0_8_ = 0;
        local_98 = 0;
        cVar1 = _AMRestoreOptionsAreLegacy(*(undefined8 *)(local_a8._8_8_ + 0x18));
        if (cVar1 == '\0') {
          local_68 = (undefined1  [8])&PTR____func_00445c88;
          puStack_60 = local_a8 + 8;
          local_58 = local_80;
          local_48 = (undefined8 *)local_68;
          __AMRestoreModeDevice::with_amai_locked(p_Var12,local_68);
          if (local_48 == (undefined8 *)local_68) {
            lVar6 = 0x20;
LAB_000d3bc4:
            in_RCX = (undefined1  [8])*local_48;
            (**(code **)(((pthread_mutex_t *)in_RCX)->__opaque + lVar6 + -8))();
          }
          else {
            lVar6 = 0x28;
            if (local_48 != (undefined8 *)0x0) goto LAB_000d3bc4;
          }
          if (local_80._0_8_ != 0) {
            in_RCX = (undefined1  [8])0x0;
            _AMRestoreModeDeviceProgressAsync(p_Var12,0x4d,-1,(__CFString *)0x0);
            _AMRLogWithFilePath(8,local_80._0_8_,&cf_sendingcanonicalmetadata);
            iVar5 = __AMRestoreCreateCFDataWithContentsOfFile(local_80._0_8_,&local_98);
            if (iVar5 == 0) {
              lVar6 = _CFDictionaryCreateMutable
                                (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                 PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              _CFDictionarySetValue(lVar6,&cf_SystemImageCanonicalMetadataFile,local_98);
              iVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar6);
              in_RCX = (undefined1  [8])(ulong)(iVar5 != 0);
              iVar5 = (uint)(iVar5 != 0) * 9;
              goto LAB_000d334b;
            }
            _AMRLog(3,&cf_couldn_tloadcanonicalmetadata__d,iVar5);
LAB_000d3c29:
            iVar5 = 10;
            pcVar20 = &cf_Failedtohandleimagerequest;
            goto LAB_000d3388;
          }
          _AMRLog(3,&cf_FailedtocreatestringfromURL);
          iVar5 = -1;
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          _AMRLog(3,&cf_LegacyoptionsnotimplementedfornewDeviceTreerequestmessage);
          iVar5 = -1;
        }
LAB_000d334b:
        if (local_80._0_8_ != 0) {
          _CFRelease();
        }
        if (local_98 != 0) {
          _CFRelease();
        }
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
        goto LAB_000d337d;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_NORData,0);
      if (lVar8 == 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        p_Var12 = *(__AMRestoreModeDevice **)(lVar6 + 0x10);
        local_c8 = 0;
        local_a8._0_8_ = 0;
        cVar1 = _AMRestoreOptionsAreLegacy(*(undefined8 *)(lVar6 + 0x18));
        if (cVar1 == '\0') {
          in_RCX = (undefined1  [8])0x0;
          _AMRestoreModeDeviceProgressAsync(p_Var12,0x23,-1,(__CFString *)0x0);
          lVar8 = _CFDictionaryGetValue
                            (*(undefined8 *)(lVar6 + 0x18),&cf_PersonalizedRestoreBundlePath);
          if (lVar8 == 0) {
            iVar5 = 6;
          }
          else {
            uVar11 = _CFGetAllocator(p_Var12);
            in_RCX = (undefined1  [8])((long)&MACH_HEADER.magic + 1);
            local_b8 = (pthread_mutex_t *)_CFURLCreateWithFileSystemPath(uVar11,lVar8,0);
            if (local_b8 == (pthread_mutex_t *)0x0) {
              iVar5 = 0x12;
            }
            else {
              puStack_60 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
              ppVar10 = (pthread_mutex_t *)(p_Var12 + 0x158);
              local_68 = (undefined1  [8])ppVar10;
              _pthread_mutex_lock(ppVar10);
              local_90 = _AMRAuthInstallCopyVariant
                                   (*(undefined8 *)(p_Var12 + 0x150),*(undefined8 *)(lVar6 + 0x18));
              if (local_90 == 0) {
                iVar2 = 0x13;
                bVar21 = false;
                _AMRLog(3,&cf_Can_thandleallflashrequestwithoutvariant);
              }
              else {
                in_RCX = (undefined1  [8])local_a8;
                iVar5 = _AMAuthInstallBundleCopyPersonalizedFirmwareImages
                                  (*(undefined8 *)(p_Var12 + 0x150),local_b8);
                if (iVar5 == 0) {
                  bVar21 = true;
                  iVar2 = 0;
                }
                else {
                  _AMRLog(3,&cf_failedtocopyfirmwareimages);
                  iVar2 = _AMAuthInstallToRestoreError(iVar5);
                  bVar21 = false;
                }
              }
              _pthread_mutex_unlock(ppVar10);
              if (bVar21) {
                uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
                puVar19 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
                local_88 = _CFDictionaryCreateMutable
                                     (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                      PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                lVar6 = _CFArrayCreateMutable(uVar11,0,PTR__kCFTypeArrayCallBacks_004411a8);
                in_RCX = (undefined1  [8])
                         CONCAT71((int7)((ulong)puVar19 >> 8),lVar6 != 0 && local_88 != 0);
                local_c8 = lVar6;
                if (lVar6 != 0 && local_88 != 0) {
                  lVar8 = _CFDictionaryGetValue(local_a8._0_8_,&cf_LLB);
                  if (lVar8 != 0) {
                    _CFDictionarySetValue(local_88,&cf_LlbImageData,lVar8);
                    _CFDictionaryRemoveValue(local_a8._0_8_,&cf_LLB);
                  }
                  lVar8 = _CFDictionaryGetValue(local_a8._0_8_,&cf_SEP);
                  if (lVar8 != 0) {
                    _CFDictionarySetValue(local_88,&cf_SEPImageData,lVar8);
                    _CFDictionaryRemoveValue(local_a8._0_8_,&cf_SEP);
                  }
                  lVar8 = _CFDictionaryGetValue(local_a8._0_8_,&cf_SepStage1);
                  if (lVar8 != 0) {
                    _CFDictionarySetValue(local_88,&cf_SEPPatchImageData,lVar8);
                    _CFDictionaryRemoveValue(local_a8._0_8_,&cf_SepStage1);
                  }
                  lVar8 = _CFDictionaryGetValue(local_a8._0_8_,&cf_RestoreSEP);
                  if (lVar8 != 0) {
                    _CFDictionarySetValue(local_88,&cf_RestoreSEPImageData,lVar8);
                    _CFDictionaryRemoveValue(local_a8._0_8_,&cf_RestoreSEP);
                  }
                  if ((p_Var7 == (__CFDictionary *)0x0) ||
                     (lVar8 = _CFDictionaryGetValue(p_Var7,&cf_FlashVersion1), lVar8 == 0)) {
                    _CFDictionarySetValue(local_88,&cf_NorImageData,lVar6);
                    _CFDictionaryApplyFunction(local_a8._0_8_,_AddFlashImages,&local_c8);
                  }
                  else {
                    _CFDictionarySetValue(local_88,&cf_NorImageData,local_a8._0_8_);
                  }
                  iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,local_88);
                  iVar5 = 9;
                  if (iVar4 == 0) {
                    iVar5 = iVar2;
                  }
                }
                else {
                  iVar5 = 0x12;
                }
              }
              else {
                local_88 = 0;
                iVar5 = iVar2;
              }
              bVar21 = local_90 != 0;
              _CFRelease(local_b8);
              if (bVar21) {
                _CFRelease(local_90);
              }
              if (local_88 != 0) {
                _CFRelease();
              }
            }
          }
        }
        else {
          lVar6 = *(long *)(param_1 + 0x10);
          p_Var12 = *(__AMRestoreModeDevice **)(lVar6 + 0x10);
          in_RCX = (undefined1  [8])0x0;
          _AMRestoreModeDeviceProgressAsync(p_Var12,0x23,-1,(__CFString *)0x0);
          ppVar10 = (pthread_mutex_t *)
                    _CFDictionaryGetValue(*(undefined8 *)(lVar6 + 0x18),&cf_NORImagePath);
          if (ppVar10 == (pthread_mutex_t *)0x0) {
            lVar8 = _CFDictionaryGetValue(*(undefined8 *)(lVar6 + 0x18),&cf_NORImageType);
            ppVar13 = (pthread_mutex_t *)
                      _CFDictionaryGetValue(*(undefined8 *)(lVar6 + 0x18),&cf_FirmwareDirectory);
            in_RCX = (undefined1  [8])
                     CONCAT71((int7)((ulong)in_RCX >> 8),
                              lVar8 != 0 && ppVar13 != (pthread_mutex_t *)0x0);
            iVar5 = 1;
            if (lVar8 == 0 || ppVar13 == (pthread_mutex_t *)0x0) goto LAB_000d40aa;
            uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            uVar16 = _CFStringCreateMutableCopy(uVar11,0,*(undefined8 *)(p_Var12 + 0x108));
            _CFStringLowercase(uVar16,0);
            ppVar10 = (pthread_mutex_t *)
                      _CFStringCreateWithFormat
                                (uVar11,0,&cf____call_flash_call_flash______,ppVar13,0x2f,0x2f,
                                 uVar16,lVar8);
            _CFRelease(uVar16);
            in_RCX = (undefined1  [8])ppVar13;
          }
          else {
            _CFRetain(ppVar10);
          }
          lVar6 = __AMRestoreCopyManifestForNORImage(ppVar10);
          if (lVar6 == 0) {
            _AMRLogWithFilePath(3,ppVar10,&cf_unabletoloadfirmwareimagesmanifest);
            iVar5 = 0xb;
          }
          else {
            local_b0 = *(__AMRestoreModeDevice **)(*(long *)(param_1 + 0x10) + 0x10);
            local_80._12_4_ = 0;
            local_90 = _CFArrayGetCount(lVar6);
            ppVar13 = *(pthread_mutex_t **)PTR__kCFAllocatorDefault_004410e8;
            in_RCX = (undefined1  [8])PTR__kCFTypeDictionaryValueCallBacks_004411b8;
            lVar8 = _CFDictionaryCreateMutable
                              (ppVar13,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
            local_b8 = ppVar13;
            lVar14 = _CFArrayCreateMutable(ppVar13,0,PTR__kCFTypeArrayCallBacks_004411a8);
            local_88 = lVar8;
            if ((lVar8 == 0) || (lVar14 == 0)) {
LAB_000d3df7:
              local_80._12_4_ = 0x12;
            }
            else {
              _CFDictionarySetValue(lVar8,&cf_NorImageData,lVar14);
              if (0 < local_90) {
                lVar8 = 0;
                local_c0 = ppVar10;
                do {
                  uVar11 = _CFArrayGetValueAtIndex(lVar6,lVar8);
                  lVar15 = _CFStringGetLength(uVar11);
                  if (lVar15 != 0) {
                    local_a8._8_8_ = 0;
                    in_RCX = (undefined1  [8])ppVar10;
                    local_80._0_8_ =
                         _CFStringCreateWithFormat(local_b8,0,&cf____c__,ppVar10,0x2f,uVar11);
                    if (local_80._0_8_ == 0) goto LAB_000d3df7;
                    local_98 = 0;
                    local_68 = (undefined1  [8])&PTR____func_00445d08;
                    puStack_60 = local_80 + 0xc;
                    local_58 = local_80;
                    local_50 = &local_98;
                    local_48 = (undefined8 *)local_68;
                    __AMRestoreModeDevice::with_amai_locked(local_b0,local_68);
                    if (local_48 == (undefined8 *)local_68) {
                      lVar15 = 0x20;
LAB_000d3a95:
                      in_RCX = (undefined1  [8])*local_48;
                      (**(code **)(((pthread_mutex_t *)in_RCX)->__opaque + lVar15 + -8))();
                    }
                    else {
                      lVar15 = 0x28;
                      if (local_48 != (undefined8 *)0x0) goto LAB_000d3a95;
                    }
                    if ((local_80._12_4_ != 0) || (local_98 == 0)) {
                      local_80._12_4_ = 0xbc6;
                      _CFRelease(local_80._0_8_);
                      ppVar10 = local_c0;
                      break;
                    }
                    _CFRelease(local_80._0_8_);
                    ppVar10 = local_c0;
                    local_80._12_4_ =
                         __AMRestoreCreateCFDataWithContentsOfFile(local_98,local_a8 + 8);
                    _CFRelease(local_98);
                    if (local_80._12_4_ != 0) break;
                    if (local_a8._8_8_ == 0) {
                      local_80._12_4_ = 0x12;
                      break;
                    }
                    cVar1 = _CFStringHasPrefix(uVar11,&cf_LLB);
                    if (cVar1 == '\0') {
                      cVar1 = _CFStringHasPrefix(uVar11,&cf_sep_firmware);
                      if (cVar1 == '\0') {
                        cVar1 = _CFStringHasPrefix(uVar11,&cf_sep_patches);
                        if (cVar1 == '\0') {
                          _CFArrayAppendValue(lVar14,local_a8._8_8_);
                        }
                        else {
                          _CFDictionarySetValue(local_88,&cf_SEPPatchImageData);
                        }
                      }
                      else {
                        _CFDictionarySetValue(local_88,&cf_SEPImageData,local_a8._8_8_);
                      }
                    }
                    else {
                      _CFDictionarySetValue(local_88,&cf_LlbImageData,local_a8._8_8_);
                    }
                    _CFRelease(local_a8._8_8_);
                  }
                  lVar8 = lVar8 + 1;
                } while (local_90 != lVar8);
              }
              if ((local_80._12_4_ == 0) &&
                 (iVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,local_88), iVar5 != 0)) {
                local_80._12_4_ = 9;
              }
            }
            if (local_88 != 0) {
              _CFRelease();
            }
            if (lVar14 != 0) {
              _CFRelease();
            }
            iVar5 = local_80._12_4_;
            _CFRelease(lVar6);
          }
          _CFRelease(ppVar10);
        }
LAB_000d40aa:
        if (local_c8 != 0) {
          _CFRelease();
        }
        if (local_a8._0_8_ != 0) {
          _CFRelease();
        }
        bVar21 = iVar5 == 0;
        pcVar18 = &cf_Failedtohandleallflashrequest;
        goto LAB_000d3384;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_FUDData,0);
      if (lVar8 == 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        p_Var12 = *(__AMRestoreModeDevice **)(lVar6 + 0x10);
        local_a8._8_8_ = 0;
        local_80._0_8_ = 0;
        local_98 = 0;
        puStack_60 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        local_b8 = (pthread_mutex_t *)(p_Var12 + 0x158);
        local_68 = (undefined1  [8])local_b8;
        _pthread_mutex_lock(local_b8);
        lVar8 = _CFDictionaryGetValue
                          (*(undefined8 *)(lVar6 + 0x18),&cf_PersonalizedRestoreBundlePath);
        if (lVar8 == 0) {
          iVar5 = 6;
LAB_000d3ce1:
          lVar6 = 0;
          local_90 = 0;
        }
        else {
          uVar11 = _CFGetAllocator(p_Var12);
          in_RCX = (undefined1  [8])((long)&MACH_HEADER.magic + 1);
          local_88 = _CFURLCreateWithFileSystemPath(uVar11,lVar8,0);
          if (local_88 == 0) {
            iVar5 = 0x12;
            goto LAB_000d3ce1;
          }
          lVar6 = _AMRAuthInstallCopyVariant
                            (*(undefined8 *)(p_Var12 + 0x150),*(undefined8 *)(lVar6 + 0x18));
          if (lVar6 == 0) {
            local_90 = 0;
            _AMRLog(3,&cf_Can_thandleFUDrequestwithoutvariant);
            iVar5 = 0x13;
          }
          else {
            uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            in_RCX = (undefined1  [8])PTR__kCFTypeDictionaryValueCallBacks_004411b8;
            local_90 = _CFDictionaryCreateMutable
                                 (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
            if (local_90 == 0) {
              iVar5 = 0x12;
              local_90 = 0;
            }
            else if (p_Var7 == (__CFDictionary *)0x0) {
              _AMRestoreModeDeviceProgressAsync(p_Var12,0x24,-1,(__CFString *)0x0);
              in_RCX = (undefined1  [8])(local_a8 + 8);
              iVar2 = _AMAuthInstallBundleCopyPersonalizedFUDFirmwareImages
                                (*(undefined8 *)(p_Var12 + 0x150),local_88,lVar6);
              if (iVar2 == 0) {
                _CFDictionarySetValue(local_90,&cf_FUDImageData,local_a8._8_8_);
                goto LAB_000d4187;
              }
              iVar5 = _AMAuthInstallToRestoreError(iVar2);
              _AMRLog(3,&cf_failedtocopyFUDimages_error__d,iVar2);
            }
            else {
              in_RCX = (undefined1  [8])local_80;
              iVar2 = _AMAuthInstallBundleCopyPersonalizedFUDFirmwareURLs
                                (*(undefined8 *)(p_Var12 + 0x150),local_88,lVar6);
              if (iVar2 == 0) {
                cVar1 = _CFDictionaryContainsKey(p_Var7,&cf_FUDImageList);
                if (cVar1 == '\0') {
                  cVar1 = _CFDictionaryContainsKey(p_Var7,&cf_ImageName);
                  if (cVar1 == '\0') {
LAB_000d4187:
                    lVar8 = 0;
                    ppVar10 = (pthread_mutex_t *)0x0;
                    local_b0 = (__AMRestoreModeDevice *)0x0;
LAB_000d4198:
                    _pthread_mutex_unlock(local_b8);
                    puStack_60 = (undefined1 *)((ulong)puStack_60 & 0xffffffffffffff00);
                    iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,local_90);
                    iVar5 = 0;
                    if (iVar2 != 0) {
                      iVar5 = 9;
                      _AMRLog(3,&cf_restored_send_messagefailed_msgstatus__d,iVar2);
                    }
                    p_Var12 = local_b0;
                    if (ppVar10 != (pthread_mutex_t *)0x0) goto LAB_000d41cf;
                    goto LAB_000d41d7;
                  }
                  uVar16 = _CFDictionaryGetValue(p_Var7,&cf_ImageName);
                  cVar1 = _CFDictionaryContainsKey(local_80._0_8_,uVar16);
                  if (cVar1 == '\0') {
                    iVar5 = 0xb;
                    _AMRLog(3,&cf_Hostaskedfor__whichisnotpresent_,uVar16);
                  }
                  else {
                    _CFDictionarySetValue(local_90,&cf_ImageName,uVar16);
                    uVar17 = _CFDictionaryGetValue(local_80._0_8_,uVar16);
                    uVar3 = _AMSupportCreateDataFromMappedFileURL(uVar11,&local_98,uVar17);
                    if (uVar3 == 0) {
                      _CFDictionarySetValue(local_90,&cf_FUDImageData,local_98);
                      goto LAB_000d4187;
                    }
                    iVar5 = 0xb;
                    in_RCX = (undefined1  [8])(ulong)uVar3;
                    _AMRLog(3,&cf_failedtocopyFUDfile___error__d,uVar16);
                  }
                }
                else {
                  lVar8 = _CFDictionaryGetCount(local_80._0_8_);
                  local_c0 = _malloc(lVar8 * 8);
                  if (local_c0 == (pthread_mutex_t *)0x0) {
                    iVar5 = 0;
                    _AMRLog(3,&cf_copy_fud_data_FailedtoallocatecontentsKeysBuffer);
                  }
                  else {
                    p_Var12 = _malloc(lVar8 * 8);
                    ppVar10 = local_c0;
                    if (p_Var12 == (__AMRestoreModeDevice *)0x0) {
                      iVar5 = 0;
                      _AMRLog(3,&cf_copy_fud_data_FailedtoallocatecontentsValuesBuffer);
                      p_Var12 = (__AMRestoreModeDevice *)0x0;
                      lVar8 = 0;
                      ppVar10 = local_c0;
                    }
                    else {
                      local_b0 = p_Var12;
                      _CFDictionaryGetKeysAndValues(local_80._0_8_,local_c0,p_Var12);
                      in_RCX = (undefined1  [8])PTR__kCFTypeArrayCallBacks_004411a8;
                      lVar8 = _CFArrayCreate(uVar11,ppVar10,lVar8);
                      if (lVar8 != 0) {
                        _CFDictionarySetValue(local_90,&cf_FUDImageList,lVar8);
                        goto LAB_000d4198;
                      }
                      iVar5 = 0;
                      _AMRLog(3,&cf_copy_fud_data_Failedtocreatefudlistarray);
                      lVar8 = 0;
                      p_Var12 = local_b0;
                    }
LAB_000d41cf:
                    _free(ppVar10);
LAB_000d41d7:
                    if (p_Var12 != (__AMRestoreModeDevice *)0x0) {
                      _free(p_Var12);
                    }
                    if (lVar8 != 0) {
                      _CFRelease(lVar8);
                    }
                  }
                }
              }
              else {
                iVar5 = _AMAuthInstallToRestoreError(iVar2);
                _AMRLog(3,&cf_failedtocopyFUDimages_error__d,iVar2);
              }
            }
          }
          _CFRelease(local_88);
        }
        if (local_98 != 0) {
          _CFRelease();
        }
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
        if (local_90 != 0) {
          _CFRelease(local_90);
        }
        if (local_a8._8_8_ != 0) {
          _CFRelease();
        }
        if (local_80._0_8_ != 0) {
          _CFRelease();
        }
        if ((char)puStack_60 == '\x01') {
          _pthread_mutex_unlock((pthread_mutex_t *)local_68);
        }
        bVar21 = iVar5 == 0;
        pcVar18 = &cf_FailedtohandleFUDdatarequest;
        goto LAB_000d3384;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_EANData,0);
      if (lVar8 == 0) {
        iVar5 = _handlePersonalizedDataRequest(param_1,p_Var7,'\x01');
LAB_000d386a:
        bVar21 = iVar5 == 0;
        pcVar18 = &cf_FailedtohandleEANdatarequest;
        goto LAB_000d3384;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_PersonalizedData,0);
      if (lVar8 == 0) {
        iVar5 = _handlePersonalizedDataRequest(param_1,p_Var7,'\0');
        goto LAB_000d386a;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_KernelCache,0);
      if (lVar8 == 0) {
        iVar5 = _handleKernelCacheRequest(param_1);
LAB_000d3d5a:
        bVar21 = iVar5 == 0;
        pcVar18 = &cf_Failedtohandlekernelcacherequest;
        goto LAB_000d3384;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_DeviceTree,0);
      if (lVar8 == 0) {
        iVar5 = _handleDeviceTreeRequest(param_1);
        goto LAB_000d3d5a;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_BasebandBootData,0);
      if (lVar8 == 0) {
        iVar5 = _handleBasebandBootDataRequest(param_1,p_Var7);
        bVar21 = iVar5 == 0;
        pcVar18 = &cf_Failedtohandlebasebandbootdatarequest;
        goto LAB_000d3384;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_BasebandStackData,0);
      if (lVar8 == 0) {
        iVar5 = _handleBasebandStackDataRequest(param_1,p_Var7);
        bVar21 = iVar5 == 0;
        pcVar18 = &cf_Failedtohandlebasebandstackdatarequest;
        goto LAB_000d3384;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_BasebandData,0);
      if (lVar8 == 0) {
        iVar5 = _handleBasebandUpdaterRequest(param_1,p_Var7);
        bVar21 = iVar5 == 0;
        pcVar18 = &cf_Failedtohandlebasebandupdaterrequest;
        goto LAB_000d3384;
      }
      lVar8 = _CFStringCompare(lVar6,&cf_FirmwareUpdaterPreflight,0);
      if (lVar8 != 0) {
        pcVar20 = &cf_ReceiptManifest;
        auVar22 = _CFStringCompare(lVar6,&cf_ReceiptManifest,0);
        if (auVar22._0_8_ == 0) {
          iVar5 = _handleReceiptManifestRequest(param_1,(__CFDictionary *)pcVar20,auVar22._8_8_);
          bVar21 = iVar5 == 0;
          pcVar18 = &cf_Failedtohandlereceiptmanifestrequest;
        }
        else {
          lVar8 = _CFStringCompare(lVar6,&cf_FirmwareUpdaterData,0);
          if ((lVar8 == 0) ||
             (lVar8 = _CFStringCompare(lVar6,&cf_FirmwareUpdaterDataV2,0), lVar8 == 0)) {
            local_68 = (undefined1  [8])0x0;
            iVar5 = _handleFirmwareUpdaterRequest(param_1,p_Var7,(__CFString **)local_68);
            if (iVar5 == 0) goto LAB_000d4374;
            in_RCX = local_68;
            if (iVar5 == 0x46) {
              pcVar20 = (cfstringStruct *)
                        _CFStringCreateWithFormat
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                   &cf___failure_mismatchedhosttools_);
            }
            else {
              pcVar20 = (cfstringStruct *)
                        _CFStringCreateWithFormat
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                   &cf___failed_seehostlogs_);
            }
            goto LAB_000d3388;
          }
          pcVar20 = &cf_ProvisioningData;
          lVar8 = _CFStringCompare(lVar6,&cf_ProvisioningData,0);
          if (lVar8 == 0) {
            iVar5 = _handleProvisioningRequest(param_1,(__CFDictionary *)pcVar20);
            bVar21 = iVar5 == 0;
            pcVar18 = &cf_Failedtohandleprovisioningrequest;
          }
          else {
            lVar8 = _CFStringCompare(lVar6,&cf_RootTicket,0);
            if (lVar8 == 0) {
              iVar5 = _handleRootTicketRequest(param_1,(__CFDictionary *)0x0,extraout_DL);
              bVar21 = iVar5 == 0;
              pcVar18 = &cf_Failedtohandlerootticketrequest;
            }
            else {
              lVar8 = _CFStringCompare(lVar6,&cf_BuildIdentityDict,0);
              if ((lVar8 == 0) ||
                 (lVar8 = _CFStringCompare(lVar6,&cf_BuildIdentityDictV2,0), lVar8 == 0)) {
                iVar5 = _handleBuildIdentityRequest(param_1,p_Var7);
                bVar21 = iVar5 == 0;
                pcVar18 = &cf_Failedtohandlebuildidentityrequest;
              }
              else {
                pcVar20 = &cf_FDRTrustData;
                lVar8 = _CFStringCompare(lVar6,&cf_FDRTrustData,0);
                if (lVar8 == 0) {
                  iVar5 = _handleFDRInitRequest(param_1,(__CFDictionary *)pcVar20);
                  bVar21 = iVar5 == 0;
                  pcVar18 = &cf_FailedtohandleFDRInitrequest;
                }
                else {
                  lVar8 = _CFStringCompare(lVar6,&cf_FDRMemoryCommit,0);
                  if (lVar8 == 0) {
                    iVar5 = _handleFDRCommitRequest(param_1,p_Var7);
                    bVar21 = iVar5 == 0;
                    pcVar18 = &cf_FailedtohandleFDRCommitrequest;
                  }
                  else {
                    lVar8 = _CFStringCompare(lVar6,&cf_RootData,0);
                    if (lVar8 == 0) {
                      in_RCX = (undefined1  [8])0x0;
                      iVar5 = _handleOverlayRootDataRequest
                                        (param_1,p_Var7,(__CFString *)&cf_RootToInstall,0,&local_70)
                      ;
                      bVar21 = iVar5 == 0;
                      pcVar18 = &cf_Failedtohandlecustomrootrequest;
                    }
                    else {
                      lVar8 = _CFStringCompare(lVar6,&cf_OverlayRootDataCount,0);
                      if (lVar8 == 0) {
                        in_RCX = (undefined1  [8])0xffffffffffffffff;
                        iVar5 = _handleOverlayRootDataRequest
                                          (param_1,p_Var7,(__CFString *)&cf_OverlayRootsToInstall,-1
                                           ,&local_70);
                        bVar21 = iVar5 == 0;
                        pcVar18 = &cf_Failedtohandlecustomoverlayrootrequest;
                      }
                      else {
                        lVar8 = _CFStringCompare(lVar6,&cf_DiagData,0);
                        if (lVar8 == 0) {
                          iVar5 = _handleDiagDataRequest(param_1);
                          bVar21 = iVar5 == 0;
                          pcVar18 = &cf_Failedtohandlediagsdatarequest;
                        }
                        else {
                          lVar8 = _CFStringCompare(lVar6,&cf_BasebandUpdaterOutputData,0);
                          if (lVar8 == 0) {
                            iVar5 = _handleUpdaterOutputRequest(param_1);
                            if (iVar5 != 0) {
                              _AMRLog(4,&cf_Unabletocopyupdateroutput__d,iVar5);
                            }
                            goto LAB_000d3283;
                          }
                          lVar8 = _CFStringCompare(lVar6,&cf_SsoServiceTicket,0);
                          if (lVar8 == 0) {
                            iVar5 = _handleSsoServiceTicketRequest(param_1,&local_70);
                            bVar21 = iVar5 == 0;
                            pcVar18 = &cf_FailedtohandleSSOServiceTicketrequest;
                          }
                          else {
                            lVar8 = _CFStringCompare(lVar6,&cf_StockholmPostflight,0);
                            if (lVar8 == 0) {
                              iVar5 = _handleStockholmPostFlightDataRequest(param_1,&local_70);
                              bVar21 = iVar5 == 0;
                              pcVar18 = &cf_Failedtohandlestockholmpostflightdatarequest;
                            }
                            else {
                              lVar8 = _CFStringCompare(lVar6,&cf_OpalFWData,0);
                              if (lVar8 == 0) {
                                iVar5 = _handleFWDataRequest(param_1,p_Var7,&local_70);
                                bVar21 = iVar5 == 0;
                                pcVar18 = &cf_FailedtohandleopalFWdatarequest;
                              }
                              else {
                                lVar8 = _CFStringCompare(lVar6,&cf_GrapeFWData,0);
                                if (lVar8 == 0) {
                                  iVar5 = _handleFWDataRequest(param_1,p_Var7,&local_70);
                                  bVar21 = iVar5 == 0;
                                  pcVar18 = &cf_FailedtohandlegrapeFWdatarequest;
                                }
                                else {
                                  lVar8 = _CFStringCompare(lVar6,&cf_HPMFWData,0);
                                  if (lVar8 == 0) {
                                    iVar5 = _handleFWDataRequest(param_1,p_Var7,&local_70);
                                    bVar21 = iVar5 == 0;
                                    pcVar18 = &cf_FailedtohandleportmicroFWdatarequest;
                                  }
                                  else {
                                    lVar8 = _CFStringCompare(lVar6,&cf_PeppyFWData,0);
                                    if (lVar8 == 0) {
                                      iVar5 = _handleFWDataRequest(param_1,p_Var7,&local_70);
                                      bVar21 = iVar5 == 0;
                                      pcVar18 = &cf_FailedtohandlepeppyFWdatarequest;
                                    }
                                    else {
                                      lVar8 = _CFStringCompare(lVar6,&cf_NitrogenFWData,0);
                                      if (lVar8 == 0) {
                                        iVar5 = _handleFWDataRequest(param_1,p_Var7,&local_70);
                                        bVar21 = iVar5 == 0;
                                        pcVar18 = &cf_FailedtohandlenitrogenFWdatarequest;
                                      }
                                      else {
                                        lVar8 = _CFStringCompare(lVar6,&cf_RamdiskFWData,0);
                                        if (lVar8 == 0) {
                                          iVar5 = _handleFWDataRequest(param_1,p_Var7,&local_70);
                                          bVar21 = iVar5 == 0;
                                          pcVar18 = &cf_FailedtohandleRamdiskFWdatarequest;
                                        }
                                        else {
                                          lVar8 = _CFStringCompare(lVar6,&cf_S3EOverride,0);
                                          if (lVar8 == 0) {
                                            iVar5 = _handleNANDFWDataRequest
                                                              (param_1,p_Var7,&local_70);
                                            bVar21 = iVar5 == 0;
                                            pcVar18 = &cf_FailedtohandleNANDFWdatarequest;
                                          }
                                          else {
                                            lVar8 = _CFStringCompare(lVar6,&cf_USBCOverride,0);
                                            if (lVar8 == 0) {
                                              iVar5 = _handleFWDataRequest(param_1,p_Var7,&local_70)
                                              ;
                                              bVar21 = iVar5 == 0;
                                              pcVar18 = &cf_FailedtohandleportUSB_CFWdatarequest;
                                            }
                                            else {
                                              lVar8 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSOverlayRootDataCount,0);
                                              if (lVar8 == 0) {
                                                in_RCX = (undefined1  [8])0xffffffffffffffff;
                                                iVar5 = _handleOverlayRootDataRequest
                                                                  (param_1,p_Var7,
                                                                   (__CFString *)
                                                                   &
                                                  cf_RecoveryOSOverlayRootsToInstall,-1,&local_70);
                                                bVar21 = iVar5 == 0;
                                                pcVar18 = &
                                                  cf_Failedtohandlerecoveryoscustomoverlayrootrequest
                                                ;
                                              }
                                              else {
                                                lVar8 = _CFStringCompare(lVar6,&
                                                  cf_UpdateVolumeOverlayRootDataCount,0);
                                                if (lVar8 == 0) {
                                                  _AMRLog(6,&
                                                  cf_Handlingrequesttoinstallupdatevolumeoverlayroot
                                                  );
                                                  in_RCX = (undefined1  [8])0xffffffffffffffff;
                                                  iVar5 = _handleOverlayRootDataRequest
                                                                    (param_1,p_Var7,
                                                                     (__CFString *)
                                                                     &
                                                  cf_UpdateVolumeOverlayRootsToInstall,-1,&local_70)
                                                  ;
                                                  bVar21 = iVar5 == 0;
                                                  pcVar18 = &
                                                  cf_Failedtohandleupdatevolumecustomoverlayrootrequest
                                                  ;
                                                }
                                                else {
                                                  auVar22 = _CFStringCompare(lVar6,&
                                                  cf_AuthInstallCACert,0);
                                                  if (auVar22._0_8_ == 0) {
                                                    iVar5 = _handleCACertRequest
                                                                      (param_1,(__CFDictionary *)
                                                                               &local_70,
                                                                       auVar22._8_8_,
                                                                       (__CFError **)in_RCX);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_FailedtohandleAuthInstalltrustedCACertrequest;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSImage,0);
                                                  if (lVar8 == 0) {
                                                    iVar5 = _handleRecoveryOSImageRequest
                                                                      (param_1,&local_70);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandlerecoveryosimagerequest;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSASRImage,0);
                                                  if (lVar8 == 0) {
                                                    iVar5 = _handleImageDataRequest
                                                                      (param_1,(__CFString *)
                                                                               &cf_RecoveryOSImage);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandlerecoveryosasrimagerequest;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSFileAssetImage,0);
                                                  if (lVar8 == 0) {
                                                    iVar5 = _handleRecoveryOSFileRequest
                                                                      (param_1,p_Var7,&local_70);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandlerecoveryosassetfilerequest;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSRootTicketData,0);
                                                  if (lVar8 == 0) {
                                                    iVar5 = _handleRootTicketRequest
                                                                      (param_1,(__CFDictionary *)
                                                                               ((long)&MACH_HEADER.
                                                                                       magic + 1),
                                                                       extraout_DL_00);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandlerecoveryosrootticketrequest;
                                                  }
                                                  else {
                                                    auVar22 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSVersionData,0);
                                                  if (auVar22._0_8_ == 0) {
                                                    iVar5 = _handleRecoveryOSVersionDataRequest
                                                                      (param_1,(__CFDictionary *)
                                                                               &local_70,
                                                                       auVar22._8_8_);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandlerecoveryosversiondatarequest;
                                                  }
                                                  else {
                                                    auVar22 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSIBootFWFilesImages,0);
                                                  if (auVar22._0_8_ == 0) {
                                                    iVar5 = _handleRecoveryOSiBootFWFileRequest
                                                                      (param_1,(__CFDictionary *)
                                                                               &local_70,
                                                                       auVar22._8_8_);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_FailedtohandlerecoveryosiBootfirmwarefilesrequest
                                                  ;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_SourceBootObject,0);
                                                  if (lVar8 == 0) {
                                                    in_RCX = (undefined1  [8])
                                                             ((long)&MACH_HEADER.magic + 1);
                                                    iVar5 = _handleBootObjectRequest
                                                                      (param_1,p_Var7,false,1,
                                                                       &local_70);
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_SourceBootObjectV2,0);
                                                  if (lVar8 == 0) {
                                                    in_RCX = (undefined1  [8])
                                                             ((long)&MACH_HEADER.magic + 2);
                                                    iVar5 = _handleBootObjectRequest
                                                                      (param_1,p_Var7,false,2,
                                                                       &local_70);
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_SourceBootObjectV3,0);
                                                  if (lVar8 == 0) {
                                                    in_RCX = (undefined1  [8])
                                                             ((long)&MACH_HEADER.magic + 3);
                                                    iVar5 = _handleBootObjectRequest
                                                                      (param_1,p_Var7,false,3,
                                                                       &local_70);
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_SourceBootObjectV4,0);
                                                  if (lVar8 == 0) {
                                                    in_RCX = (undefined1  [8])&MACH_HEADER.cputype;
                                                    iVar5 = _handleBootObjectRequest
                                                                      (param_1,p_Var7,false,4,
                                                                       &local_70);
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_SourceBootObjectV5,0);
                                                  if (lVar8 != 0) {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_PersonalizedBootObject,0);
                                                  if (lVar8 == 0) {
                                                    in_RCX = (undefined1  [8])
                                                             ((long)&MACH_HEADER.magic + 1);
                                                    iVar5 = _handleBootObjectRequest
                                                                      (param_1,p_Var7,true,1,
                                                                       &local_70);
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_PersonalizedBootObjectV3,0);
                                                  if (lVar8 != 0) {
                                                    auVar22 = _CFStringCompare(lVar6,&
                                                  cf_RecoveryOSLocalPolicy,0);
                                                  if (auVar22._0_8_ == 0) {
                                                    iVar5 = _handleRecoveryOSLocalPolicyRequest
                                                                      (param_1,p_Var7,auVar22._8_8_)
                                                    ;
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandlerecoveryoslocalpolicyrequest;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_OverlayRootDataForKey,0);
                                                  if (lVar8 == 0) {
                                                    iVar5 = _handleOverlayRootDataRequestForKey
                                                                      (param_1,p_Var7,&local_70);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &cf_Failedtohandleoverlayrootsrequest;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_OverlayRootDataForKeyIndex,0);
                                                  if (lVar8 == 0) {
                                                    iVar5 = _handleOverlayRootDataRequestForKeyIndex
                                                                      (param_1,p_Var7,&local_70);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandleindexedoverlayrootsrequest;
                                                  }
                                                  else {
                                                    lVar8 = _CFStringCompare(lVar6,&
                                                  cf_BootabilityBundle,0);
                                                  if (lVar8 == 0) {
                                                    iVar5 = _handleBootabilityBundleDataRequest
                                                                      (param_1,&local_70);
                                                    bVar21 = iVar5 == 0;
                                                    pcVar18 = &
                                                  cf_Failedtohandlebootabilitybundlerequest;
                                                  }
                                                  else {
                                                    pcVar20 = &cf_RestoreLocalPolicy;
                                                    auVar22 = _CFStringCompare(lVar6,&
                                                  cf_RestoreLocalPolicy,0);
                                                  if (auVar22._0_8_ != 0) {
                                                    _AMRLog(3,&
                                                  cf_Unexpected_unsupportedcommand____sentbydevice_Upgradeyourrestoretools_
                                                  ,lVar6);
                                                  iVar5 = 10;
                                                  pcVar20 = &cf_UnknownCommand_Upgraderestoretools_;
                                                  goto LAB_000d3388;
                                                  }
                                                  iVar5 = _handleRestoreLocalPolicyRequest
                                                                    (param_1,(__CFDictionary *)
                                                                             pcVar20,auVar22._8_8_);
                                                  bVar21 = iVar5 == 0;
                                                  pcVar18 = &
                                                  cf_Failedtohandlerestorelocalpolicyrequest;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_000d3384;
                                                  }
                                                  in_RCX = (undefined1  [8])
                                                           ((long)&MACH_HEADER.magic + 3);
                                                  iVar5 = _handleBootObjectRequest
                                                                    (param_1,p_Var7,true,3,&local_70
                                                                    );
                                                  }
                                                  bVar21 = iVar5 == 0;
                                                  pcVar18 = &
                                                  cf_Failedtohandlepersonalizedbootobjectrequest;
                                                  goto LAB_000d3384;
                                                  }
                                                  in_RCX = (undefined1  [8])
                                                           ((long)&MACH_HEADER.cputype + 1);
                                                  iVar5 = _handleBootObjectRequest
                                                                    (param_1,p_Var7,false,5,
                                                                     &local_70);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  bVar21 = iVar5 == 0;
                                                  pcVar18 = &
                                                  cf_Failedtohandlesourcebootobjectrequest;
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
        goto LAB_000d3384;
      }
      local_68 = (undefined1  [8])0x0;
      iVar5 = _handleFirmwareUpdaterPreflight(param_1,p_Var7,(__CFString **)local_68);
      if (iVar5 == 0) {
LAB_000d4374:
        pcVar20 = (cfstringStruct *)0x0;
      }
      else {
        in_RCX = local_68;
        pcVar20 = (cfstringStruct *)
                  _CFStringCreateWithFormat
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                             &cf___failed_seehostlogs_);
      }
    }
LAB_000d3388:
    if ((param_2 != (__CFError **)0x0) && (iVar5 != 0)) {
      pcVar18 = &cf_Failedtohandledatarequest;
      if (pcVar20 != (cfstringStruct *)0x0) {
        pcVar18 = pcVar20;
      }
      p_Var9 = (__CFError *)
               _AMRCreateErrorWithUnderlyingError
                         ((__CFString *)(long)iVar5,(long)pcVar18,(__CFString *)local_70,
                          (__CFError *)in_RCX);
      *param_2 = p_Var9;
      pcVar20 = pcVar18;
    }
  }
  _AMSupportSafeRelease(local_70);
  _AMSupportSafeRelease(pcVar20);
LAB_000d33d4:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

