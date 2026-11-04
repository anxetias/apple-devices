// rea decompile_all
// name: ACFURestoreHost::copyFirmware
// address: 0x2113fa
// body: available
// range: 0x2113fa-0x2127fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::copyFirmware() */

__CFData * __thiscall ACFURestoreHost::copyFirmware(ACFURestoreHost *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ACFULogging *pAVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  __CFData *p_Var10;
  long lVar11;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 uVar12;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  undefined8 extraout_RAX_04;
  ACFURestoreHost *pAVar13;
  __CFString *p_Var14;
  undefined8 *puVar15;
  __CFURL *p_Var16;
  __CFURL *p_Var17;
  ACFUCommon *this_00;
  char *pcVar18;
  ACFURestoreHost local_248 [24];
  ACFURestoreHost local_230 [24];
  undefined1 local_218 [24];
  ACFURestoreHost local_200 [24];
  byte local_1e8 [16];
  undefined8 local_1d8;
  byte local_1d0 [16];
  undefined8 local_1c0;
  byte local_1b8 [16];
  undefined8 local_1a8;
  byte local_1a0 [16];
  undefined8 local_190;
  byte local_188 [16];
  void *local_178;
  byte local_170 [16];
  void *local_160;
  byte local_158 [16];
  void *local_148;
  byte local_140 [16];
  void *local_130;
  byte local_128 [16];
  void *local_118;
  ACFURestoreHost *local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  ACFURestoreHost *local_f0;
  __CFURL *local_e8;
  __CFURL *local_e0;
  __CFURL *local_d8 [2];
  void *local_c8;
  __CFString *local_c0;
  long local_b8;
  undefined8 local_b0;
  __CFString *local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined8 local_78;
  ulong uStack_70;
  ACFURestoreHost *local_68;
  ulong local_58;
  ulong uStack_50;
  ACFURestoreHost *local_48;
  long local_38;
  
  uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_c0 = (__CFString *)
             _CFStringCreateWithFormat
                       (uVar12,0,&cf_Firmware____Rooted_ftab_bin,*(undefined8 *)(this + 0xe0));
  if (local_c0 == (__CFString *)0x0) {
    copyFirmware();
    return (__CFData *)0x0;
  }
  lVar4 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_DestBundlePath);
  if (lVar4 != 0) {
    pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_98,"ACFURestoreHost");
    puVar6 = (ulong *)std::string::append((char *)&local_98);
    local_48 = (ACFURestoreHost *)puVar6[2];
    local_58 = *puVar6;
    uStack_50 = puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6 = (ulong *)std::string::append((char *)&local_58);
    local_68 = (ACFURestoreHost *)puVar6[2];
    local_78 = *puVar6;
    uStack_70 = puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    ACFULogging::handleMessageCFType(pAVar5,&local_78,0,"personalizedURL: ",lVar4);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  cVar1 = _CFDictionaryContainsKey(*(undefined8 *)(this + 0x10),&cf_BundleDataDict);
  uVar7 = ACFULogging::getLogInstance();
  if (cVar1 == '\0') {
    ACFULogging::handleMessage
              (uVar7,0,"%s::%s: running host invoked restore info -- using bundleURL\n",
               "ACFURestoreHost","copyFirmware");
    local_38 = _CFDictionaryCreateMutable
                         (uVar12,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (local_38 != 0) {
      local_a8 = (__CFString *)
                 _CFDictionaryCreateMutable
                           (uVar12,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (local_a8 == (__CFString *)0x0) {
        copyFirmware();
        p_Var10 = (__CFData *)0x0;
        local_a8 = local_c0;
        lVar4 = local_38;
        goto LAB_00212492;
      }
      lVar8 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_BundlePath);
      if (lVar8 == 0) {
LAB_0021266b:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (local_230,"copyFirmware: failed to get src bundle URL");
        ACFUError::addError((ACFUError *)(this + 0x18),local_230,0xfa1,0);
        copyFirmware(local_230);
      }
      else {
        lVar9 = _CFURLGetTypeID();
        lVar11 = _CFGetTypeID(lVar8);
        if (lVar9 != lVar11) goto LAB_0021266b;
        local_108 = lVar8;
        lVar8 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_Options);
        local_100 = uVar12;
        local_f8 = lVar4;
        if (lVar8 == 0) {
LAB_0021188e:
          local_b8 = 0;
LAB_00211890:
          local_b0 = 0;
LAB_0021189b:
          p_Var10 = *(__CFData **)(this + 0x88);
          if (p_Var10 == *(__CFData **)(this + 0x90)) {
            local_a0 = (ACFURestoreHost *)((ulong)local_a0._4_4_ << 0x20);
          }
          else {
            local_f0 = this + 0x18;
            local_a0 = (ACFURestoreHost *)((ulong)local_a0._4_4_ << 0x20);
            local_110 = this;
            do {
              local_e8 = (__CFURL *)0x0;
              local_e0 = (__CFURL *)0x0;
              lVar4 = getPathFromBuildID(*(__CFDictionary **)(local_110 + 0x10),
                                         *(__CFString **)p_Var10);
              ACFUCommon::stringFromCFString((ACFUCommon *)&local_78,*(__CFString **)p_Var10);
              if ((local_78 & 1) == 0) {
                if (local_78._0_1_ == (ACFUCommon)0x0) {
LAB_0021193e:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (&local_58,"UNDEF");
                }
                else {
                  local_48 = local_68;
                  local_58 = local_78;
                  uStack_50 = uStack_70;
                }
              }
              else {
                if (uStack_70 == 0) goto LAB_0021193e;
                std::string::__init_copy_ctor_external
                          ((string *)&local_58,(char *)local_68,uStack_70);
              }
              if ((local_78 & 1) != 0) {
                operator_delete(local_68);
              }
              local_68 = local_48;
              local_78 = local_58;
              uStack_70 = uStack_50;
              if (lVar4 == 0) {
                if (p_Var10[8] == (__CFData)0x1) {
                  pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_d8,"ACFURestoreHost");
                  puVar6 = (ulong *)std::string::append((char *)local_d8);
                  local_88 = (void *)puVar6[2];
                  local_98 = *puVar6;
                  uStack_90 = puVar6[1];
                  *puVar6 = 0;
                  puVar6[1] = 0;
                  puVar6[2] = 0;
                  puVar6 = (ulong *)std::string::append((char *)&local_98);
                  local_48 = (ACFURestoreHost *)puVar6[2];
                  local_58 = *puVar6;
                  uStack_50 = puVar6[1];
                  *puVar6 = 0;
                  puVar6[1] = 0;
                  puVar6[2] = 0;
                  ACFULogging::handleMessageCFType
                            (pAVar5,&local_58,0,"skipping optional file...",*(undefined8 *)p_Var10);
                  if ((local_58 & 1) != 0) {
                    operator_delete(local_48);
                  }
                  if ((local_98 & 1) != 0) {
                    operator_delete(local_88);
                  }
                  if (((ulong)local_d8[0] & 1) != 0) {
                    operator_delete(local_c8);
                  }
                  iVar2 = 0x1d;
                }
                else {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_188,"copyFirmware: failed to find FW");
                  ACFUError::addError((ACFUError *)local_f0,local_188,0xfa1,0);
                  if ((local_188[0] & 1) != 0) {
                    operator_delete(local_178);
                  }
                  uVar12 = ACFULogging::getLogInstance();
                  pAVar13 = (ACFURestoreHost *)((long)&local_78 + 1);
                  if ((local_78 & 1) != 0) {
                    pAVar13 = local_68;
                  }
                  iVar2 = 4;
                  ACFULogging::handleMessage
                            (uVar12,2,"%s::%s: copyFirmware: failed to find FW (%s) in build ID\n",
                             "ACFURestoreHost","copyFirmware",pAVar13);
                }
              }
              else {
                if (local_f8 != 0) {
                  iVar3 = _AMSupportCopyURLWithAppendedComponent
                                    (local_100,local_f8,lVar4,0,&local_e0);
                  if ((iVar3 != 0) || (local_e0 == (__CFURL *)0x0)) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                              (local_170,"copyFirmware: failed to create personalized FW URL");
                    ACFUError::addError((ACFUError *)local_f0,local_170,4000,0);
                    if ((local_170[0] & 1) != 0) {
                      operator_delete(local_160);
                    }
                    uVar12 = ACFULogging::getLogInstance();
                    iVar2 = 4;
                    ACFULogging::handleMessage
                              (uVar12,2,
                               "%s::%s: copyFirmware: failed to create personalized FW URL (status: %d)\n"
                               ,"ACFURestoreHost","copyFirmware",iVar3);
                    goto LAB_00211d79;
                  }
                  cVar1 = ACFUCommon::doesPathExist(local_e0);
                  if (cVar1 == '\0') {
                    if (local_e0 != (__CFURL *)0x0) {
                      _CFRelease();
                      local_e0 = (__CFURL *)0x0;
                    }
                    local_a0 = (ACFURestoreHost *)((ulong)local_a0 & 0xffffffff00000000);
                  }
                  else {
                    pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                              (local_d8,"ACFURestoreHost");
                    puVar6 = (ulong *)std::string::append((char *)local_d8);
                    local_88 = (void *)puVar6[2];
                    local_98 = *puVar6;
                    uStack_90 = puVar6[1];
                    *puVar6 = 0;
                    puVar6[1] = 0;
                    puVar6[2] = 0;
                    puVar6 = (ulong *)std::string::append((char *)&local_98);
                    local_48 = (ACFURestoreHost *)puVar6[2];
                    local_58 = *puVar6;
                    uStack_50 = puVar6[1];
                    *puVar6 = 0;
                    puVar6[1] = 0;
                    puVar6[2] = 0;
                    ACFULogging::handleMessageCFType
                              (pAVar5,&local_58,0,"Firmware Object: ",*(undefined8 *)p_Var10);
                    if ((local_58 & 1) != 0) {
                      operator_delete(local_48);
                    }
                    if ((local_98 & 1) != 0) {
                      operator_delete(local_88);
                    }
                    if (((ulong)local_d8[0] & 1) != 0) {
                      operator_delete(local_c8);
                    }
                    pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                              (local_d8,"ACFURestoreHost");
                    puVar6 = (ulong *)std::string::append((char *)local_d8);
                    local_88 = (void *)puVar6[2];
                    local_98 = *puVar6;
                    uStack_90 = puVar6[1];
                    *puVar6 = 0;
                    puVar6[1] = 0;
                    puVar6[2] = 0;
                    puVar6 = (ulong *)std::string::append((char *)&local_98);
                    local_48 = (ACFURestoreHost *)puVar6[2];
                    local_58 = *puVar6;
                    uStack_50 = puVar6[1];
                    *puVar6 = 0;
                    puVar6[1] = 0;
                    puVar6[2] = 0;
                    uVar12 = ACFULogging::handleMessageCFType
                                       (pAVar5,&local_58,0,"Personalized Bundle FW URL: ",local_e0);
                    if ((local_58 & 1) != 0) {
                      operator_delete(local_48);
                      uVar12 = extraout_RAX_02;
                    }
                    if ((local_98 & 1) != 0) {
                      operator_delete(local_88);
                      uVar12 = extraout_RAX_03;
                    }
                    if (((ulong)local_d8[0] & 1) != 0) {
                      operator_delete(local_c8);
                      uVar12 = extraout_RAX_04;
                    }
                    local_a0 = (ACFURestoreHost *)
                               CONCAT44(local_a0._4_4_,(int)CONCAT71((int7)((ulong)uVar12 >> 8),1));
                  }
                }
                iVar3 = _AMSupportCopyURLWithAppendedComponent
                                  (local_100,local_108,lVar4,0,&local_e8);
                if ((iVar3 == 0) && (local_e8 != (__CFURL *)0x0)) {
                  p_Var16 = local_e8;
                  if (((ulong)local_a0 & 1) != 0) {
                    p_Var16 = local_e0;
                  }
                  _CFDictionaryAddValue(local_38,*(undefined8 *)p_Var10,p_Var16);
                  _CFDictionaryAddValue(local_a8,*(undefined8 *)p_Var10,local_e8);
                  iVar2 = 0;
                  if (local_e8 != (__CFURL *)0x0) {
                    _CFRelease();
                    local_e8 = (__CFURL *)0x0;
                    iVar2 = 0;
                  }
                }
                else {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_158,"copyFirmware: failed to create default FW URL");
                  ACFUError::addError((ACFUError *)local_f0,local_158,4000,0);
                  if ((local_158[0] & 1) != 0) {
                    operator_delete(local_148);
                  }
                  uVar12 = ACFULogging::getLogInstance();
                  iVar2 = 4;
                  ACFULogging::handleMessage
                            (uVar12,2,
                             "%s::%s: copyFirmware: failed to create default FW URL, (status: %d)\n"
                             ,"ACFURestoreHost","copyFirmware",iVar3);
                }
              }
LAB_00211d79:
              if ((local_78 & 1) != 0) {
                operator_delete(local_68);
              }
              if ((iVar2 != 0) && (iVar2 != 0x1d)) {
                if (iVar2 != 4) {
                  return p_Var10;
                }
                goto LAB_00211fd8;
              }
              p_Var10 = p_Var10 + 0x10;
              this = local_110;
            } while (p_Var10 != *(__CFData **)(local_110 + 0x90));
          }
          p_Var10 = (__CFData *)(**(code **)(*(long *)this + 0x28))(this,local_38,0);
          if (p_Var10 == (__CFData *)0x0) {
            if (((ulong)local_a0 & 1) != 0) {
              uVar12 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar12,0,
                         "%s::%s: attempting copyFirmwareUpdater again with source bundle file map\n"
                         ,"ACFURestoreHost","copyFirmware");
              p_Var10 = (__CFData *)(**(code **)(*(long *)this + 0x28))(this,local_a8,0);
              if (p_Var10 != (__CFData *)0x0) goto LAB_00211f14;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_1e8,"copyFirmware: updater failed to find firmware data with bundleURL"
                      );
            ACFUError::addError((ACFUError *)(this + 0x18),local_1e8,4000,0);
            pcVar18 = "%s::%s: updater failed to find firmware data with bundleURL\n";
            p_Var10 = (__CFData *)0x0;
            lVar4 = local_38;
            if ((local_1e8[0] & 1) != 0) {
              puVar15 = &local_1d8;
LAB_0021250a:
              lVar4 = local_38;
              operator_delete((void *)*puVar15);
            }
