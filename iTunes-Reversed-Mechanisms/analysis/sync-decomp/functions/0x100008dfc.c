// rea decompile_all
// name: CalendarsDataClassHandler::_dateOutsideRange:
// address: 0x100008dfc
// body: available
// range: 0x100008dfc-0x100008ff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char CalendarsDataClassHandler::_dateOutsideRange_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  bool bVar2;
  ID IVar3;
  undefined8 uVar4;
  double dVar5;
  
  bVar2 = false;
  if ((param_3 != 0) && (bVar2 = false, *(char *)(param_1 + _supportsOldEvents) == '\0')) {
    if (DAT_100028e48 == 0) {
      IVar3 = _objc_alloc(&_OBJC_CLASS___NSCalendarDate);
      uVar4 = FUN_10000bca0();
      DAT_100028e48 =
           NSCalendarDate::initWithYear_month_day_hour_minute_second_timeZone_
                     (IVar3,"initWithYear:month:day:hour:minute:second:timeZone:",0x78d,1,1,0,0,0,
                      uVar4);
      IVar3 = _objc_alloc(&_OBJC_CLASS___NSCalendarDate);
      uVar4 = FUN_10000bca0();
      DAT_100028e50 =
           NSCalendarDate::initWithYear_month_day_hour_minute_second_timeZone_
                     (IVar3,"initWithYear:month:day:hour:minute:second:timeZone:",0x814,0xc,0x1f,
                      0x17,0x3b,0x3b,uVar4);
      cVar1 = _DLShouldLog(5);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,"-[CalendarsDataClassHandler _dateOutsideRange:]",5,
                &cf_Createdearliestandlatestdates______,DAT_100028e48,DAT_100028e50);
      }
    }
    cVar1 = _DLShouldLog(5);
    if (cVar1 != '\0') {
      (*(code *)PTR__objc_msgSend_100020210)(param_3,"timeIntervalSinceDate:",DAT_100028e48);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler _dateOutsideRange:]",5,
              &cf_timeintervalfor__sinceearliestdateis_g,param_3);
    }
    cVar1 = _DLShouldLog(5);
    if (cVar1 != '\0') {
      (*(code *)PTR__objc_msgSend_100020210)(param_3,"timeIntervalSinceDate:",DAT_100028e50);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler _dateOutsideRange:]",5,
              &cf_timeintervalfor__sincelatestdateis_g,param_3);
    }
    dVar5 = (double)(*(code *)PTR__objc_msgSend_100020210)
                              (param_3,"timeIntervalSinceDate:",DAT_100028e48);
    bVar2 = true;
    if (0.0 <= dVar5) {
      dVar5 = (double)(*(code *)PTR__objc_msgSend_100020210)
                                (param_3,"timeIntervalSinceDate:",DAT_100028e50);
      bVar2 = 0.0 < dVar5;
    }
  }
  return bVar2;
}

