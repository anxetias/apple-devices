// rea decompile_all
// name: FUN_100004464
// address: 0x100004464
// body: available
// range: 0x100004464-0x100004534 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000452f to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100025b01 NSDictionary::initWithObjectsAndKeys: (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_100004464(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_100007da1();
  puVar1 = PTR__objc_msgSend_100012170;
  if (lVar2 == 0) {
    uVar5 = 0x1e;
  }
  else {
    IVar4 = *(ID *)PTR__ISyncDataClass_Calendars_100012070;
    IVar3 = (*(code *)PTR__objc_msgSend_100012170)(lVar2,"filters");
    IVar4 = DataClassFilter::filterForDataClassName_fromFilters_
                      ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                       IVar4,IVar3);
    uVar5 = 0;
    if (IVar4 != 0) {
      IVar4 = DataClassFilter::criteria(IVar4,"criteria");
      IVar4 = (*(code *)puVar1)(IVar4,"objectForKey:",&cf_CalendarFilterDayLimitKey);
      if (IVar4 != 0) goto LAB_100004506;
    }
  }
  IVar4 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",uVar5);
LAB_100004506:
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  IVar4 = NSDictionary::initWithObjectsAndKeys_
                    (IVar3,"initWithObjectsAndKeys:",IVar4,&cf_AMSCalendarDayLimitKey,0);
  return IVar4;
}