LAB_00212512:
            uVar12 = ACFULogging::getLogInstance();
            ACFULogging::handleMessage(uVar12,2,pcVar18,"ACFURestoreHost","copyFirmware");
            goto LAB_00212486;
          }
LAB_00211f14:
          if ((local_f8 == 0) || (local_b8 == 0)) {
            if ((char)local_b0 != '\0') goto LAB_00211fe9;
LAB_0021202c:
            if (local_f8 != 0) goto LAB_0021203a;
            lVar4 = local_38;
            if (((ulong)local_a0 & 1) == 0) goto LAB_00212486;
          }
          else {
            if ((char)local_b0 != '\0') {
LAB_00211fe9:
              uVar12 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar12,0,"%s::%s: removing any personalized bits of rooted firmware\n",
                         "ACFURestoreHost","copyFirmware");
              p_Var16 = (__CFURL *)_CFDictionaryGetValue(local_38,*(long *)(this + 8));
              cVar1 = ACFUCommon::removeFileWithURL(p_Var16);
              if (cVar1 == '\0') {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_1b8,"copyFirmware: failed to remove rooted fw personalized bits");
                ACFUError::addError((ACFUError *)(this + 0x18),local_1b8,0x3ec,0);
                pcVar18 = "%s::%s: failed to remove rooted fw personalized bits\n";
                lVar4 = local_38;
                if ((local_1b8[0] & 1) != 0) {
                  puVar15 = &local_1a8;
                  goto LAB_0021250a;
                }
                goto LAB_00212512;
              }
              goto LAB_0021202c;
            }
            pAVar13 = (ACFURestoreHost *)ACFULogging::getLogInstance();
            ACFULogging::handleMessage
                      (pAVar13,0,
                       "%s::%s: copying preflighted rooted firmware into the dst bundle...\n",
                       "ACFURestoreHost","copyFirmware");
            iVar2 = copyToPersonalizedBundlePath
                              (pAVar13,*(__CFDictionary **)(this + 0x10),local_c0,p_Var10);
            if (iVar2 != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_1d0,
                         "copyFirmware: failed to perform destination bundle copy of rooted firmware"
                        );
              ACFUError::addError((ACFUError *)(this + 0x18),local_1d0,0xfa3,0);
              pcVar18 = "%s::%s: failed to perform destination bundle copy of rooted firmware\n";
              lVar4 = local_38;
              if ((local_1d0[0] & 1) != 0) {
                puVar15 = &local_1c0;
                goto LAB_0021250a;
              }
              goto LAB_00212512;
            }
