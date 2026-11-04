// rea decompile_all
// name: _RoseUpdaterGetSharedInfo
// address: 0x249bb9
// body: available
// range: 0x249bb9-0x24a651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _RoseUpdaterGetSharedInfo
               (__CFDictionary *param_1,_func_void_void_ptr_char_ptr *param_2,void *param_3,
               undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  ACFULogging *pAVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  RoseCapabilities *pRVar16;
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  local_1b0 [8];
  __tree_node *local_1a8;
  byte local_198 [16];
  void *local_188;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  void *local_140;
  byte local_138 [16];
  void *local_128;
  byte local_120 [16];
  void *local_110;
  byte local_108 [16];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  RoseCapabilities *local_a8;
  long *plStack_a0;
  void *local_98;
  ushort local_88 [8];
  void *local_78;
  undefined8 *local_70;
  RoseCapabilities *local_68;
  long *plStack_60;
  void *local_58;
  ACFUError local_50 [16];
  long local_40;
  ushort local_32;
  
  local_70 = param_4;
  ACFUError::ACFUError(local_50,(__CFString *)&cf_RoseRestoreInfo);
  pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
  iVar4 = ACFULogging::initLog(pAVar5,param_1,param_2,param_3);
  if (iVar4 == 0) {
    uVar6 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar6,0,"%s::%s: performing Rose pairing operation -- sharing digest dictionary\n",
               "RoseRestoreInfo","RoseUpdaterGetSharedInfo");
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_40 = _CFDictionaryCreateMutable
                         (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (local_40 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_198,"RoseUpdaterGetSharedInfo: Failed to allocate shared info dict");
      ACFUError::addError(local_50,local_198,4000,0);
      if ((local_198[0] & 1) != 0) {
        operator_delete(local_188);
      }
      uVar6 = ACFULogging::getLogInstance();
      pRVar16 = (RoseCapabilities *)0x0;
      ACFULogging::handleMessage
                (uVar6,2,"%s::%s: Failed to allocate shared info dictionary\n","RoseRestoreInfo",
                 "RoseUpdaterGetSharedInfo");
      local_40 = 0;
    }
    else {
      local_88[0] = 0;
      local_32 = 0;
      local_68 = (RoseCapabilities *)0x0;
      plStack_60 = (long *)0x0;
      lVar7 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
      if (lVar7 == 0) {
LAB_00249e1e:
        uVar13 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar13,0,
                   "%s::%s: Could not obtain deviceInfo dictionary. Sharing all digest information.\n"
                   ,"RoseRestoreInfo","supportsRoseSEPairing");
      }
      else {
        lVar8 = _CFGetTypeID(lVar7);
        lVar9 = _CFDictionaryGetTypeID();
        if (lVar8 != lVar9) goto LAB_00249e1e;
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_Rap_ChipID);
        if (lVar8 == 0) {
LAB_0024a350:
          uVar6 = ACFULogging::getLogInstance();
          pcVar15 = "%s::%s: chipID is empty or isn\'t data type\n";
LAB_0024a5ff:
          ACFULogging::handleMessage(uVar6,2,pcVar15,"RoseRestoreInfo","supportsRoseSEPairing");
LAB_00249ded:
          uVar6 = ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (uVar6,0,
                     "%s::%s: Returning empty sharing digest dictionary -- Rose-SE pairing not supported for this device.\n"
                     ,"RoseRestoreInfo","RoseUpdaterGetSharedInfo");
          goto LAB_0024a18f;
        }
        lVar9 = _CFGetTypeID(lVar8);
        lVar10 = _CFDataGetTypeID();
        if (lVar9 != lVar10) goto LAB_0024a350;
        lVar9 = _CFDataGetLength(lVar8);
        if (lVar9 != 2) {
          uVar6 = ACFULogging::getLogInstance();
          pcVar15 = 
          "%s::%s: chipID is not 2 bytes in length. Assuming Rose-SE pairing is not supported.\n";
          goto LAB_0024a5ff;
        }
        pvVar11 = (void *)_CFDataGetBytePtr(lVar8);
        sVar12 = _CFDataGetLength(lVar8);
        _memcpy(local_88,pvVar11,sVar12);
        lVar7 = _CFDictionaryGetValue(lVar7,&cf_Rap_BoardID);
        if (lVar7 == 0) {
LAB_0024a361:
          uVar6 = ACFULogging::getLogInstance();
          pcVar15 = "%s::%s: boardID is empty or isn\'t data type\n";
          goto LAB_0024a5ff;
        }
        lVar8 = _CFGetTypeID(lVar7);
        lVar9 = _CFDataGetTypeID();
        if (lVar8 != lVar9) goto LAB_0024a361;
        lVar8 = _CFDataGetLength(lVar7);
        if (lVar8 != 2) {
          uVar6 = ACFULogging::getLogInstance();
          pcVar15 = 
          "%s::%s: boardID is not 2 bytes in length. Assuming Rose-SE pairing is not supported.\n";
          goto LAB_0024a5ff;
        }
        pvVar11 = (void *)_CFDataGetBytePtr(lVar7);
        sVar12 = _CFDataGetLength(lVar7);
        _memcpy(&local_32,pvVar11,sVar12);
        RoseCapabilities::create((RoseCapabilities *)&local_a8,local_88[0]);
        plVar2 = plStack_a0;
        local_68 = local_a8;
        plStack_60 = plStack_a0;
        if (local_a8 == (RoseCapabilities *)0x0) {
          uVar13 = ACFULogging::getLogInstance();
          cVar3 = '\0';
          ACFULogging::handleMessage
                    (uVar13,2,"%s::%s: failed to create capabilities\n","RoseRestoreInfo",
                     "supportsRoseSEPairing");
        }
        else {
          cVar3 = RoseCapabilities::supportsRoseSEPairing(local_a8,local_32);
        }
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (cVar3 == '\0') goto LAB_00249ded;
      }
      uVar13 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar13,0,"%s::%s: Rose-SE pairing is supported for this device\n","RoseRestoreInfo"
                 ,"RoseUpdaterGetSharedInfo");
      ACFUCommon::parseDebugArgs((ACFUCommon *)&local_68,param_1,"buildIDRoseSEPair");
      pRVar16 = local_68;
      if ((int)local_68 == 0 || (ulong)local_68 >> 0x20 != 0) {
        lVar7 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
        if (lVar7 == 0) {
LAB_0024a28d:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_f0,
                     "RoseUpdaterGetSharedInfo: Invalid or no firmware file present in restore options"
                    );
          ACFUError::addError(local_50,local_f0,1000,0);
          if ((local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
          uVar6 = ACFULogging::getLogInstance();
          pcVar15 = "%s::%s: Invalid or no firmware file present in restore options\n";
        }
        else {
          lVar8 = _CFDataGetTypeID();
          lVar9 = _CFGetTypeID(lVar7);
          if (lVar8 != lVar9) goto LAB_0024a28d;
          GetRoseTatsuTagToFileNameMap();
          RTKitFirmware::create((RTKitFirmware *)&local_68,local_1b0,lVar7,0);
          pRVar16 = local_68;
          local_68 = (RoseCapabilities *)0x0;
          std::
          __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
          ::destroy(local_1b0,local_1a8);
          if (pRVar16 != (RoseCapabilities *)0x0) {
            lVar8 = ACFUFirmware::getMeasureDataWithTag
                              ((ACFUFirmware *)pRVar16,(__CFString *)&cf_Rap_RTKitOS);
            lVar9 = ACFUFirmware::getMeasureDataWithTag
                              ((ACFUFirmware *)pRVar16,(__CFString *)&cf_Rap_SoftwareBinaryDsp1);
LAB_0024a057:
            if ((lVar8 == 0) || (lVar9 == 0)) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_c0,"RoseUpdaterGetSharedInfo: Missing required firmware measurements"
                        );
              ACFUError::addError(local_50,local_c0,0xfa1,0);
              if ((local_c0[0] & 1) != 0) {
                operator_delete(local_b0);
              }
              uVar6 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar6,2,"%s::%s: Missing required firmware measurements\n",
                         "RoseRestoreInfo","RoseUpdaterGetSharedInfo");
            }
            else {
              _CFDictionarySetValue(local_40,&cf_SE_RapSwBinDsp,lVar9);
              _CFDictionarySetValue(local_40,&cf_SE_RapRTKitOS,lVar8);
              pAVar5 = (ACFULogging *)ACFULogging::getLogInstance();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_88,"RoseRestoreInfo");
              puVar14 = (undefined8 *)std::string::append((char *)local_88);
              local_98 = (void *)puVar14[2];
              local_a8 = (RoseCapabilities *)*puVar14;
              plStack_a0 = (long *)puVar14[1];
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14[2] = 0;
              puVar14 = (undefined8 *)std::string::append((char *)&local_a8);
              local_58 = (void *)puVar14[2];
              local_68 = (RoseCapabilities *)*puVar14;
              plStack_60 = (long *)puVar14[1];
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14[2] = 0;
              ACFULogging::handleMessageCFType(pAVar5,&local_68,0,"Rose-SE Shared Info: ",local_40);
              if (((ulong)local_68 & 1) != 0) {
                operator_delete(local_58);
              }
              if (((ulong)local_a8 & 1) != 0) {
                operator_delete(local_98);
              }
              if ((local_88[0] & 1) != 0) {
                operator_delete(local_78);
              }
            }
            goto LAB_0024a14e;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_d8,"RoseUpdaterGetSharedInfo: Failed to open firmware");
          ACFUError::addError(local_50,local_d8,1000,0);
          if ((local_d8[0] & 1) != 0) {
            operator_delete(local_c8);
          }
          uVar6 = ACFULogging::getLogInstance();
          pcVar15 = "%s::%s: Failed to open firmware\n";
        }
        pRVar16 = (RoseCapabilities *)0x0;
        ACFULogging::handleMessage(uVar6,2,pcVar15,"RoseRestoreInfo","RoseUpdaterGetSharedInfo");
      }
      else {
        uVar13 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar13,0,"%s::%s: forcing pairing with build ID: %u\n","RoseRestoreInfo",
                   "RoseUpdaterGetSharedInfo",(ulong)pRVar16 & 0xffffffff);
        lVar7 = _CFStringCreateWithFormat
                          (uVar6,0,&cf_________,&cf_BuildIdentity,&cf_Rap_RTKitOS,&cf_Digest);
        if (lVar7 == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_180,
                     "RoseUpdaterGetSharedInfo: failed to create build ID key path for rkos");
          ACFUError::addError(local_50,local_180,0x3ed,0);
          if ((local_180[0] & 1) != 0) {
            operator_delete(local_170);
          }
          uVar6 = ACFULogging::getLogInstance();
          pcVar15 = "%s::%s: failed to create build ID key path for rkos\n";
        }
        else {
          lVar8 = _AMSupportGetValueForKeyPathInDict(uVar6,param_1,lVar7);
          _CFRelease(lVar7);
          if (lVar8 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_168,"RoseUpdaterGetSharedInfo: failed to get dict entry rkos digest");
            ACFUError::addError(local_50,local_168,4000,0);
            if ((local_168[0] & 1) != 0) {
              operator_delete(local_158);
            }
            uVar6 = ACFULogging::getLogInstance();
            pcVar15 = "%s::%s: failed to get dict entry rkos digest\n";
          }
          else {
            lVar7 = _CFDataGetTypeID();
            lVar9 = _CFGetTypeID(lVar8);
            if (lVar7 == lVar9) {
              lVar7 = _CFStringCreateWithFormat
                                (uVar6,0,&cf_________,&cf_BuildIdentity,&cf_Rap_SoftwareBinaryDsp1,
                                 &cf_Digest);
              if (lVar7 == 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_138,
                           "RoseUpdaterGetSharedInfo: failed to create build ID key path for sdb1");
                ACFUError::addError(local_50,local_138,0x3ed,0);
                if ((local_138[0] & 1) != 0) {
                  operator_delete(local_128);
                }
                uVar6 = ACFULogging::getLogInstance();
                pcVar15 = "%s::%s: failed to create build ID key path for sdb1\n";
              }
              else {
                lVar9 = _AMSupportGetValueForKeyPathInDict(uVar6,param_1,lVar7);
                _CFRelease(lVar7);
                if (lVar9 == 0) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_120,
                             "RoseUpdaterGetSharedInfo: failed to get dict entry for sbd1 digest");
                  ACFUError::addError(local_50,local_120,0x3ed,0);
                  if ((local_120[0] & 1) != 0) {
                    operator_delete(local_110);
                  }
                  uVar6 = ACFULogging::getLogInstance();
                  pcVar15 = "%s::%s: failed to get dict entry for sbd1 digest\n";
                }
                else {
                  lVar7 = _CFDataGetTypeID();
                  lVar10 = _CFGetTypeID(lVar9);
                  if (lVar7 == lVar10) {
                    pRVar16 = (RoseCapabilities *)0x0;
                    goto LAB_0024a057;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_108,
                             "RoseUpdaterGetSharedInfo: sbd1 digest is of an unexpected type");
                  ACFUError::addError(local_50,local_108,0x3ed,0);
                  if ((local_108[0] & 1) != 0) {
                    operator_delete(local_f8);
                  }
                  uVar6 = ACFULogging::getLogInstance();
                  pcVar15 = "%s::%s: sbd1 digest is of an unexpected type\n";
                }
              }
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_150,"RoseUpdaterGetSharedInfo: rkos digest is of an unexpected type")
              ;
              ACFUError::addError(local_50,local_150,0x3ed,0);
              if ((local_150[0] & 1) != 0) {
                operator_delete(local_140);
              }
              uVar6 = ACFULogging::getLogInstance();
              pcVar15 = "%s::%s: rkos digest is of an unexpected type\n";
            }
          }
        }
        pRVar16 = (RoseCapabilities *)0x0;
        ACFULogging::handleMessage(uVar6,2,pcVar15,"RoseRestoreInfo","RoseUpdaterGetSharedInfo");
      }
    }
  }
  else {
    uVar6 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar6,2,"%s::%s: failed to init logging\n","RoseRestoreInfo",
               "RoseUpdaterGetSharedInfo");
    uVar6 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&cf_RoseRestoreInfo,
                           (long)iVar4,0);
    *local_70 = uVar6;
    pRVar16 = (RoseCapabilities *)0x0;
    local_40 = 0;
  }
LAB_0024a14e:
  cVar3 = ACFUError::hasError(local_50);
  if (cVar3 != '\0') {
    uVar6 = ACFUError::getCFError(local_50);
    *local_70 = uVar6;
    if (local_40 != 0) {
      _CFRelease();
    }
    local_40 = 0;
  }
  if (pRVar16 != (RoseCapabilities *)0x0) {
    (**(code **)(*(long *)pRVar16 + 0x38))(pRVar16);
  }
LAB_0024a18f:
  ACFUError::~ACFUError(local_50);
  return local_40;
}

