// rea decompile_all
// name: FUN_10000773b
// address: 0x10000773b
// body: available
// range: 0x10000773b-0x1000079c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000077c2 to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000773b(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  undefined8 extraout_XMM0_Qa;
  long local_28;
  
  cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"isEqualToString:",&cf_localhost);
  if (cVar2 != '\0') {
    return 0x4059000000000000;
  }
  if ((DAT_100016690 != 0) &&
     (lVar4 = (*(code *)PTR__objc_msgSend_100012170)(DAT_100016690,"objectForKey:",param_1),
     puVar1 = PTR__objc_msgSend_100012170, lVar4 != 0)) {
    uVar5 = (*(code *)PTR__objc_msgSend_100012170)(DAT_100016690,"objectForKey:",param_1);
    uVar5 = (*(code *)puVar1)(uVar5,"doubleValue");
    return uVar5;
  }
  if ((DAT_100016698 == 0) && (FUN_100007ae6(0), DAT_100016698 == 0)) {
    cVar2 = _DLShouldLog(3);
    uVar5 = 0;
    if (cVar2 == '\0') {
      return 0;
    }
    pcVar8 = &cf_Couldnotsetupadevicelistener_;
  }
  else {
    lVar4 = _DLDeviceWaitForAttachedDevice(0,DAT_100016698,param_1);
    if (lVar4 == 0) {
      cVar2 = _DLShouldLog(3);
      if (cVar2 == '\0') {
        return 0;
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getProductVersionForTarget",3,
              &
              cf_Couldnotfindadevicewiththetargetidentifier___Registeringtheoldclientdescriptionjusttobesafe_
              ,param_1);
      return 0;
    }
    local_28 = 0;
    uVar3 = _DLDeviceCopyAMDValue(lVar4,0,&cf_ProductVersion,&local_28,1);
    if (uVar3 != 0) {
      cVar2 = _DLShouldLog(3);
      if (cVar2 == '\0') {
        return 0;
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getProductVersionForTarget",3,&cf_Therewasanerrorcopyingthevaluefromlockdown__d__p_
              ,uVar3 & 0x17ffffff,uVar3);
      return 0;
    }
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getProductVersionForTarget",6,&cf_Targetversionstringis__,local_28);
    }
    if (local_28 != 0) {
      uVar5 = _CFStringGetDoubleValue();
      if (DAT_100016690 == 0) {
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
        DAT_100016690 = NSMutableDictionary::init(IVar6,"init");
      }
      IVar6 = DAT_100016690;
      puVar1 = PTR__objc_msgSend_100012170;
      uVar7 = (*(code *)PTR__objc_msgSend_100012170)
                        (uVar5,&_OBJC_CLASS___NSNumber,"numberWithDouble:");
      (*(code *)puVar1)(IVar6,"setObject:forKey:",uVar7,param_1);
      if (local_28 != 0) {
        _CFRelease();
        return uVar5;
      }
      return uVar5;
    }
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return 0;
    }
    pcVar8 = &cf_WegotaNULLversionbackfromlockdown_Jerks_;
    uVar5 = extraout_XMM0_Qa;
  }
  __DLLog(uVar5,
          "/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
          ,"_getProductVersionForTarget",3,pcVar8);
  return 0;
}

