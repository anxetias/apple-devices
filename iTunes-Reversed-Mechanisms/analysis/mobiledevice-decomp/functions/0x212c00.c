// rea decompile_all
// name: ACFURestoreHost::createRequest
// address: 0x212c00
// body: available
// range: 0x212c00-0x213ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::createRequest(std::shared_ptr<ACFUFirmware>, ACFURestoreHost::Demotion const&)
    */

long __thiscall
ACFURestoreHost::createRequest(ACFURestoreHost *this,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  __CFData *p_Var8;
  ACFULogging *pAVar9;
  ulong *puVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined8 *puVar14;
  __CFString **pp_Var15;
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  local_2c0 [8];
  __tree_node *local_2b8;
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  local_2a8 [8];
  __tree_node *local_2a0;
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  local_290 [8];
  __tree_node *local_288;
  undefined1 local_278 [24];
  undefined1 local_260 [24];
  undefined1 local_248 [24];
  undefined1 local_230 [24];
  undefined1 local_218 [24];
  undefined1 local_200 [24];
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  byte local_170 [16];
  void *local_160;
  byte local_158 [16];
  void *local_148;
  byte local_140 [16];
  void *local_130;
  byte local_128 [16];
  void *local_118;
  byte local_110 [16];
  void *local_100;
  byte local_f8 [16];
  void *local_e8;
  undefined8 *local_e0;
  __CFData *local_d8;
  __CFData *local_d0;
  undefined8 local_c8;
  ACFURestoreHost *local_c0;
  undefined8 local_b8;
  byte local_b0 [16];
  void *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long *local_80;
  ACFURestoreHost *local_78;
  ACFURestoreHost *local_70;
  ulong local_68;
  ulong uStack_60;
  char *local_58;
  undefined8 local_48;
  ulong uStack_40;
  char *local_38;
  
  local_c8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_e0 = param_2;
  lVar3 = _CFDictionaryCreateMutable
                    (local_c8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_278,"createRequest: Failed to allocate output dictionary");
    ACFUError::addError((ACFUError *)(this + 0x18),local_278,4000,0);
    createRequest(local_278,(ACFUError *)(this + 0x18));
    return 0;
  }
  puVar14 = *(undefined8 **)(this + 0x58);
  local_80 = param_3;
  if (puVar14 != *(undefined8 **)(this + 0x60)) {
    uVar4 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    do {
      _CFDictionaryAddValue(lVar3,*puVar14,uVar4);
      puVar14 = puVar14 + 1;
    } while (puVar14 != *(undefined8 **)(this + 0x60));
  }
  ACFUCommon::parseDebugArgs
            ((ACFUCommon *)&local_48,*(__CFDictionary **)(this + 0x10),"validateDeviceId");
  uVar1 = local_48;
  if (local_48 == 0) {
    uVar4 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar4,0,"%s::%s: skipping device identity validation against build identity\n",
               "ACFURestoreHost","createRequest");
  }
  lVar5 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_BuildIdentity);
  if (lVar5 != 0) {
    lVar6 = _CFDictionaryGetTypeID();
    lVar7 = _CFGetTypeID(lVar5);
    if (lVar6 == lVar7) {
      local_90 = lVar5;
      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_DeviceInfo);
      if (lVar5 != 0) {
        lVar6 = _CFDictionaryGetTypeID();
        lVar7 = _CFGetTypeID(lVar5);
        if (lVar6 == lVar7) {
          local_88 = lVar5;
          if (uVar1 != 0) {
            std::
            map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
            ::map_abi_ne190102_(local_2c0,this + 0xa0);
            cVar2 = validateDeviceInfoAgainstBuildIdentity
                              (this + 0x40,this + 0x28,local_88,local_90,local_2c0);
            std::
            __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
            ::destroy((__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                       *)local_2c0,local_2b8);
            if (cVar2 == '\0') {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_230,"createRequest: Failed to validate device identity tags");
              ACFUError::addError((ACFUError *)(this + 0x18),local_230,0xfa9,0);
              createRequest(local_230);
              goto LAB_002138d4;
            }
          }
          std::
          map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
          ::map_abi_ne190102_(local_2a8,this + 0xa0);
          cVar2 = populateDictFromIdentity(this + 0x28,local_2a8,local_90,lVar3);
          std::
          __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
          ::destroy((__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                     *)local_2a8,local_2a0);
          if (cVar2 == '\0') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_218,"createRequest: Failed to build parameters out of build identity");
            ACFUError::addError((ACFUError *)(this + 0x18),local_218,0xfa4,0);
            createRequest(local_218);
            goto LAB_002138d4;
          }
          std::
          map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
          ::map_abi_ne190102_(local_290,this + 0xa0);
          lVar5 = local_88;
          cVar2 = populateDictFromIdentity(this + 0x40,local_290,local_88,lVar3);
          std::
          __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
          ::destroy((__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                     *)local_290,local_288);
          if (cVar2 == '\0') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_200,"createRequest: Failed to build parameters out of device identity")
            ;
            ACFUError::addError((ACFUError *)(this + 0x18),local_200,0xfa4,0);
            createRequest(local_200);
            goto LAB_002138d4;
          }
          if (*local_80 != 0) {
            p_Var8 = (__CFData *)_CFDictionaryGetValue(lVar5);
            if (p_Var8 != (__CFData *)0x0) {
              lVar6 = _CFDataGetTypeID();
              lVar7 = _CFGetTypeID(p_Var8);
              if (lVar6 == lVar7) goto LAB_00212e8c;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_1e8,
                       "createRequest: Production mode not present in device info. This is fatal!");
            ACFUError::addError((ACFUError *)(this + 0x18),local_1e8,0xfa1,0);
            createRequest(local_1e8);
            goto LAB_002138d4;
          }
          p_Var8 = (__CFData *)0x0;
