// rea decompile_all
// name: ContactsDataClassHandler::mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:
// address: 0x10000ce2b
// body: available
// range: 0x10000ce2b-0x10000d52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000d38e to 0x1000148ab _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID ContactsDataClassHandler::mutateRecordFromSyncServicesForTarget_change_recordIdentifier_sendNow_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,char *param_6)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ID IVar9;
  ID IVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  bool bVar14;
  long local_38;
  
  puVar2 = PTR__objc_msgSend_100020210;
  uVar6 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",*(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150)
  ;
  cVar3 = (*(code *)puVar2)(*(undefined8 *)(param_1 + _subEntityEntityNameSet),"containsObject:",
                            uVar6);
  if (cVar3 == '\0') {
    local_38 = 0;
  }
  else {
    uVar11 = *(undefined8 *)PTR__ISyncRelationship_Contacts_PhoneNumber_Contact_1000201a8;
    uVar7 = (*(code *)puVar2)(param_3,"objectForKey:",uVar11);
    lVar8 = (*(code *)puVar2)(uVar7,"count");
    if (lVar8 == 0) {
      cVar3 = _DLShouldLog(6);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,
                "-[ContactsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                ,6,&cf_Subentitypulledfordevicewithidentifier__hasnoparentcontact___,param_5,param_3
               );
      }
      puVar2 = PTR__objc_msgSend_100020210;
      IVar10 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
      IVar9 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",param_5);
      uVar7 = (*(code *)puVar2)(IVar10,"recordsWithIdentifiers:",IVar9);
      uVar7 = (*(code *)puVar2)(uVar7,"objectForKey:",param_5);
      uVar12 = (*(code *)puVar2)(uVar7,"objectForKey:",uVar11);
      lVar8 = (*(code *)puVar2)(uVar12,"count");
      if (lVar8 == 0) {
        cVar3 = _DLShouldLog(3);
        if (cVar3 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                  ,
                  "-[ContactsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                  ,3,&cf_Parentarrayfromsnapshotforrecordwithid__isempty_Snapshotrecordis__,param_5,
                  uVar7);
          return 0;
        }
        return 0;
      }
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        uVar7 = (*(code *)PTR__objc_msgSend_100020210)(uVar12,"objectAtIndex:",0);
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,
                "-[ContactsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                ,5,&cf_Snapshotrecordforsubentitywithid__hasparentcontact__,param_5,uVar7);
      }
      puVar2 = PTR__objc_msgSend_100020210;
      local_38 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
      (*(code *)puVar2)(local_38,"setObject:forKey:",uVar12,uVar11);
    }
    else {
      local_38 = 0;
    }
  }
  cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                    (uVar6,"isEqualToString:",*(undefined8 *)PTR__ISyncEntity_Contacts_URL_100020148
                    );
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (uVar6,"isEqualToString:",
                       *(undefined8 *)PTR__ISyncEntity_Contacts_Contact_100020100);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                        (uVar6,"isEqualToString:",
                         *(undefined8 *)PTR__ISyncEntity_Contacts_IM_100020128);
      puVar2 = PTR__objc_msgSend_100020210;
      if (cVar3 != '\0') {
        uVar6 = *(undefined8 *)PTR__ISyncAttribute_Contacts_IM_Service_100020080;
        uVar11 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar6);
        cVar3 = (*(code *)puVar2)(uVar11,"isEqualToString:",&cf_icq);
        if ((cVar3 != '\0') &&
           (lVar8 = (*(code *)PTR__objc_msgSend_100020210)
                              (param_3,"objectForKey:",&cf_extendedservicetype), lVar8 != 0)) {
          if (local_38 == 0) {
            local_38 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
          }
          (*(code *)PTR__objc_msgSend_100020210)(local_38,"setObject:forKey:",lVar8,uVar6);
        }
      }
    }
    else {
      iVar5 = (*(code *)PTR__objc_msgSend_100020210)(param_4,"type");
      uVar6 = *(undefined8 *)PTR__ISyncAttribute_Contacts_Contact_Image_100020070;
      if (iVar5 == 2) {
        cVar3 = _CFDictionaryContainsKey(param_3,uVar6);
        cVar4 = _CFDictionaryContainsKey(param_3,&cf_fullImage);
        puVar2 = PTR__objc_msgSend_100020210;
        if (cVar4 == '\0' && cVar3 == '\0') {
          cVar3 = _DLShouldLog(5);
          if (cVar3 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                    ,
                    "-[ContactsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                    ,5,&cf_Skippingimagechecksforrecord__withoutanyimagesinit_,param_5);
          }
          (*(code *)PTR__objc_release_100020218)(local_38);
          return param_3;
        }
        uVar11 = (*(code *)PTR__objc_msgSend_100020210)(param_4,"changes");
        lVar8 = (*(code *)puVar2)(uVar11,"count");
        if (lVar8 < 1) {
          bVar14 = true;
        }
        else {
          uVar7 = *(undefined8 *)PTR__ISyncChangePropertyNameKey_100020088;
          bVar14 = false;
          bVar1 = false;
          lVar13 = 0;
          do {
            puVar2 = PTR__objc_msgSend_100020210;
            uVar12 = (*(code *)PTR__objc_msgSend_100020210)(uVar11,"objectAtIndex:",lVar13);
            uVar12 = (*(code *)puVar2)(uVar12,"objectForKey:",uVar7);
            cVar3 = (*(code *)puVar2)(uVar12,"isEqualToString:",uVar6);
            if (cVar3 == '\0') {
              cVar3 = (*(code *)puVar2)(uVar12,"isEqualToString:",&cf_fullImage);
              if (cVar3 != '\0') {
                bVar14 = true;
              }
            }
            else {
              bVar1 = true;
            }
            lVar13 = lVar13 + 1;
          } while (lVar8 != lVar13);
          bVar14 = !bVar1 && !bVar14;
        }
        (*(code *)PTR__objc_release_100020218)(local_38);
        local_38 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
        puVar2 = PTR__objc_msgSend_100020210;
        if (bVar14) {
          cVar3 = _DLShouldLog(5);
          if (cVar3 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                    ,
                    "-[ContactsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                    ,5,&
                       cf_ChangeforModifywithoutchangestoimagesforrecord___applyingoptimizationforunchangedcontactimagemarker
                    ,param_5);
          }
          (*(code *)puVar2)(local_38,"removeObjectForKey:",uVar6);
          (*(code *)puVar2)(local_38,"removeObjectForKey:",&cf_fullImage);
          (*(code *)puVar2)(local_38,"setObject:forKey:",&cf_SDImageUnchangedMarker);
          IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
          (*(code *)puVar2)(local_38,"setObject:forKey:",IVar10,&cf_ImageChanged);
        }
        else {
          IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
          (*(code *)puVar2)(local_38,"setObject:forKey:",IVar10,&cf_ImageChanged);
        }
      }
      puVar2 = PTR__objc_msgSend_100020210;
      uVar6 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar6);
      iVar5 = (*(code *)puVar2)(uVar6,"length");
      lVar8 = _totalImageSizes;
      *(int *)(param_1 + _totalImageSizes) = *(int *)(param_1 + _totalImageSizes) + iVar5;
      uVar6 = (*(code *)puVar2)(param_3,"objectForKey:",&cf_fullImage);
      iVar5 = (*(code *)puVar2)(uVar6,"length");
      iVar5 = iVar5 + *(int *)(param_1 + lVar8);
      *(int *)(param_1 + lVar8) = iVar5;
      if ((*(char *)(param_1 + _batching) == '\x01') && (4000000 < iVar5)) {
        cVar3 = _DLShouldLog(6);
        if (cVar3 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                  ,
                  "-[ContactsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                  ,6,&cf_Totalimagesizes__d_exceedsthelimitof_dB_Sendingcontactstothedevice_,
                  *(undefined4 *)(param_1 + lVar8),4000000);
        }
        *(undefined4 *)(param_1 + lVar8) = 0;
        if (param_6 != (char *)0x0) {
          *param_6 = '\x01';
        }
      }
    }
  }
  else {
    lVar8 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_value);
    if (lVar8 != 0) {
      IVar10 = _objc_alloc(&_OBJC_CLASS___NSString);
      IVar10 = NSString::initWithFormat_(IVar10,"initWithFormat:",&cf___,lVar8);
      if (local_38 == 0) {
        local_38 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
      }
      (*(code *)PTR__objc_msgSend_100020210)(local_38,"setObject:forKey:",IVar10,&cf_value);
      (*(code *)PTR__objc_release_100020218)(IVar10);
    }
  }
  if (local_38 == 0) {
    return param_3;
  }
  IVar10 = _objc_autorelease(local_38);
  return IVar10;
}

