// rea decompile_all
// name: CalendarsDataClassHandler::setFilteringCriteria:
// address: 0x10000a3c4
// body: available
// range: 0x10000a3c4-0x10000a6fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000a66c to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void CalendarsDataClassHandler::setFilteringCriteria_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  double extraout_XMM0_Qa;
  
  *(undefined1 *)(param_1 + _rebuildFilterCriteria) = 0;
  puVar1 = PTR__objc_msgSend_100020210;
  IVar5 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary,"class");
  cVar2 = (*(code *)puVar1)(param_3,"isKindOfClass:",IVar5);
  if (cVar2 == '\0') {
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return;
    }
    pcVar9 = &cf_Calendarsfilteringcriteriaisnotdictionary___;
    uVar6 = 3;
    goto LAB_10000a65c;
  }
  uVar6 = (*(code *)PTR__objc_retain_100020220)(param_3);
  *(undefined8 *)(param_1 + _filterCriteria) = uVar6;
  lVar7 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",&cf_CalendarFilterCalendarsKey);
  lVar8 = _filterCalendarNames;
  if (lVar7 == 0) {
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      pcVar9 = &cf_Calendarfilterhasnocalendarstofilter___;
      IVar5 = param_3;
      goto LAB_10000a50c;
    }
  }
  else {
    (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _filterCalendarNames));
    IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
    IVar5 = NSMutableSet::initWithArray_(IVar5,"initWithArray:",lVar7);
    *(ID *)(param_1 + lVar8) = IVar5;
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      pcVar9 = &cf_Settingcalendarfilternamesto__;
      IVar5 = *(ID *)(param_1 + lVar8);
LAB_10000a50c:
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler setFilteringCriteria:]",6,pcVar9,IVar5);
    }
  }
  uVar6 = (*(code *)puVar1)(param_3,"objectForKey:",&cf_CalendarFilterBirthdayCalendarKey);
  uVar3 = (*(code *)puVar1)(uVar6,"boolValue");
  *(undefined1 *)(param_1 + _excludeBirthdayCalendar) = uVar3;
  lVar8 = (*(code *)puVar1)(param_3,"objectForKey:",&cf_CalendarFilterDayLimitKey);
  cVar2 = _DLShouldLog(6);
  if (lVar8 == 0) {
    if (cVar2 != '\0') {
      pcVar9 = &cf_Calendarfilterhasnodaylimitset___;
      uVar6 = 6;
LAB_10000a65c:
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler setFilteringCriteria:]",uVar6,pcVar9,param_3);
      return;
    }
  }
  else {
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler setFilteringCriteria:]",6,
              &cf_Settingdaylimitforcalendarfilteringto__,lVar8);
    }
    iVar4 = (*(code *)PTR__objc_msgSend_100020210)(lVar8,"intValue");
    if (iVar4 < 1) {
      cVar2 = _DLShouldLog(4);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,"-[CalendarsDataClassHandler setFilteringCriteria:]",4,
                &cf_Calendarfilterhasbogusdaylimitset___,param_3);
      }
      *(undefined4 *)(param_1 + _dayLimit) = 0;
    }
    else {
      IVar5 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
      NSDate::timeIntervalSince1970(IVar5,"timeIntervalSince1970");
      lVar8 = _dayLimit;
      iVar4 = iVar4 * -0x15180 + (int)extraout_XMM0_Qa;
      *(int *)(param_1 + _dayLimit) = iVar4;
      if (iVar4 < 1) {
        cVar2 = _DLShouldLog(4);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                  ,"-[CalendarsDataClassHandler setFilteringCriteria:]",4,
                  &cf_Calendarfilterdaylimitiswaytooold_ignoringforfilter___,param_3);
        }
        *(undefined4 *)(param_1 + lVar8) = 0;
      }
      else {
        cVar2 = _DLShouldLog(6);
        if (cVar2 != '\0') {
          param_3 = (*(code *)PTR__objc_msgSend_100020210)
                              ((double)*(int *)(param_1 + lVar8),&_OBJC_CLASS___NSCalendarDate,
                               "dateWithTimeIntervalSince1970:");
          pcVar9 = &cf_Settingdaylimitdateto__;
          uVar6 = 6;
          goto LAB_10000a65c;
        }
      }
    }
  }
  return;
}