LAB_00212e8c:
          local_d8 = p_Var8;
          if (local_80[1] != 0) {
            p_Var8 = (__CFData *)_CFDictionaryGetValue(lVar5);
            if (p_Var8 != (__CFData *)0x0) {
              lVar5 = _CFDataGetTypeID();
              lVar6 = _CFGetTypeID(p_Var8);
              if (lVar5 == lVar6) goto LAB_00212f02;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_1d0,
                       "createRequest: Security mode not present in device info. This is fatal!");
            ACFUError::addError((ACFUError *)(this + 0x18),local_1d0,0xfa1,0);
            createRequest(local_1d0);
            goto LAB_002138d4;
          }
          p_Var8 = (__CFData *)0x0;
LAB_00212f02:
          pp_Var15 = *(__CFString ***)(this + 0x88);
          local_d0 = p_Var8;
          local_98 = lVar3;
          local_78 = this;
          if (pp_Var15 != *(__CFString ***)(this + 0x90)) {
            local_70 = this + 0x18;
            local_c0 = this + 200;
            local_b8 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
            do {
              ACFUCommon::stringFromCFString((ACFUCommon *)&local_48,*pp_Var15);
              lVar3 = local_90;
              if ((local_48 & 1) == 0) {
                if (local_48._0_1_ == (ACFUCommon)0x0) {
LAB_00212f97:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (&local_68,"UNDEF");
                }
                else {
                  local_58 = local_38;
                  local_68 = local_48;
                  uStack_60 = uStack_40;
                }
              }
              else {
                if (uStack_40 == 0) goto LAB_00212f97;
                std::string::__init_copy_ctor_external((string *)&local_68,local_38,uStack_40);
              }
              if ((local_48 & 1) != 0) {
                operator_delete(local_38);
              }
              local_38 = local_58;
              local_48 = local_68;
              uStack_40 = uStack_60;
              lVar3 = _CFDictionaryGetValue(lVar3,*pp_Var15);
              if (lVar3 == 0) {
                if (*(char *)(pp_Var15 + 1) != '\x01') goto LAB_00213105;
                uVar4 = ACFULogging::getLogInstance();
                pcVar11 = "%s::%s: optional tag %s missing from build identity, skipping\n";
LAB_00213036:
                pcVar12 = (char *)((long)&local_48 + 1);
                if ((local_48 & 1) != 0) {
                  pcVar12 = local_38;
                }
                iVar13 = 0x18;
                ACFULogging::handleMessage
                          (uVar4,0,pcVar11,"ACFURestoreHost","createRequest",pcVar12);
                goto LAB_002132a3;
              }
              lVar5 = _CFGetTypeID(lVar3);
              lVar6 = _CFDictionaryGetTypeID();
              if (lVar5 == lVar6) {
                if ((ACFUFirmware *)*local_e0 == (ACFUFirmware *)0x0) {
                  lVar5 = _CFDictionaryGetValue(lVar3,&cf_Digest);
                  if (lVar5 == 0) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                              (local_158,"createRequest: no digest in build ID");
                    ACFUError::addError((ACFUError *)local_70,local_158,0x3ed,0);
                    if ((local_158[0] & 1) != 0) {
                      operator_delete(local_148);
                    }
                    uVar4 = ACFULogging::getLogInstance();
                    pcVar11 = "%s::%s: no digest in build ID (%s)\n";
                    goto LAB_00213150;
                  }
                }
                else {
                  lVar5 = ACFUFirmware::getMeasureDataWithTag((ACFUFirmware *)*local_e0,*pp_Var15);
                  if (lVar5 == 0) {
                    uVar4 = ACFULogging::getLogInstance();
                    pcVar11 = "%s::%s: tag %s missing from firmware, skipping\n";
                    goto LAB_00213036;
                  }
                }
                lVar6 = _CFGetTypeID(lVar5);
                lVar7 = _CFDataGetTypeID();
                if (lVar6 != lVar7) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_140,"createRequest: wrong digest type");
                  ACFUError::addError((ACFUError *)local_70,local_140,0x3ed,0);
                  if ((local_140[0] & 1) != 0) {
                    operator_delete(local_130);
                  }
                  uVar4 = ACFULogging::getLogInstance();
                  pcVar11 = "%s::%s: wrong digest type (%s)\n";
                  goto LAB_00213150;
                }
                lVar3 = _CFDictionaryGetValue(lVar3,&cf_Trusted);
                lVar6 = _CFDictionaryCreateMutable
                                  (local_c8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
                if (lVar6 == 0) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_128,"createRequest: failed to allocate internal data structure");
                  ACFUError::addError((ACFUError *)local_70,local_128,4000,0);
                  if ((local_128[0] & 1) != 0) {
                    operator_delete(local_118);
                  }
                  uVar4 = ACFULogging::getLogInstance();
                  iVar13 = 4;
                  ACFULogging::handleMessage
                            (uVar4,2,"%s::%s: failed to allocate internal data structure\n",
                             "ACFURestoreHost","createRequest");
                }
                else {
                  if (*local_80 != 0) {
                    if ((char)local_80[2] == '\x01') {
                      pcVar11 = (char *)std::
                                        map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                                        ::at((map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                                              *)local_c0,pp_Var15);
                      cVar2 = *pcVar11;
                    }
                    else {
                      cVar2 = '\0';
                    }
                    createBoolFromData((ACFURestoreHost *)&local_68,local_d8);
                    if ((char)uStack_60 == '\x01') {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                (local_110,"createRequest: epro data to boolean conversion failure")
                      ;
                      ACFUError::addError((ACFUError *)local_70,local_110,0x3ed,0);
                      if ((local_110[0] & 1) != 0) {
                        operator_delete(local_100);
                      }
                      uVar4 = ACFULogging::getLogInstance();
                      ACFULogging::handleMessage
                                (uVar4,2,"%s::%s: epro data to boolean conversion failure\n",
                                 "ACFURestoreHost","createRequest");
                      iVar13 = 4;
                      this = local_78;
                      goto LAB_002132a3;
                    }
                    puVar10 = &local_68;
                    if (cVar2 != '\0') {
                      _CFDictionaryAddValue(lVar6,&cf_DPRO,local_b8);
                      puVar10 = (ulong *)PTR__kCFBooleanFalse_00441108;
                    }
                    _CFDictionaryAddValue(lVar6,&cf_EPRO,*puVar10);
                    this = local_78;
                  }
                  if (local_80[1] != 0) {
                    if (*(char *)((long)local_80 + 0x11) == '\x01') {
                      lVar7 = std::
                              map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                              ::at((map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                                    *)local_c0,pp_Var15);
                      cVar2 = *(char *)(lVar7 + 1);
                    }
                    else {
                      cVar2 = '\0';
                    }
                    createBoolFromData((ACFURestoreHost *)&local_68,local_d0);
                    this = local_78;
                    if ((char)uStack_60 == '\x01') {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                (local_f8,"createRequest: esec data to boolean conversion failure");
                      this = local_78;
                      ACFUError::addError((ACFUError *)local_70,local_f8,0x3ed,0);
                      if ((local_f8[0] & 1) != 0) {
                        operator_delete(local_e8);
                      }
                      uVar4 = ACFULogging::getLogInstance();
                      ACFULogging::handleMessage
                                (uVar4,2,"%s::%s: esec data to boolean conversion failure\n",
                                 "ACFURestoreHost","createRequest");
                      iVar13 = 4;
                      goto LAB_002132a3;
                    }
                    puVar10 = &local_68;
                    if (cVar2 != '\0') {
                      _CFDictionaryAddValue(lVar6,&cf_DSEC,local_b8);
                      puVar10 = (ulong *)PTR__kCFBooleanFalse_00441108;
                    }
                    _CFDictionaryAddValue(lVar6,&cf_ESEC,*puVar10);
                  }
                  _CFDictionaryAddValue(lVar6,&cf_Digest,lVar5);
                  if (lVar3 != 0) {
                    _CFDictionaryAddValue(lVar6,&cf_Trusted,lVar3);
                  }
                  _CFDictionaryAddValue(local_98,*pp_Var15,lVar6);
                  iVar13 = 0;
                  _CFRelease(lVar6);
                }
              }
              else {
LAB_00213105:
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_170,"createRequest: could not find FW in build ID");
                ACFUError::addError((ACFUError *)local_70,local_170,0x3ed,0);
                if ((local_170[0] & 1) != 0) {
                  operator_delete(local_160);
                }
                uVar4 = ACFULogging::getLogInstance();
                pcVar11 = "%s::%s: could not find FW (%s) in build ID\n";
