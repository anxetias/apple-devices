// rea decompile_all
// name: FUN_100006bb8
// address: 0x100006bb8
// body: available
// range: 0x100006bb8-0x100006df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100006df2 to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100025b01 NSDictionary::initWithObjectsAndKeys: (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100006bb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double extraout_XMM0_Qa;
  
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_copyApplicationsInBackup",6,&cf_Gatheringapplicationinfofordevice__at__,param_2,
            param_1);
  }
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  puVar1 = PTR__objc_msgSend_100012170;
  IVar3 = NSMutableDictionary::init(IVar3,"init");
  uVar4 = _objc_autorelease(IVar3);
  uVar5 = (*(code *)puVar1)(param_1,"stringByAppendingPathComponent:",param_2);
  uVar5 = (*(code *)puVar1)(uVar5,"stringByAppendingPathComponent:",&cf_Manifest_plist);
  IVar3 = NSDictionary::dictionaryWithContentsOfFile_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithContentsOfFile:",uVar5);
  if (IVar3 == 0) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_copyApplicationsInBackup",3,&cf_Nomanifestfoundfor__at__,param_2,uVar5);
    }
  }
  else {
    self = NSDictionary::objectForKey_(IVar3,"objectForKey:",&cf_Version);
    NSDictionary::doubleValue(self,"doubleValue");
    if (7.0 <= extraout_XMM0_Qa) {
      IVar3 = NSDictionary::objectForKey_(IVar3,"objectForKey:",&cf_Applications);
      (*(code *)puVar1)(uVar4,"addEntriesFromDictionary:",IVar3);
    }
    else {
      uVar5 = FUN_10000a57e(IVar3,1);
      lVar6 = (*(code *)PTR__objc_msgSend_100012170)(uVar5,"objectForKey:",&cf_Applications);
      if (lVar6 != 0) {
        uVar7 = (*(code *)puVar1)(lVar6,"keyEnumerator");
        lVar8 = (*(code *)puVar1)(uVar7,"nextObject");
        while (lVar8 != 0) {
          uVar9 = (*(code *)puVar1)(lVar6,"objectForKey:",lVar8);
          lVar10 = (*(code *)puVar1)(uVar9,"objectForKey:",&cf_AppInfo);
          if (lVar10 != 0) {
            (*(code *)puVar1)(uVar4,"setObject:forKey:",lVar10,lVar8);
          }
          lVar8 = (*(code *)puVar1)(uVar7,"nextObject");
        }
      }
      (*(code *)PTR__objc_release_100012178)(uVar5);
    }
  }
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  NSDictionary::initWithObjectsAndKeys_
            (IVar3,"initWithObjectsAndKeys:",uVar4,&cf_AMSBackupApplicationsKey,0);
  return;
}

