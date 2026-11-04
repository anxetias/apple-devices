// rea decompile_all
// name: ___initializeSupportInterface_block_invoke
// address: 0x13cc37
// body: available
// range: 0x13cc37-0x13ce5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13ce5b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___initializeSupportInterface_block_invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = _objc_alloc(&objc::class_t::NSXPCMatchingProjectVersionConnection);
  puVar1 = PTR__objc_msgSend_00441098;
  _gConnection = (*(code *)PTR__objc_msgSend_00441098)
                           (uVar2,"initWithServiceName:",&cf_com_apple_MDRemoteServiceSupport);
  uVar2 = (*(code *)puVar1)(&_OBJC_CLASS___NSXPCInterface,"interfaceWithProtocol:",
                            &objc::protocol_t::MDRemoteServiceSupportProtocol);
  (*(code *)puVar1)(_gConnection,"setRemoteObjectInterface:",uVar2);
  uVar2 = (*(code *)puVar1)(_gConnection,"remoteObjectInterface");
  uVar3 = _objc_alloc(&_OBJC_CLASS___NSSet);
  local_58 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
  local_50 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
  local_48 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
  local_40 = (*(code *)puVar1)(&_OBJC_CLASS___NSArray,"class");
  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_58,4);
  uVar3 = (*(code *)puVar1)(uVar3,"initWithArray:",uVar4);
  (*(code *)puVar1)(uVar2,"setClasses:forSelector:argumentIndex:ofReply:",uVar3,
                    "retrieveProperty:forUUID:type:withReply:",0,1);
  (*(code *)puVar1)(uVar2,"setClasses:forSelector:argumentIndex:ofReply:",uVar3,
                    "retrievePropertiesForUUID:type:withReply:",0,1);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(_gConnection,"resume");
  __MDRemoteServiceDeviceTypeID =
       __CFRuntimeRegisterClass(&_registerCustomClasses_remoteServiceDevice);
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  _gUUIDStringToECID = (*(code *)puVar1)(uVar2,"init");
  _gUUIDStringToECIDQueue =
       _dispatch_queue_create
                 ("com.apple.MDRemoteServiceSupport.mapper",
                  (dispatch_queue_attr_t)PTR___dispatch_queue_attr_concurrent_004412d8);
  _gRSDBrowserQueue =
       _dispatch_queue_create
                 ("com.apple.MDRemoteServiceSupport.rsdBrowser",(dispatch_queue_attr_t)0x0);
  _gRSDEventQueue =
       _dispatch_queue_create
                 ("com.apple.MDRemoteServiceSupport.rsdEvent",(dispatch_queue_attr_t)0x0);
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
  _gRemoteDevices = (*(code *)puVar1)(uVar2,"init");
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

