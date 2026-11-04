// rea decompile_all
// name: _RoseUpdaterCreateRequest
// address: 0x2496ca
// body: available
// range: 0x2496ca-0x249a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _RoseUpdaterCreateRequest
               (__CFDictionary *param_1,_func_void_void_ptr_char_ptr *param_2,void *param_3,
               undefined8 *param_4)

{
  long *plVar1;
  ACFURestoreHost *pAVar2;
  ACFURestoreHost *pAVar3;
  int iVar4;
  ACFULogging *this;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  local_c8 [8];
  __tree_node *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined2 local_a0;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  long *local_60;
  ACFUError local_58 [16];
  long local_48;
  long *plStack_40;
  ACFURestoreHost *local_30;
  
  ACFUError::ACFUError(local_58,(__CFString *)&cf_RoseRestoreInfo);
  local_48 = 0;
  plStack_40 = (long *)0x0;
  local_b0 = &cf_Rap_ProductionMode;
  local_a0 = 0;
  local_a8 = &cf_Rap_SecurityMode;
  this = (ACFULogging *)ACFULogging::getLogInstance();
  iVar4 = ACFULogging::initLog(this,param_1,param_2,param_3);
  if (iVar4 == 0) {
    ACFUCommon::parseDebugArgs((ACFUCommon *)&local_30,param_1,"demoteProd");
    pAVar2 = local_30;
    if ((ulong)local_30 >> 0x20 != 0xfa6) {
      if ((int)((ulong)local_30 >> 0x20) != 0) {
        uVar8 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar8,2,"%s::%s: failed to parse debug arguments\n","RoseRestoreInfo",
                   "RoseUpdaterCreateRequest");
        lVar5 = (long)pAVar2 >> 0x20;
        goto LAB_00249a7a;
      }
      local_a0 = CONCAT11(local_a0._1_1_,(int)local_30 == 1);
    }
    RoseRestoreHost::create((RoseRestoreHost *)&local_30,param_1,(__CFString *)&cf_RoseRestoreInfo);
    pAVar2 = local_30;
    if (local_30 != (ACFURestoreHost *)0x0) {
      lVar5 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
      if (lVar5 == 0) {
LAB_002499c3:
        uVar8 = ACFULogging::getLogInstance();
        lVar5 = 0;
        ACFULogging::handleMessage
                  (uVar8,0,"%s::%s: Invalid or no firmware file present in restore options\n",
                   "RoseRestoreInfo","RoseUpdaterCreateRequest");
      }
      else {
        lVar6 = _CFDataGetTypeID();
        lVar7 = _CFGetTypeID(lVar5);
        if (lVar6 != lVar7) goto LAB_002499c3;
        GetRoseTatsuTagToFileNameMap();
        RTKitFirmware::create((RTKitFirmware *)&local_30,local_c8,lVar5,0);
        std::shared_ptr<RTKitFirmware>::
        operator=[abi_ne190102_<RTKitFirmware,std::default_delete<RTKitFirmware>,0>
                  ((shared_ptr<RTKitFirmware> *)&local_48,(unique_ptr *)&local_30);
        pAVar3 = local_30;
        local_30 = (ACFURestoreHost *)0x0;
        if (pAVar3 != (ACFURestoreHost *)0x0) {
          (**(code **)(*(long *)pAVar3 + 0x38))();
        }
        std::
        __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
        ::destroy(local_c8,local_c0);
        if (local_48 == 0) {
          uVar8 = ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (uVar8,2,"%s::%s: Failed to find firmware\n","RoseRestoreInfo",
                     "RoseUpdaterCreateRequest");
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_98,"RoseUpdaterCreateRequest: failed to open firmware");
          ACFUError::addError(local_58,local_98,1000,0);
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          uVar8 = ACFUError::getCFError(local_58);
LAB_0024996c:
          *param_4 = uVar8;
          lVar5 = 0;
        }
        else {
          local_68 = local_48;
          local_60 = plStack_40;
          if (plStack_40 != (long *)0x0) {
            LOCK();
            plStack_40[1] = plStack_40[1] + 1;
            UNLOCK();
          }
          lVar5 = (**(code **)(*(long *)pAVar2 + 8))(pAVar2,&local_68,&local_b0);
          if (local_60 != (long *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar6 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar6 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (lVar5 == 0) {
            uVar8 = ACFULogging::getLogInstance();
            ACFULogging::handleMessage
                      (uVar8,2,"%s::%s: failed to create request dict\n","RoseRestoreInfo",
                       "RoseUpdaterCreateRequest");
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_80,"RoseUpdaterCreateRequest: failed to create request dict");
            ACFUError::addError(local_58,local_80,0xfa1,0);
            if ((local_80[0] & 1) != 0) {
              operator_delete(local_70);
            }
            uVar8 = ACFURestoreHost::getError(pAVar2);
            goto LAB_0024996c;
          }
        }
      }
      (**(code **)(*(long *)pAVar2 + 0x18))(pAVar2);
      goto LAB_0024997b;
    }
    uVar8 = ACFULogging::getLogInstance();
    lVar5 = 4000;
    ACFULogging::handleMessage
              (uVar8,2,"%s::%s: failed to create host object\n","RoseRestoreInfo",
               "RoseUpdaterCreateRequest");
  }
  else {
    uVar8 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar8,2,"%s::%s: failed to init logging\n","RoseRestoreInfo",
               "RoseUpdaterCreateRequest");
    lVar5 = (long)iVar4;
  }
LAB_00249a7a:
  uVar8 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&cf_RoseRestoreInfo,lVar5,
                         0);
  *param_4 = uVar8;
  lVar5 = 0;
LAB_0024997b:
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  ACFUError::~ACFUError(local_58);
  return lVar5;
}

