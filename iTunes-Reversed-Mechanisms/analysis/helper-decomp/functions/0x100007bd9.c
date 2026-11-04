// rea decompile_all
// name: FUN_100007bd9
// address: 0x100007bd9
// body: available
// range: 0x100007bd9-0x100007da0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100007d4f to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100007d8c to 0x100027700 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100007bd9(undefined8 param_1,ID param_2,ID param_3,ID param_4)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  char *op;
  undefined *self;
  
  lVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"count");
  cVar1 = _DLShouldLog(5);
  if (lVar2 != 0) {
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_updateFilter",5,&cf_Updatingfilterfordataclass__,param_2);
    }
    puVar4 = PTR__objc_msgSend_100012170;
    puVar3 = (undefined *)
             DataClassFilter::createFilterWithDataClassName_entityNames_criteria_
                       ((ID)&objc::class_t::DataClassFilter,
                        "createFilterWithDataClassName:entityNames:criteria:",param_2,param_3,
                        param_4);
    puVar4 = (undefined *)(*(code *)puVar4)(param_1,"filters");
    if (puVar4 == (undefined *)0x0) {
      self = &_OBJC_CLASS___NSArray;
      op = "arrayWithObject:";
      puVar4 = puVar3;
    }
    else {
      op = "arrayWithFilterFromExistingFiltersArray:";
      self = puVar3;
    }
    IVar7 = NSArray::arrayWithObject_((ID)self,op,puVar4);
    (*(code *)PTR__objc_msgSend_100012170)(param_1,"setFilters:",IVar7);
    (*(code *)PTR__objc_release_100012178)(puVar3);
    return;
  }
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_updateFilter",5,&cf_Removingfilterfordataclass__,param_2);
  }
  puVar4 = PTR__objc_msgSend_100012170;
  IVar7 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"filters");
  IVar5 = DataClassFilter::filterForDataClassName_fromFilters_
                    ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                     param_2,IVar7);
  if (IVar5 != 0) {
    uVar6 = (*(code *)puVar4)(IVar7,"mutableCopy");
    uVar6 = _objc_autorelease(uVar6);
    (*(code *)puVar4)(uVar6,"removeObject:",IVar5);
    lVar2 = (*(code *)puVar4)(uVar6,"count");
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    (*(code *)puVar4)(param_1,"setFilters:",uVar6);
    return;
  }
  return;
}

