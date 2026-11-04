// rea decompile_all
// name: CalendarsDataClassHandler::noteTargetPushedRecord:recordIdentifier:
// address: 0x100009ebf
// body: available
// range: 0x100009ebf-0x10000a3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000a069 to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void CalendarsDataClassHandler::noteTargetPushedRecord_recordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  
  lVar5 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",*(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150)
  ;
  if (lVar5 == 0) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return;
    }
    pcVar12 = &cf_Bogusrecordwithfromtargetwithid___recordentitynameisnil;
  }
  else {
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (lVar5,"isEqualToString:",
                       *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_1000200c8);
    if (cVar2 == '\0') {
      return;
    }
    IVar6 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",
                       *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_Title_100020010);
    if (IVar6 != 0) {
      if ((*(long *)(param_1 + _defaultCalendarRecordIdentifier) == 0) &&
         ((cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                             (IVar6,"isEqualToString:",
                              *(undefined8 *)(param_1 + _defaultCalendarName)), cVar2 != '\0' ||
          (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(IVar6,"isEqualToString:",&cf_Home),
          cVar2 != '\0')))) {
        cVar2 = _DLShouldLog(5);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                  ,"-[CalendarsDataClassHandler noteTargetPushedRecord:recordIdentifier:]",5,
                  &cf_Checkingcandidatecalendar__forsuitabilityfordefaultrecords___,param_4,param_3)
          ;
        }
        puVar1 = PTR__objc_msgSend_100020210;
        IVar7 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
        IVar8 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",param_4);
        uVar13 = (*(code *)puVar1)(IVar7,"recordsWithIdentifiers:",IVar8);
        uVar9 = (*(code *)puVar1)(uVar13,"objectForKey:",param_4);
        uVar13 = (*(code *)puVar1)(param_3,"objectForKey:",&cf_com_apple_MobileSync_calDAVInfo);
        cVar2 = (*(code *)puVar1)(uVar13,"boolValue");
        uVar13 = (*(code *)puVar1)(uVar9,"objectForKey:",&cf_com_apple_ical_type);
        cVar3 = (*(code *)puVar1)(uVar13,"isEqualToString:",&cf_caldav);
        uVar13 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_ReadOnly_100020008;
        uVar10 = (*(code *)puVar1)(param_3,"objectForKey:",uVar13);
        uVar13 = (*(code *)puVar1)(uVar9,"objectForKey:",uVar13);
        cVar4 = (*(code *)puVar1)(uVar10,"boolValue");
        if ((cVar4 == '\x01') ||
           (cVar4 = (*(code *)PTR__objc_msgSend_100020210)(uVar13,"boolValue"),
           (cVar2 != '\0' || cVar3 != '\0') || cVar4 == '\x01')) {
          cVar4 = _DLShouldLog(4);
          puVar1 = PTR__objc_msgSend_100020210;
          if (cVar4 != '\0') {
            cVar4 = (*(code *)PTR__objc_msgSend_100020210)(uVar10,"boolValue");
            pcVar15 = "Yes";
            pcVar17 = "Yes";
            if (cVar4 == '\0') {
              pcVar17 = "No";
            }
            pcVar16 = "Yes";
            if (cVar2 == '\0') {
              pcVar16 = "No";
            }
            cVar2 = (*(code *)puVar1)(uVar13,"boolValue");
            pcVar14 = "Yes";
            if (cVar2 == '\0') {
              pcVar14 = "No";
            }
            if (cVar3 == '\0') {
              pcVar15 = "No";
            }
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                    ,"-[CalendarsDataClassHandler noteTargetPushedRecord:recordIdentifier:]",4,
                    &
                    cf_Candidatecalendarfordefaultrecordsisread_onlyorCALDAV_switchingto___Pushedcalendarr_ovalue__s_CalDAV_s_snapshotcalendarr_ovalue__s_CalDAV_s
                    ,&cf_Home,pcVar17,pcVar16,pcVar14,pcVar15);
          }
          lVar5 = _defaultCalendarName;
          (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _defaultCalendarName));
          uVar13 = (*(code *)PTR__objc_msgSend_100020210)(&cf_Home,"copy");
          *(undefined8 *)(param_1 + lVar5) = uVar13;
          lVar5 = _homeCalendarRecordIdentifier;
          if (*(long *)(param_1 + _homeCalendarRecordIdentifier) != 0) {
            cVar2 = _DLShouldLog(5);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                      ,"-[CalendarsDataClassHandler noteTargetPushedRecord:recordIdentifier:]",5,
                      &
                      cf_Devicealreadypushedcalendar__sowe_lluseitfordefaultrecords_usingidentifier__
                      ,&cf_Home,*(undefined8 *)(param_1 + lVar5));
            }
            param_4 = *(ID *)(param_1 + lVar5);
            goto LAB_10000a398;
          }
        }
        else {
          cVar2 = (*(code *)PTR__objc_msgSend_100020210)(IVar6,"isEqualToString:",&cf_Home);
          lVar5 = _defaultCalendarName;
          if (cVar2 != '\0') {
            uVar13 = (*(code *)PTR__objc_msgSend_100020210)(param_4,"copy");
            *(undefined8 *)(param_1 + _homeCalendarRecordIdentifier) = uVar13;
          }
          cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                            (IVar6,"isEqualToString:",*(undefined8 *)(param_1 + lVar5));
          if (cVar2 != '\0') {
LAB_10000a398:
            lVar11 = (*(code *)PTR__objc_msgSend_100020210)(param_4,"copy");
            lVar5 = _defaultCalendarRecordIdentifier;
            if (lVar11 != 0) {
              (*(code *)PTR__objc_release_100020218)
                        (*(undefined8 *)(param_1 + _defaultCalendarRecordIdentifier));
              *(long *)(param_1 + lVar5) = lVar11;
            }
          }
        }
      }
      lVar11 = _filterCalendarNames;
      lVar5 = *(long *)(param_1 + _filterCalendarNames);
      if (lVar5 == 0) {
        return;
      }
      if (*(uint *)(param_1 + _syncType) < 2) {
        lVar5 = (*(code *)PTR__objc_msgSend_100020210)
                          (param_3,"objectForKey:",&cf_com_apple_MobileSync_updated);
        if (lVar5 == 0) {
          return;
        }
        lVar5 = *(long *)(param_1 + lVar11);
      }
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar5,"containsObject:",IVar6);
      if (cVar2 != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + _rebuildFilterCriteria) = 1;
      (*(code *)PTR__objc_msgSend_100020210)(*(undefined8 *)(param_1 + lVar11),"addObject:",IVar6);
      cVar2 = _DLShouldLog(5);
      if (cVar2 == '\0') {
        return;
      }
      pcVar12 = &
                cf_Calendar____wasdisabledinourfilter_butwe_renotfastsyncing_Turningthecalendarbackoninthefilter_
      ;
      uVar13 = 5;
      param_4 = IVar6;
      goto LAB_10000a059;
    }
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return;
    }
    pcVar12 = &cf_Boguscalendarrecordfromdevicewithid___calendartitleisnil;
  }
  uVar13 = 3;
LAB_10000a059:
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
          ,"-[CalendarsDataClassHandler noteTargetPushedRecord:recordIdentifier:]",uVar13,pcVar12,
          param_4);
  return;
}

