// rea decompile_all
// name: __IXCreateNSErrorFromSerializedXPCData
// address: 0x42174
// body: available
// range: 0x42174-0x42351 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4234d to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __IXCreateNSErrorFromSerializedXPCData(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar5 = (*(code *)PTR__objc_retain_004410a8)();
  iVar4 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar4 == 0) {
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar9 = 0;
    __os_log_internal(0,uVar6,0x10,"%s: Not supported on hosts running < 10.15",
                      "_IXCreateNSErrorFromSerializedXPCData");
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    lVar8 = 0;
  }
  else {
    local_38 = uVar5;
    uVar5 = __CFXPCCreateCFObjectFromXPCObject(uVar5);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSData,"class");
    uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    cVar3 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
    if (cVar3 == '\0') {
      lVar7 = 0;
    }
    else {
      lVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    }
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar2)(uVar5);
    if (lVar7 == 0) {
      uVar9 = 0;
      lVar8 = 0;
      uVar5 = local_38;
    }
    else {
      uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSError,"class");
      local_40 = 0;
      uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSKeyedUnarchiver,
                                "unarchivedObjectOfClass:fromData:error:",uVar5,lVar7,&local_40);
      lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar9 = (*(code *)PTR__objc_retain_004410a8)(local_40);
      uVar5 = local_38;
      if (lVar8 == 0) {
        uVar5 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
        lVar8 = 0;
        __os_log_internal(0,uVar6,0x10,"%s: Failed to unarchive NSError : %@",
                          "_IXCreateNSErrorFromSerializedXPCData",uVar9);
        uVar5 = local_38;
        (*(code *)PTR__objc_release_004410a0)(uVar6);
      }
    }
    (*(code *)PTR__objc_release_004410a0)(lVar7);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar9);
  (*(code *)puVar1)(uVar5);
  _objc_autoreleaseReturnValue(lVar8);
  return;
}