LAB_0021203a:
            if (((ulong)local_a0 & 1) == 0) {
              uVar12 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar12,0,
                         "%s::%s: copying preflighted bundle firmware into the dst bundle...\n",
                         "ACFURestoreHost","copyFirmware");
              puVar15 = *(undefined8 **)(this + 0x88);
              lVar4 = local_38;
              if (puVar15 != *(undefined8 **)(this + 0x90)) {
                local_a0 = this + 0x18;
                do {
                  p_Var14 = (__CFString *)
                            getPathFromBuildID(*(__CFDictionary **)(this + 0x10),
                                               (__CFString *)*puVar15);
                  this_00 = (ACFUCommon *)&local_78;
                  ACFUCommon::stringFromCFString(this_00,(__CFString *)*puVar15);
                  if ((local_78 & 1) == 0) {
                    if (local_78._0_1_ == (ACFUCommon)0x0) {
LAB_002120de:
                      this_00 = (ACFUCommon *)&local_58;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                (this_00,"UNDEF");
                    }
                    else {
                      local_48 = local_68;
                      local_58 = local_78;
                      uStack_50 = uStack_70;
                    }
                  }
                  else {
                    if (uStack_70 == 0) goto LAB_002120de;
                    this_00 = (ACFUCommon *)&local_58;
                    std::string::__init_copy_ctor_external
                              ((string *)this_00,(char *)local_68,uStack_70);
                  }
                  if ((local_78 & 1) != 0) {
                    operator_delete(local_68);
                    this_00 = (ACFUCommon *)local_68;
                  }
                  local_68 = local_48;
                  local_78 = local_58;
                  uStack_70 = uStack_50;
                  if (p_Var14 == (__CFString *)0x0) {
                    if (*(char *)(puVar15 + 1) == '\x01') {
                      pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                (local_d8,"ACFURestoreHost");
                      puVar6 = (ulong *)std::string::append((char *)local_d8);
                      local_88 = (void *)puVar6[2];
                      local_98 = *puVar6;
                      uStack_90 = puVar6[1];
                      *puVar6 = 0;
                      puVar6[1] = 0;
                      puVar6[2] = 0;
                      puVar6 = (ulong *)std::string::append((char *)&local_98);
                      local_48 = (ACFURestoreHost *)puVar6[2];
                      local_58 = *puVar6;
                      uStack_50 = puVar6[1];
                      *puVar6 = 0;
                      puVar6[1] = 0;
                      puVar6[2] = 0;
                      ACFULogging::handleMessageCFType
                                (pAVar5,&local_58,0,"skipping copying of optional file...",*puVar15)
                      ;
                      if ((local_58 & 1) != 0) {
                        operator_delete(local_48);
                      }
                      if ((local_98 & 1) != 0) {
                        operator_delete(local_88);
                      }
                      if (((ulong)local_d8[0] & 1) != 0) {
                        operator_delete(local_c8);
                      }
                      iVar2 = 0x30;
                    }
                    else {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                (local_140,"copyFirmware: failed to find FW in personalized path");
                      ACFUError::addError((ACFUError *)local_a0,local_140,0xfa1,0);
                      if ((local_140[0] & 1) != 0) {
                        operator_delete(local_130);
                      }
                      uVar12 = ACFULogging::getLogInstance();
                      pAVar13 = (ACFURestoreHost *)((long)&local_78 + 1);
                      if ((local_78 & 1) != 0) {
                        pAVar13 = local_68;
                      }
                      iVar2 = 4;
                      ACFULogging::handleMessage
                                (uVar12,2,
                                 "%s::%s: failed to find FW (%s) in build ID in personalized path\n"
                                 ,"ACFURestoreHost","copyFirmware",pAVar13);
                    }
                  }
                  else {
                    iVar3 = copyToPersonalizedBundlePath
                                      ((ACFURestoreHost *)this_00,*(__CFDictionary **)(this + 0x10),
                                       p_Var14,p_Var10);
                    iVar2 = 0;
                    if (iVar3 != 0) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                (local_128,
                                 "copyFirmware: failed to perform destination bundle copy of rooted firmware"
                                );
                      ACFUError::addError((ACFUError *)local_a0,local_128,0xfa3,0);
                      if ((local_128[0] & 1) != 0) {
                        operator_delete(local_118);
                      }
                      uVar12 = ACFULogging::getLogInstance();
                      iVar2 = 4;
                      ACFULogging::handleMessage
                                (uVar12,2,
                                 "%s::%s: failed to perform destination bundle copy of rooted firmware\n"
                                 ,"ACFURestoreHost","copyFirmware");
                    }
                  }
                  if ((local_78 & 1) != 0) {
                    operator_delete(local_68);
                  }
                  lVar4 = local_38;
                  if ((iVar2 != 0) && (iVar2 != 0x30)) {
                    if (iVar2 != 4) {
                      return p_Var10;
                    }
                    break;
                  }
                  puVar15 = puVar15 + 2;
                } while (puVar15 != *(undefined8 **)(this + 0x90));
              }
              goto LAB_00212486;
            }
          }
          uVar12 = ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (uVar12,0,"%s::%s: removing any personalized bits of bundle firmware\n",
                     "ACFURestoreHost","copyFirmware");
          puVar15 = *(undefined8 **)(this + 0x88);
          lVar4 = local_38;
          if (puVar15 != *(undefined8 **)(this + 0x90)) {
            do {
              p_Var16 = (__CFURL *)_CFDictionaryGetValue(local_38,*puVar15);
              if ((p_Var16 == (__CFURL *)0x0) && (*(char *)(puVar15 + 1) == '\x01')) {
                pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (&local_98,"ACFURestoreHost");
                puVar6 = (ulong *)std::string::append((char *)&local_98);
                local_48 = (ACFURestoreHost *)puVar6[2];
                local_58 = *puVar6;
                uStack_50 = puVar6[1];
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
                puVar6 = (ulong *)std::string::append((char *)&local_58);
                local_68 = (ACFURestoreHost *)puVar6[2];
                local_78 = *puVar6;
                uStack_70 = puVar6[1];
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
                ACFULogging::handleMessageCFType
                          (pAVar5,&local_78,0,"skipping removal of optional file...",*puVar15);
                if ((local_78 & 1) != 0) {
                  operator_delete(local_68);
                }
                if ((local_58 & 1) != 0) {
                  operator_delete(local_48);
                }
                if ((local_98 & 1) != 0) {
                  operator_delete(local_88);
                }
              }
              else {
                cVar1 = ACFUCommon::removeFileWithURL(p_Var16);
                if (cVar1 == '\0') {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_1a0,"copyFirmware: failed to remove bundle fw personalized bits")
                  ;
                  ACFUError::addError((ACFUError *)(this + 0x18),local_1a0,0x3ec,0);
                  pcVar18 = "%s::%s: failed to remove bundle fw personalized bits\n";
                  puVar15 = &local_190;
                  lVar4 = local_38;
                  if ((local_1a0[0] & 1) != 0) goto LAB_0021250a;
                  goto LAB_00212512;
                }
              }
              puVar15 = puVar15 + 2;
              lVar4 = local_38;
            } while (puVar15 != *(undefined8 **)(this + 0x90));
          }
          goto LAB_00212486;
        }
        lVar9 = _CFGetTypeID(lVar8);
        lVar11 = _CFDictionaryGetTypeID();
        if (lVar9 != lVar11) goto LAB_0021188e;
        local_d8[0] = (__CFURL *)0x0;
        local_b8 = _CFDictionaryGetValue(lVar8,&cf_ACFUFirmware);
        if (local_b8 == 0) goto LAB_00211890;
        lVar8 = _CFStringGetTypeID();
        lVar9 = _CFGetTypeID(local_b8);
        if (lVar8 != lVar9) {
          local_b0 = 0;
LAB_002125f8:
          goto LAB_0021189b;
        }
        if (lVar4 == 0) {
LAB_0021257b:
          local_b0 = 0;
LAB_00212586:
          p_Var16 = (__CFURL *)_AMSupportCreateURLFromString(uVar12,local_b8);
          if (p_Var16 != (__CFURL *)0x0) {
            p_Var17 = p_Var16;
            if ((char)local_b0 != '\0') {
              p_Var17 = local_d8[0];
            }
            _CFDictionaryAddValue(local_38,*(undefined8 *)(this + 8),p_Var17);
            _CFDictionaryAddValue(local_a8,*(undefined8 *)(this + 8),p_Var16);
            if (local_d8[0] != (__CFURL *)0x0) {
              _CFRelease();
              local_d8[0] = (__CFURL *)0x0;
            }
            _CFRelease(p_Var16);
            goto LAB_002125f8;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_200,"copyFirmware: failed to create src rooted FW URL");
          ACFUError::addError((ACFUError *)(this + 0x18),local_200,4000,0);
          copyFirmware(local_200);
        }
        else {
          iVar2 = _AMSupportCopyURLWithAppendedComponent(uVar12,lVar4,local_c0,0,local_d8);
          if ((local_d8[0] != (__CFURL *)0x0) && (iVar2 == 0)) {
            cVar1 = ACFUCommon::doesPathExist(local_d8[0]);
            if (cVar1 == '\0') {
              if (local_d8[0] != (__CFURL *)0x0) {
                _CFRelease();
                local_d8[0] = (__CFURL *)0x0;
              }
              goto LAB_0021257b;
            }
            uVar7 = ACFULogging::getLogInstance();
            ACFULogging::handleMessage
                      (uVar7,0,
                       "%s::%s: rooted firmware was personalized already so we should use that to update\n"
                       ,"ACFURestoreHost","copyFirmware");
            pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (&local_98,"ACFURestoreHost");
            puVar6 = (ulong *)std::string::append((char *)&local_98);
            local_48 = (ACFURestoreHost *)puVar6[2];
            local_58 = *puVar6;
            uStack_50 = puVar6[1];
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6 = (ulong *)std::string::append((char *)&local_58);
            local_68 = (ACFURestoreHost *)puVar6[2];
            local_78 = *puVar6;
            uStack_70 = puVar6[1];
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            uVar7 = ACFULogging::handleMessageCFType
                              (pAVar5,&local_78,0,"Rooted FW URL: ",local_d8[0]);
            if ((local_78 & 1) != 0) {
              operator_delete(local_68);
              uVar7 = extraout_RAX;
            }
            if ((local_58 & 1) != 0) {
              operator_delete(local_48);
              uVar7 = extraout_RAX_00;
            }
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
              uVar7 = extraout_RAX_01;
            }
            local_b0 = CONCAT71((int7)((ulong)uVar7 >> 8),1);
            goto LAB_00212586;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_218,"copyFirmware: failed to create personalized rooted FW URL");
          ACFUError::addError((ACFUError *)(this + 0x18),local_218,4000,0);
          copyFirmware();
        }
      }
