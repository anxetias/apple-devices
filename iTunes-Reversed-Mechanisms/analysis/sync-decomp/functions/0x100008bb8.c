// rea decompile_all
// name: CalendarsDataClassHandler::_clipDate:propertyName:record:offset:
// address: 0x100008bb8
// body: available
// range: 0x100008bb8-0x100008de2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100008daf to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x2c bytes */

void CalendarsDataClassHandler::_clipDate_propertyName_record_offset_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,int param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  double extraout_XMM0_Qa;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"timeZone");
  puVar1 = PTR__objc_msgSend_100020210;
  lVar2 = 0;
  switch(param_6) {
  case 1:
    lVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"hourOfDay");
    lVar2 = 0xa8c0;
    if (lVar3 != 0xc) {
      lVar2 = 0;
    }
    break;
  case 2:
    IVar7 = NSTimeZone::defaultTimeZone((ID)&_OBJC_CLASS___NSTimeZone,"defaultTimeZone");
    IVar7 = NSTimeZone::secondsFromGMTForDate_(IVar7,"secondsFromGMTForDate:",param_3);
    lVar3 = (*(code *)puVar1)(param_3,"hourOfDay");
    lVar8 = SUB168(SEXT816((long)IVar7) * SEXT816(-0x48d159e26af37c05),8);
    lVar2 = 0xa8c0;
    if (((lVar8 >> 10) - (lVar8 >> 0x3f)) + lVar3 != 0xc) {
      lVar2 = 0;
    }
    lVar2 = lVar2 - IVar7;
    break;
  case 5:
    lVar2 = (*(code *)PTR__objc_msgSend_100020210)(local_38,"secondsFromGMTForDate:",param_3);
    lVar2 = -lVar2;
    break;
  case 6:
    local_58 = 0x17;
    local_48 = 0x3b;
    local_50 = 0.0;
    local_38 = FUN_10000bca0();
    local_40 = 0x3b;
    goto LAB_100008d00;
  }
  puVar1 = PTR__objc_msgSend_100020210;
  local_58 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"hourOfDay");
  local_48 = (*(code *)puVar1)(param_3,"minuteOfHour");
  local_40 = (*(code *)puVar1)(param_3,"secondOfMinute");
  local_50 = (double)lVar2;
LAB_100008d00:
  puVar1 = PTR__objc_msgSend_100020210;
  uVar4 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"yearOfCommonEra");
  uVar5 = (*(code *)puVar1)(param_3,"monthOfYear");
  uVar6 = (*(code *)puVar1)(param_3,"dayOfMonth");
  IVar7 = NSCalendarDate::dateWithYear_month_day_hour_minute_second_timeZone_
                    ((ID)&_OBJC_CLASS___NSCalendarDate,
                     "dateWithYear:month:day:hour:minute:second:timeZone:",uVar4,uVar5,uVar6,
                     local_58,local_48,local_40,local_38);
  NSCalendarDate::timeIntervalSinceReferenceDate(IVar7,"timeIntervalSinceReferenceDate");
  uVar4 = (*(code *)puVar1)(extraout_XMM0_Qa - local_50,&_OBJC_CLASS___NSDate,
                            "dateWithTimeIntervalSinceReferenceDate:");
  (*(code *)puVar1)(param_5,"setObject:forKey:",uVar4,param_4);
  return;
}

