// rea decompile_all
// name: FUN_100011138
// address: 0x100011138
// body: available
// range: 0x100011138-0x10001189f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100011138(long param_1,ID param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 local_48;
  ID local_40;
  long local_38;
  
  iVar4 = (*(code *)PTR__objc_msgSend_100020210)(param_1,"intValue");
  local_48 = 0;
  FUN_100010f13(param_3,DAT_100028e98 ^ 1,param_4,param_5);
  puVar1 = PTR__objc_msgSend_100020210;
  if (DAT_100028ea0 == 0) {
    return false;
  }
  uVar5 = (*(code *)PTR__objc_msgSend_100020210)(DAT_100028ea0,"talker");
  (*(code *)puVar1)(DAT_100028ea0,"_setTarget:",param_2);
  IVar6 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__tmp_MobileSync_lock___,
                     param_2);
  cVar2 = _DLGetFlockForFileWithCancel(0x43960000,IVar6,FUN_10001105b,DAT_100028ea0);
  if (cVar2 == '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)(DAT_100028ea0,"cancelled");
    if (cVar2 != '\0' || (char)param_4 != '\0') {
      return false;
    }
    lVar9 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"count");
    if (lVar9 == 0) {
      pcVar8 = &cf___;
    }
    else {
      pcVar8 = (cfstringStruct *)(*(code *)PTR__objc_msgSend_100020210)(param_3,"objectAtIndex:",0);
    }
    SyncClient::postNotificationForTargetId_dataClassName_notificationName_message_errorCode_
              ((ID)&objc::class_t::SyncClient,
               "postNotificationForTargetId:dataClassName:notificationName:message:errorCode:",
               param_2,(ID)pcVar8,0x100020a58,0x100020a78,0xfffffff0);
    return false;
  }
  local_40 = param_2;
  if (iVar4 == 0 || param_1 == 0) {
    IVar6 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0x1a0a);
    IVar6 = NSMutableDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithObjectsAndKeys:",
                       &cf_DLInfoStreamTypeTCP,&cf_DLInfoStreamTypeKey,param_2,&cf_DLInfoHostnameKey
                       ,IVar6,&cf_DLInfoPortKey,0);
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      uVar7 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"componentsJoinedByString:",&cf__);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"_ConnectAndSync",6,&cf_Connectingtoanethernetclientwithinfo___dataclassnames__,IVar6
              ,uVar7);
    }
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)(uVar5,"connectToDevice:error:",IVar6,&local_48);
    if (cVar2 == '\x01') {
      uVar7 = 0;
LAB_100011692:
      cVar2 = '\x01';
      (*(code *)PTR__objc_msgSend_100020210)
                (DAT_100028ea0,"runSyncSessionWithTargetIdentifier:handleAppEvents:displayName:",
                 param_2,1,uVar7);
      cVar3 = _DLShouldLog(6);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
                ,"_ConnectAndSync",6,&cf_Clientfinishedrunningsyncsession);
      }
      goto LAB_100011812;
    }
    cVar3 = _DLShouldLog(3);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"_ConnectAndSync",3,&cf_ErrorcallingconnectToDevice___,local_48);
    }
  }
  else {
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      pcVar12 = "usbmux";
      if (iVar4 == -1) {
        pcVar12 = "lockdown";
      }
      uVar7 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"componentsJoinedByString:",&cf__);
      param_2 = local_40;
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"_ConnectAndSync",6,&cf_Connectingtoa_sservicewithdataclassnames__,pcVar12,uVar7);
    }
    uVar7 = _DLDeviceListenerCreate();
    lVar9 = _DLDeviceWaitForAttachedDevice(0,uVar7,param_2);
    if (lVar9 == 0) {
      cVar2 = _DLShouldLog(4);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
                ,"_getDeviceForTarget",4,&cf_Couldnotfindanattacheddevicewiththeid__,param_2);
      }
      _DLDeviceListenerDestroy(uVar7);
      cVar2 = _DLShouldLog(6);
      if (cVar2 == '\0') {
        return false;
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"_ConnectAndSync",6,&cf_Can_tgetdeviceobjectfortargetid______,param_2,param_1);
      return false;
    }
    _DLDeviceRetain(lVar9);
    _DLDeviceListenerDestroy(uVar7);
    local_38 = 0;
    iVar4 = _DLDeviceCopyAMDValue(lVar9,&cf_com_apple_mobile_sync_data_class,0,&local_38,1);
    cVar2 = _DLShouldLog(5);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"_ConnectAndSync",5,&cf_Calltogetcom_apple_mobile_sync_data_classdictreturned_d___,
              iVar4,local_38);
    }
    if ((iVar4 == 0) && (local_38 != 0)) {
      lVar10 = _CFDictionaryGetTypeID();
      lVar11 = _CFGetTypeID(local_38);
      if ((lVar10 != lVar11) ||
         (lVar11 = _CFDictionaryGetCount(local_38), lVar10 = local_38, lVar11 < 1))
      goto LAB_100011569;
      IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
      IVar6 = NSMutableSet::init(IVar6,"init");
      lVar11 = _CFDictionaryGetValue(lVar10,&cf_Bookmarks);
      if (lVar11 != 0) {
        NSMutableSet::addObject_
                  (IVar6,"addObject:",*(undefined8 *)PTR__ISyncDataClass_Bookmarks_100020090);
      }
      lVar11 = _CFDictionaryGetValue(lVar10,&cf_Calendars);
      if (lVar11 != 0) {
        NSMutableSet::addObject_
                  (IVar6,"addObject:",*(undefined8 *)PTR__ISyncDataClass_Calendars_100020098);
      }
      lVar11 = _CFDictionaryGetValue(lVar10,&cf_Contacts);
      if (lVar11 != 0) {
        NSMutableSet::addObject_
                  (IVar6,"addObject:",*(undefined8 *)PTR__ISyncDataClass_Contacts_1000200a0);
      }
      lVar10 = _CFDictionaryGetValue(lVar10,&cf_MailAccounts);
      if (lVar10 != 0) {
        NSMutableSet::addObject_(IVar6,"addObject:",&cf_com_apple_MailAccounts);
      }
    }
    else {
LAB_100011569:
      IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
      IVar6 = NSMutableSet::initWithObjects_
                        (IVar6,"initWithObjects:",
                         *(undefined8 *)PTR__ISyncDataClass_Bookmarks_100020090,
                         *(undefined8 *)PTR__ISyncDataClass_Calendars_100020098,
                         *(undefined8 *)PTR__ISyncDataClass_Contacts_1000200a0,
                         &cf_com_apple_MailAccounts,0);
    }
    cVar2 = _DLShouldLog(5);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"_ConnectAndSync",5,&cf_Devicesupportssyncingthesedataclasses___,IVar6);
    }
    puVar1 = PTR__objc_msgSend_100020210;
    (*(code *)PTR__objc_msgSend_100020210)
              (DAT_100028ea0,"setSupportedDataClassNamesForDevice:",IVar6);
    (*(code *)PTR__objc_release_100020218)(IVar6);
    uVar7 = _DLDeviceGetName(lVar9);
    uVar7 = (*(code *)PTR__objc_retain_100020220)(uVar7);
    uVar7 = _objc_autorelease(uVar7);
    IVar6 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    IVar6 = NSDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",IVar6,
                       &cf_TimeoutConnection,0);
    cVar2 = (*(code *)puVar1)(uVar5,"connectToDevice:serviceName:lockdownOptions:error:",lVar9,
                              &cf_com_apple_mobilesync,IVar6,&local_48);
    if (cVar2 == '\x01') {
      _DLDeviceRelease(lVar9);
      param_2 = local_40;
      goto LAB_100011692;
    }
    cVar3 = _DLShouldLog(3);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"_ConnectAndSync",3,&cf_ErrorcallinglockdownconnectToDevice___,local_48);
    }
    _DLDeviceRelease(lVar9);
  }
  cVar3 = _DLShouldLog(3);
  if (cVar3 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
            ,"_ConnectAndSync",3,&cf_Notconnectedtodevice_Skippingsyncsession);
  }
LAB_100011812:
  IVar6 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__tmp_MobileSync_lock___,
                     local_40);
  _DLReleaseFlockForFile(IVar6);
  if (cVar2 != '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)(DAT_100028ea0,"succeeded");
    return cVar2 != '\0';
  }
  return false;
}