LAB_00211fd8:
      p_Var10 = (__CFData *)0x0;
      lVar4 = local_38;
LAB_00212486:
      _CFRelease(local_c0);
      goto LAB_00212492;
    }
    copyFirmware();
  }
  else {
    ACFULogging::handleMessage
              (uVar7,0,"%s::%s: running device invoked restore info -- using bundleData\n",
               "ACFURestoreHost","copyFirmware");
    lVar4 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_BundleDataDict);
    if (lVar4 != 0) {
      lVar8 = _CFDictionaryGetTypeID();
      lVar9 = _CFGetTypeID(lVar4);
      if (lVar8 == lVar9) {
        local_a8 = (__CFString *)_CFDictionaryCreateMutableCopy(uVar12,0,lVar4);
        if (local_a8 == (__CFString *)0x0) {
          copyFirmware();
          goto LAB_002126f4;
        }
        lVar4 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_FirmwareData);
        if (lVar4 != 0) {
          lVar8 = _CFDataGetTypeID();
          lVar9 = _CFGetTypeID(lVar4);
          if (lVar8 == lVar9) {
            _CFDictionarySetValue(local_a8,*(undefined8 *)(this + 8),lVar4);
          }
        }
        p_Var10 = (__CFData *)(**(code **)(*(long *)this + 0x28))(this,local_a8,1);
        if (p_Var10 == (__CFData *)0x0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_248,"copyFirmware: updater failed to find firmware data with bundleData")
          ;
          ACFUError::addError((ACFUError *)(this + 0x18),local_248,4000,0);
          copyFirmware(local_248);
          p_Var10 = (__CFData *)0x0;
        }
        lVar4 = 0;
        goto LAB_00212486;
      }
    }
    copyFirmware();
  }
LAB_002126f4:
  local_a8 = local_c0;
  p_Var10 = (__CFData *)0x0;
  lVar4 = 0;
LAB_00212492:
  _CFRelease(local_a8);
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return p_Var10;
}