LAB_00213150:
                pcVar12 = (char *)((long)&local_48 + 1);
                if ((local_48 & 1) != 0) {
                  pcVar12 = local_38;
                }
                iVar13 = 4;
                ACFULogging::handleMessage
                          (uVar4,2,pcVar11,"ACFURestoreHost","createRequest",pcVar12);
              }
LAB_002132a3:
              if ((local_48 & 1) != 0) {
                operator_delete(local_38);
              }
              if ((iVar13 != 0) && (iVar13 != 0x18)) {
                lVar3 = local_98;
                if (iVar13 != 4) {
                  return local_98;
                }
                goto LAB_002138d4;
              }
              pp_Var15 = pp_Var15 + 2;
            } while (pp_Var15 != *(__CFString ***)(this + 0x90));
          }
          lVar5 = local_88;
          lVar3 = local_98;
          if (*(long *)(this + 0xb8) != 0) {
            lVar6 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_Options);
            if ((lVar6 != 0) &&
               (cVar2 = _CFDictionaryContainsKey(lVar6,&cf_TrustObjectDigest), cVar2 != '\0')) {
              uVar4 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar4,0,"%s::%s: Using FDR trust object hash in updater options override\n"
                         ,"ACFURestoreHost","createRequest");
              lVar5 = _CFDictionaryGetValue(lVar6,&cf_TrustObjectDigest);
              if (lVar5 != 0) {
                lVar6 = _CFDataGetTypeID();
                lVar7 = _CFGetTypeID(lVar5);
                if (lVar6 == lVar7) {
LAB_00213638:
                  uVar4 = ACFULogging::getLogInstance();
                  ACFULogging::handleMessage
                            (uVar4,0,"%s::%s: Applying FDR trust object hash override\n",
                             "ACFURestoreHost","createRequest");
                  _CFDictionarySetValue(lVar3,*(undefined8 *)(this + 0xb8),lVar5);
                  goto LAB_002136ca;
                }
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_1b8,
                         "createRequest: Invalid FDR trust object hash in updater options override")
              ;
              ACFUError::addError((ACFUError *)(this + 0x18),local_1b8,0x3ed,0);
              createRequest(local_1b8);
              goto LAB_002138d4;
            }
            cVar2 = _CFDictionaryContainsKey(lVar5,&cf_ACFU_FDRTrustObjectHash);
            uVar4 = ACFULogging::getLogInstance();
            if (cVar2 != '\0') {
              ACFULogging::handleMessage
                        (uVar4,0,"%s::%s: Using FDR trust object hash in client updater override\n",
                         "ACFURestoreHost","createRequest");
              lVar5 = _CFDictionaryGetValue(lVar5,&cf_ACFU_FDRTrustObjectHash);
              if (lVar5 != 0) {
                lVar6 = _CFDataGetTypeID();
                lVar7 = _CFGetTypeID(lVar5);
                if (lVar6 == lVar7) goto LAB_00213638;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_1a0,
                         "createRequest: Invalid FDR trust object hash in client updater override");
              ACFUError::addError((ACFUError *)(this + 0x18),local_1a0,0x3ed,0);
              createRequest(local_1a0);
              goto LAB_002138d4;
            }
            ACFULogging::handleMessage
                      (uVar4,0,"%s::%s: Requesting FDR trust object hash\n","ACFURestoreHost",
                       "createRequest");
            lVar5 = _CFDataCreateMutable(local_c8,0);
            if (lVar5 == 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_188,"createRequest: Failed to create empty trust object hash");
              ACFUError::addError((ACFUError *)(this + 0x18),local_188,4000,0);
              createRequest(local_188);
              this = local_78;
              lVar3 = local_98;
              goto LAB_002138d4;
            }
            _CFDictionarySetValue(lVar3,*(undefined8 *)(this + 0xb8),lVar5);
            _CFRelease(lVar5);
            lVar5 = 0;
