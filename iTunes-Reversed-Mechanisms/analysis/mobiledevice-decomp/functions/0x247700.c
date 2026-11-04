// rea decompile_all
// name: RoseRestoreHost::copyFirmwareUpdater
// address: 0x247700
// body: available
// range: 0x247700-0x248945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RoseRestoreHost::copyFirmwareUpdater(__CFDictionary const*,
   ACFURestoreHost::CopyFirmwareFileDictType) */

long __thiscall
RoseRestoreHost::copyFirmwareUpdater(RoseRestoreHost *this,undefined8 param_1,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  char cVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  undefined2 *puVar12;
  ACFULogging *pAVar13;
  undefined8 *puVar14;
  char *pcVar15;
  ACFUFTABFile *pAVar16;
  uint uVar17;
  ACFUFTABFile *pAVar18;
  ACFUFTABFile *pAVar19;
  ACFUFTABFile *pAVar20;
  byte local_2a0 [16];
  void *local_290;
  byte local_288 [16];
  void *local_278;
  byte local_270 [16];
  void *local_260;
  byte local_258 [16];
  void *local_248;
  byte local_240 [16];
  void *local_230;
  byte local_228 [16];
  void *local_218;
  byte local_210 [16];
  void *local_200;
  byte local_1f8 [16];
  void *local_1e8;
  byte local_1e0 [16];
  void *local_1d0;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  void *local_140;
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  byte local_120 [16];
  void *local_110;
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  ulong local_e8;
  __tree_node *p_Stack_e0;
  void *local_d8;
  ulong local_c8;
  __tree_node *p_Stack_c0;
  void *local_b8;
  ulong local_a8;
  __tree_node *p_Stack_a0;
  void *local_98;
  ulonglong local_90;
  ACFUFTABFile *local_88;
  __tree_node *p_Stack_80;
  void *local_78;
  long local_68;
  long local_60;
  long local_58;
  __CFData *local_50;
  RoseRestoreHost *local_48;
  long local_40;
  ACFUFTABFile *local_38;
  
  local_48 = this;
  local_40 = param_1;
  GetRoseTatsuTagToFileNameMap();
  puVar5 = (ulong *)std::
                    map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                    ::at((map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                          *)&local_a8,(__CFString **)&kRoseRestoreRtkitos);
  if ((*puVar5 & 1) == 0) {
    local_f8 = (void *)puVar5[2];
    local_108 = *puVar5;
    uStack_100 = puVar5[1];
  }
  else {
    std::string::__init_copy_ctor_external((string *)&local_108,(char *)puVar5[2],puVar5[1]);
  }
  std::
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  ::destroy((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
             *)&local_a8,p_Stack_a0);
  GetRoseTatsuTagToFileNameMap();
  puVar5 = (ulong *)std::
                    map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                    ::at((map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                          *)&local_e8,(__CFString **)&kRoseRtkitos);
  if ((*puVar5 & 1) == 0) {
    local_98 = (void *)puVar5[2];
    local_a8 = *puVar5;
    p_Stack_a0 = (__tree_node *)puVar5[1];
  }
  else {
    std::string::__init_copy_ctor_external((string *)&local_a8,(char *)puVar5[2],puVar5[1]);
  }
  std::
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  ::destroy((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
             *)&local_e8,p_Stack_e0);
  GetRoseTatsuTagToFileNameMap();
  puVar5 = (ulong *)std::
                    map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                    ::at((map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                          *)&local_c8,(__CFString **)&kRoseSwDsp1);
  if ((*puVar5 & 1) == 0) {
    local_d8 = (void *)puVar5[2];
    local_e8 = *puVar5;
    p_Stack_e0 = (__tree_node *)puVar5[1];
  }
  else {
    std::string::__init_copy_ctor_external((string *)&local_e8,(char *)puVar5[2],puVar5[1]);
  }
  std::
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  ::destroy((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
             *)&local_c8,p_Stack_c0);
  GetRoseTatsuTagToFileNameMap();
  puVar5 = (ulong *)std::
                    map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                    ::at((map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                          *)&local_88,(__CFString **)&kRoseRtkitosICNF);
  if ((*puVar5 & 1) == 0) {
    local_b8 = (void *)puVar5[2];
    local_c8 = *puVar5;
    p_Stack_c0 = (__tree_node *)puVar5[1];
  }
  else {
    std::string::__init_copy_ctor_external((string *)&local_c8,(char *)puVar5[2],puVar5[1]);
  }
  local_68 = CONCAT44(local_68._4_4_,param_3);
  std::
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  ::destroy((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
             *)&local_88,p_Stack_80);
  local_38 = (ACFUFTABFile *)0x0;
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(local_48 + 0x10),&cf_DeviceInfo);
  if (lVar6 == 0) {
LAB_002482a0:
    local_38 = (ACFUFTABFile *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_2a0,"copyFirmwareUpdater: failed to get device info list");
    ACFUError::addError((ACFUError *)(local_48 + 0x18),local_2a0,0xfa1,0);
    if ((local_2a0[0] & 1) != 0) {
      operator_delete(local_290);
    }
    local_38 = (ACFUFTABFile *)0x0;
    uVar10 = ACFULogging::getLogInstance();
    pcVar15 = "%s::%s: failed to get device info list\n";
  }
  else {
    local_38 = (ACFUFTABFile *)0x0;
    lVar7 = _CFGetTypeID(lVar6);
    local_38 = (ACFUFTABFile *)0x0;
    lVar8 = _CFDictionaryGetTypeID();
    if (lVar7 != lVar8) goto LAB_002482a0;
    local_38 = (ACFUFTABFile *)0x0;
    lVar7 = _CFDictionaryGetValue(lVar6,&cf_Rap_RestoreBootNonce);
    if (lVar7 == 0) {
LAB_002479d9:
      local_90 = 0;
LAB_002479e4:
      local_38 = (ACFUFTABFile *)0x0;
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_Rap_ChipRev);
      local_38 = (ACFUFTABFile *)0x0;
      lVar6 = _CFDictionaryGetValue(lVar6,&cf_Rap_BoardID);
      if ((lVar7 != 0) && (lVar6 != 0)) {
        local_38 = (ACFUFTABFile *)0x0;
        lVar8 = _CFDataGetTypeID();
        local_38 = (ACFUFTABFile *)0x0;
        lVar9 = _CFGetTypeID(lVar7);
        if (lVar8 == lVar9) {
          local_38 = (ACFUFTABFile *)0x0;
          lVar8 = _CFDataGetTypeID();
          local_38 = (ACFUFTABFile *)0x0;
          lVar9 = _CFGetTypeID(lVar6);
          if (lVar8 == lVar9) {
            local_38 = (ACFUFTABFile *)0x0;
            lVar8 = _CFDataGetLength(lVar7);
            if (lVar8 == 2) {
              local_38 = (ACFUFTABFile *)0x0;
              lVar8 = _CFDataGetLength(lVar6);
              if (lVar8 == 2) {
                local_38 = (ACFUFTABFile *)0x0;
                puVar12 = (undefined2 *)_CFDataGetBytePtr(lVar7);
                uVar1 = *puVar12;
                local_38 = (ACFUFTABFile *)0x0;
                puVar12 = (undefined2 *)_CFDataGetBytePtr(lVar6);
                uVar2 = *puVar12;
                local_38 = (ACFUFTABFile *)0x0;
                uVar10 = ACFULogging::getLogInstance();
                local_38 = (ACFUFTABFile *)0x0;
                ACFULogging::handleMessage
                          (uVar10,0,
                           "%s::%s: Rose Hardware Info (Board ID: 0x%04x, Chip Revision: 0x%04x)\n",
                           "RoseRestoreHost","copyFirmwareUpdater",uVar2,uVar1);
                local_38 = (ACFUFTABFile *)0x0;
                pAVar13 = (ACFULogging *)ACFULogging::getLogInstance();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_120,"RoseRestoreHost");
                puVar5 = (ulong *)std::string::append((char *)local_120);
                local_128 = (void *)puVar5[2];
                local_138 = *puVar5;
                uStack_130 = puVar5[1];
                *puVar5 = 0;
                puVar5[1] = 0;
                puVar5[2] = 0;
                puVar14 = (undefined8 *)std::string::append((char *)&local_138);
                local_78 = (void *)puVar14[2];
                local_88 = (ACFUFTABFile *)*puVar14;
                p_Stack_80 = (__tree_node *)puVar14[1];
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
                ACFULogging::handleMessageCFType
                          (pAVar13,&local_88,0,"Firmware File Dictionary: ",local_40);
                uVar17 = (uint)local_68;
                if (((ulong)local_88 & 1) != 0) {
                  operator_delete(local_78);
                }
                if ((local_138 & 1) != 0) {
                  operator_delete(local_128);
                }
                if ((local_120[0] & 1) != 0) {
                  operator_delete(local_110);
                }
                local_38 = (ACFUFTABFile *)0x0;
                uVar17 = uVar17 & 0xff;
                local_68 = ACFURestoreHost::copyDataFromFileDictionary
                                     (&cf_Rap_RTKitOS,local_40,uVar17);
                if (local_68 == 0) {
LAB_002483b0:
                  local_38 = (ACFUFTABFile *)0x0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_240,"copyFirmware: rkos bundle data unavailable");
                  ACFUError::addError((ACFUError *)(local_48 + 0x18),local_240,1000,0);
                  if ((local_240[0] & 1) != 0) {
                    operator_delete(local_230);
                  }
                  local_38 = (ACFUFTABFile *)0x0;
                  uVar10 = ACFULogging::getLogInstance();
                  local_38 = (ACFUFTABFile *)0x0;
                  ACFULogging::handleMessage
                            (uVar10,2,"%s::%s: rkos bundle data unavailable\n","RoseRestoreHost",
                             "copyFirmwareUpdater");
                  local_50 = (__CFData *)0x0;
                  local_60 = 0;
                  local_58 = 0;
                  local_40 = 0;
                  pAVar20 = (ACFUFTABFile *)0x0;
                  pAVar19 = (ACFUFTABFile *)0x0;
                  local_38 = (ACFUFTABFile *)0x0;
                  if (local_68 == 0) goto LAB_00248198;
                }
                else {
                  local_38 = (ACFUFTABFile *)0x0;
                  lVar6 = _CFGetTypeID();
                  local_38 = (ACFUFTABFile *)0x0;
                  lVar7 = _CFDataGetTypeID();
                  if (lVar6 != lVar7) goto LAB_002483b0;
                  ACFUFTABFile::create((ACFUFTABFile *)&local_88,local_68,0,uVar1);
                  if (local_88 == (ACFUFTABFile *)0x0) {
                    local_38 = (ACFUFTABFile *)0x0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                              (local_228,"copyFirmware: failed to init bundle firmware");
                    ACFUError::addError((ACFUError *)(local_48 + 0x18),local_228,4000,0);
                    if ((local_228[0] & 1) != 0) {
                      operator_delete(local_218);
                    }
                    local_38 = (ACFUFTABFile *)0x0;
                    uVar10 = ACFULogging::getLogInstance();
                    local_38 = (ACFUFTABFile *)0x0;
                    pAVar19 = (ACFUFTABFile *)0x0;
                    pAVar20 = (ACFUFTABFile *)0x0;
                    ACFULogging::handleMessage
                              (uVar10,2,"%s::%s: failed to init bundle firmware\n","RoseRestoreHost"
                               ,"copyFirmwareUpdater");
                    local_50 = (__CFData *)0x0;
                    local_60 = 0;
                    local_58 = 0;
                    local_40 = 0;
                  }
                  else {
                    local_38 = local_88;
                    cVar3 = (**(code **)(*(long *)local_88 + 0x10))(local_88,&local_e8);
                    if ((cVar3 == '\0') ||
                       (cVar3 = (**(code **)(*(long *)local_38 + 0x10))(local_38,&local_a8),
                       cVar3 == '\0')) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                (local_210,"copyFirmware: bundle firmware specified is invalid");
                      ACFUError::addError((ACFUError *)(local_48 + 0x18),local_210,1000,0);
                      if ((local_210[0] & 1) != 0) {
                        operator_delete(local_200);
                      }
                      uVar10 = ACFULogging::getLogInstance();
                      pAVar19 = (ACFUFTABFile *)0x0;
                      pAVar20 = (ACFUFTABFile *)0x0;
                      ACFULogging::handleMessage
                                (uVar10,2,"%s::%s: bundle firmware specified is invalid\n",
                                 "RoseRestoreHost","copyFirmwareUpdater");
                      local_50 = (__CFData *)0x0;
                      local_60 = 0;
                      local_58 = 0;
                      local_40 = 0;
                    }
                    else {
                      cVar3 = RoseCapabilities::supportsFDRTrustObjectDigestInBootManifest
                                        (*(RoseCapabilities **)(local_48 + 0xe8));
                      if ((cVar3 != '\0') &&
                         (cVar3 = (**(code **)(*(long *)local_38 + 0x10))(local_38,&local_c8),
                         cVar3 == '\0')) {
                        uVar10 = ACFULogging::getLogInstance();
                        ACFULogging::handleMessage
                                  (uVar10,3,
                                   "%s::%s: copyfirmware: ICNF missing in bundle firmware\n",
                                   "RoseRestoreHost","copyFirmwareUpdater");
                      }
                      cVar3 = _CFDictionaryContainsKey(local_40,*(undefined8 *)(local_48 + 8));
                      if (cVar3 == '\0') {
                        uVar10 = ACFULogging::getLogInstance();
                        pAVar20 = (ACFUFTABFile *)0x0;
                        ACFULogging::handleMessage
                                  (uVar10,0,"%s::%s: no firmware override specified\n",
                                   "RoseRestoreHost","copyFirmwareUpdater");
                        local_60 = 0;
LAB_00247e8c:
                        cVar3 = _CFDictionaryContainsKey(local_40,&cf_Rap_RestoreRTKitOS);
                        pAVar19 = (ACFUFTABFile *)0x0;
                        if (cVar3 == '\0') {
                          local_58 = 0;
LAB_00247fa2:
                          pAVar16 = local_38;
                          pAVar18 = pAVar19;
                          if (pAVar20 != (ACFUFTABFile *)0x0) {
                            cVar3 = (**(code **)(*(long *)pAVar20 + 0x10))(pAVar20,&local_108);
                            cVar4 = (**(code **)(*(long *)pAVar20 + 0x10))(pAVar20,&local_a8);
                            if (cVar3 != '\0') {
                              pAVar18 = pAVar20;
                            }
                            pAVar16 = local_38;
                            if (cVar4 != '\0') {
                              pAVar16 = pAVar20;
                            }
                          }
                          cVar3 = (**(code **)(*(long *)pAVar16 + 0x10))(pAVar16,&local_108);
                          if (cVar3 == '\0' && pAVar18 != (ACFUFTABFile *)0x0) {
                            local_50 = (__CFData *)
                                       (*(code *)**(undefined8 **)pAVar18)(pAVar18,&local_108);
                            if (local_50 == (__CFData *)0x0) {
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                        (local_180,
                                         "copyFirmware: could not get \'rrko\' object from ftab");
                              ACFUError::addError((ACFUError *)(local_48 + 0x18),local_180,1000,0);
                              if ((local_180[0] & 1) != 0) {
                                operator_delete(local_170);
                              }
                              uVar10 = ACFULogging::getLogInstance();
                              local_50 = (__CFData *)0x0;
                              ACFULogging::handleMessage
                                        (uVar10,2,
                                         "%s::%s: could not get \'rrko\' object from ftab\n",
                                         "RoseRestoreHost","copyFirmwareUpdater");
LAB_00248850:
                              local_40 = 0;
                            }
                            else {
                              cVar3 = ACFUFTABFile::addNewFileToFTAB
                                                (pAVar16,(string *)&local_108,local_50);
                              if (cVar3 != '\0') goto LAB_0024803f;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                        (local_168,
                                         "copyFirmware: could not add \'rrko\' object to final ftab"
                                        );
                              ACFUError::addError((ACFUError *)(local_48 + 0x18),local_168,1000,0);
                              if ((local_168[0] & 1) != 0) {
                                operator_delete(local_158);
                              }
                              uVar10 = ACFULogging::getLogInstance();
                              local_40 = 0;
                              ACFULogging::handleMessage
                                        (uVar10,2,
                                         "%s::%s: could not add \'rrko\' object to final ftab\n",
                                         "RoseRestoreHost","copyFirmwareUpdater");
                            }
                          }
                          else {
                            local_50 = (__CFData *)0x0;
LAB_0024803f:
                            if (local_90 != 0) {
                              ACFUFTABFile::setBootNonce(pAVar16,local_90);
                            }
                            local_40 = (**(code **)(*(long *)pAVar16 + 0x28))(pAVar16);
                            if (local_40 != 0) {
                              lVar6 = _CFDataGetTypeID();
                              lVar7 = _CFGetTypeID(local_40);
                              if (lVar6 == lVar7) {
                                pAVar13 = (ACFULogging *)ACFULogging::getLogInstance();
                                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                          (local_120,"RoseRestoreHost");
                                puVar5 = (ulong *)std::string::append((char *)local_120);
                                local_128 = (void *)puVar5[2];
                                local_138 = *puVar5;
                                uStack_130 = puVar5[1];
                                *puVar5 = 0;
                                puVar5[1] = 0;
                                puVar5[2] = 0;
                                puVar14 = (undefined8 *)std::string::append((char *)&local_138);
                                local_78 = (void *)puVar14[2];
                                local_88 = (ACFUFTABFile *)*puVar14;
                                p_Stack_80 = (__tree_node *)puVar14[1];
                                *puVar14 = 0;
                                puVar14[1] = 0;
                                puVar14[2] = 0;
                                ACFULogging::handleMessageCFType
                                          (pAVar13,&local_88,3,"outData",local_40);
                                if (((ulong)local_88 & 1) != 0) {
                                  operator_delete(local_78);
                                }
                                if ((local_138 & 1) != 0) {
                                  operator_delete(local_128);
                                }
                                if ((local_120[0] & 1) != 0) {
                                  operator_delete(local_110);
                                }
                                (**(code **)(*(long *)pAVar16 + 0x18))(pAVar16);
                                goto LAB_00248161;
                              }
                            }
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                      (local_150,"copyFirmware: could not create output data");
                            ACFUError::addError((ACFUError *)(local_48 + 0x18),local_150,1000,0);
                            if ((local_150[0] & 1) != 0) {
                              operator_delete(local_140);
                            }
                            uVar10 = ACFULogging::getLogInstance();
                            ACFULogging::handleMessage
                                      (uVar10,2,"%s::%s: could not create output data\n",
                                       "RoseRestoreHost","copyFirmwareUpdater");
                          }
                          goto LAB_00248161;
                        }
                        local_58 = ACFURestoreHost::copyDataFromFileDictionary
                                             (&cf_Rap_RestoreRTKitOS,local_40,uVar17);
                        if (local_58 == 0) {
LAB_0024863d:
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                    (local_1c8,"copyFirmware: rrko bundle data unavailable");
                          ACFUError::addError((ACFUError *)(local_48 + 0x18),local_1c8,1000,0);
                          if ((local_1c8[0] & 1) != 0) {
                            operator_delete(local_1b8);
                          }
                          uVar10 = ACFULogging::getLogInstance();
                          pcVar15 = "%s::%s: rrko bundle data unavailable\n";
                        }
                        else {
                          lVar6 = _CFGetTypeID();
                          lVar7 = _CFDataGetTypeID();
                          if (lVar6 != lVar7) goto LAB_0024863d;
                          ACFUFTABFile::create((ACFUFTABFile *)&local_88,local_58,0,uVar1);
                          pAVar19 = local_88;
                          if (local_88 != (ACFUFTABFile *)0x0) {
                            cVar3 = (**(code **)(*(long *)local_88 + 0x10))(local_88,&local_108);
                            if (cVar3 != '\0') goto LAB_00247fa2;
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                      (local_198,
                                       "copyFirmware: bundle cert firmware doesn\'t have rrko");
                            ACFUError::addError((ACFUError *)(local_48 + 0x18),local_198,1000,0);
                            if ((local_198[0] & 1) != 0) {
                              operator_delete(local_188);
                            }
                            uVar10 = ACFULogging::getLogInstance();
                            local_50 = (__CFData *)0x0;
                            ACFULogging::handleMessage
                                      (uVar10,2,
                                       "%s::%s: bundle cert firmware doesn\'t have \'rrko\'\n",
                                       "RoseRestoreHost","copyFirmwareUpdater");
                            goto LAB_00248850;
                          }
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                    (local_1b0,"copyFirmware: failed to init certification firmware"
                                    );
                          ACFUError::addError((ACFUError *)(local_48 + 0x18),local_1b0,4000,0);
                          if ((local_1b0[0] & 1) != 0) {
                            operator_delete(local_1a0);
                          }
                          uVar10 = ACFULogging::getLogInstance();
                          pcVar15 = "%s::%s: failed to init certification firmware\n";
                        }
                        pAVar19 = (ACFUFTABFile *)0x0;
                        ACFULogging::handleMessage
                                  (uVar10,2,pcVar15,"RoseRestoreHost","copyFirmwareUpdater");
                        local_50 = (__CFData *)0x0;
                        local_40 = 0;
                      }
                      else {
                        local_60 = ACFURestoreHost::copyDataFromFileDictionary
                                             (*(undefined8 *)(local_48 + 8),local_40,uVar17);
                        if (local_60 == 0) {
LAB_002485a2:
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                    (local_1f8,"copyFirmware: rooted override data unavailable");
                          ACFUError::addError((ACFUError *)(local_48 + 0x18),local_1f8,1000,0);
                          if ((local_1f8[0] & 1) != 0) {
                            operator_delete(local_1e8);
                          }
                          uVar10 = ACFULogging::getLogInstance();
                          pcVar15 = "%s::%s: rooted override data unavailable\n";
                        }
                        else {
                          lVar6 = _CFGetTypeID();
                          lVar7 = _CFDataGetTypeID();
                          if (lVar6 != lVar7) goto LAB_002485a2;
                          ACFUFTABFile::create((ACFUFTABFile *)&local_88,local_60,0,uVar1);
                          pAVar20 = local_88;
                          if (local_88 != (ACFUFTABFile *)0x0) goto LAB_00247e8c;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                                    (local_1e0,"copyFirmware: failed to init ftab file object");
                          ACFUError::addError((ACFUError *)(local_48 + 0x18),local_1e0,4000,0);
                          if ((local_1e0[0] & 1) != 0) {
                            operator_delete(local_1d0);
                          }
                          uVar10 = ACFULogging::getLogInstance();
                          pcVar15 = "%s::%s: failed to init ftab file object\n";
                        }
                        pAVar19 = (ACFUFTABFile *)0x0;
                        pAVar20 = (ACFUFTABFile *)0x0;
                        ACFULogging::handleMessage
                                  (uVar10,2,pcVar15,"RoseRestoreHost","copyFirmwareUpdater");
                        local_50 = (__CFData *)0x0;
                        local_58 = 0;
                        local_40 = 0;
                      }
                    }
                  }
                }
LAB_00248161:
                _CFRelease(local_68);
                if (local_58 != 0) {
                  _CFRelease(local_58);
                }
                if (local_60 != 0) {
                  _CFRelease(local_60);
                }
                if (local_50 != (__CFData *)0x0) {
                  _CFRelease();
                }
                goto LAB_00248198;
              }
            }
            local_38 = (ACFUFTABFile *)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_258,"copyFirmwareUpdater: bad device info parameters");
            ACFUError::addError((ACFUError *)(local_48 + 0x18),local_258,0x3ed,0);
            if ((local_258[0] & 1) != 0) {
              operator_delete(local_248);
            }
            local_38 = (ACFUFTABFile *)0x0;
            uVar10 = ACFULogging::getLogInstance();
            pcVar15 = "%s::%s: bad device info parameters\n";
            goto LAB_00248378;
          }
        }
      }
      local_38 = (ACFUFTABFile *)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_270,"copyFirmwareUpdater: unexpected device info parameters");
      ACFUError::addError((ACFUError *)(local_48 + 0x18),local_270,0x3ed,0);
      if ((local_270[0] & 1) != 0) {
        operator_delete(local_260);
      }
      local_38 = (ACFUFTABFile *)0x0;
      uVar10 = ACFULogging::getLogInstance();
      pcVar15 = "%s::%s: unexpected device info parameters\n";
    }
    else {
      local_38 = (ACFUFTABFile *)0x0;
      lVar8 = _CFDataGetTypeID();
      local_38 = (ACFUFTABFile *)0x0;
      lVar9 = _CFGetTypeID(lVar7);
      if (lVar8 != lVar9) goto LAB_002479d9;
      local_38 = (ACFUFTABFile *)0x0;
      uVar10 = ACFULogging::getLogInstance();
      local_38 = (ACFUFTABFile *)0x0;
      ACFULogging::handleMessage
                (uVar10,0,"%s::%s: Restore boot nonce present!\n","RoseRestoreHost",
                 "copyFirmwareUpdater");
      local_38 = (ACFUFTABFile *)0x0;
      lVar8 = _CFDataGetLength(lVar7);
      if (lVar8 == 8) {
        local_38 = (ACFUFTABFile *)0x0;
        puVar11 = (ulonglong *)_CFDataGetBytePtr(lVar7);
        local_90 = *puVar11;
        goto LAB_002479e4;
      }
      local_38 = (ACFUFTABFile *)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_288,"copyFirmwareUpdater: nonce is of unexpected size");
      ACFUError::addError((ACFUError *)(local_48 + 0x18),local_288,0x3ed,0);
      if ((local_288[0] & 1) != 0) {
        operator_delete(local_278);
      }
      local_38 = (ACFUFTABFile *)0x0;
      uVar10 = ACFULogging::getLogInstance();
      pcVar15 = "%s::%s: nonce is of unexpected size\n";
    }
  }
LAB_00248378:
  local_38 = (ACFUFTABFile *)0x0;
  pAVar19 = (ACFUFTABFile *)0x0;
  pAVar20 = (ACFUFTABFile *)0x0;
  ACFULogging::handleMessage(uVar10,2,pcVar15,"RoseRestoreHost","copyFirmwareUpdater");
  local_40 = 0;
LAB_00248198:
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  pAVar16 = local_38;
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if (pAVar20 != (ACFUFTABFile *)0x0) {
    (**(code **)(*(long *)pAVar20 + 0x38))(pAVar20);
  }
  if (pAVar19 != (ACFUFTABFile *)0x0) {
    (**(code **)(*(long *)pAVar19 + 0x38))(pAVar19);
  }
  if (pAVar16 != (ACFUFTABFile *)0x0) {
    (**(code **)(*(long *)pAVar16 + 0x38))(pAVar16);
  }
  return local_40;
}