LAB_002136ca:
            pAVar9 = (ACFULogging *)ACFULogging::getLogInstance();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_b0,"ACFURestoreHost");
            puVar10 = (ulong *)std::string::append((char *)local_b0);
            local_58 = (char *)puVar10[2];
            local_68 = *puVar10;
            uStack_60 = puVar10[1];
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar10 = (ulong *)std::string::append((char *)&local_68);
            local_38 = (char *)puVar10[2];
            local_48 = *puVar10;
            uStack_40 = puVar10[1];
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            ACFULogging::handleMessageCFType(pAVar9,&local_48,4,"FDR Trust Object Digest: ",lVar5);
            lVar5 = local_88;
            if ((local_48 & 1) != 0) {
              operator_delete(local_38);
            }
            if ((local_68 & 1) != 0) {
              operator_delete(local_58);
            }
            if ((local_b0[0] & 1) != 0) {
              operator_delete(local_a0);
            }
          }
          if ((*(long *)(this + 0xc0) != 0) &&
             (lVar5 = _CFDictionaryGetValue(lVar5,&cf_ACFU_FDRAllowUnsealed), lVar5 != 0)) {
            lVar6 = _CFGetTypeID(lVar5);
            lVar7 = _CFBooleanGetTypeID();
            if ((lVar6 == lVar7) && (cVar2 = _CFBooleanGetValue(lVar5), cVar2 != '\0')) {
              uVar4 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar4,0,"%s::%s: allowing unsealed FDR data\n","ACFURestoreHost",
                         "createRequest");
              _CFDictionaryAddValue
                        (lVar3,*(undefined8 *)(this + 0xc0),
                         *(undefined8 *)PTR__kCFBooleanTrue_00441110);
            }
          }
          pAVar9 = (ACFULogging *)ACFULogging::getLogInstance();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_b0,"ACFURestoreHost");
          puVar10 = (ulong *)std::string::append((char *)local_b0);
          local_58 = (char *)puVar10[2];
          local_68 = *puVar10;
          uStack_60 = puVar10[1];
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10 = (ulong *)std::string::append((char *)&local_68);
          local_38 = (char *)puVar10[2];
          local_48 = *puVar10;
          uStack_40 = puVar10[1];
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          ACFULogging::handleMessageCFType(pAVar9,&local_48,0,"Request Dictionary:",lVar3);
          if ((local_48 & 1) != 0) {
            operator_delete(local_38);
          }
          if ((local_68 & 1) != 0) {
            operator_delete(local_58);
          }
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          goto LAB_002138d4;
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_248,"createRequest: Failed to get build identity dict from options");
      ACFUError::addError((ACFUError *)(this + 0x18),local_248,0xfa1,0);
      createRequest(local_248);
      goto LAB_002138d4;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_260,"createRequest: Failed to get build identity dict from options");
  ACFUError::addError((ACFUError *)(this + 0x18),local_260,0xfa1,0);
  createRequest(local_260);
LAB_002138d4:
  cVar2 = ACFUError::hasError((ACFUError *)(this + 0x18));
  if (cVar2 != '\0') {
    _CFRelease(lVar3);
    return 0;
  }
  return lVar3;
}

