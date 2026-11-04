// rea decompile_all
// name: ___setMDPrivilegedUSBSupportObjectProxy_block_invoke
// address: 0xfb437
// body: available
// range: 0xfb437-0xfb54e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfb54d to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ___setMDPrivilegedUSBSupportObjectProxy_block_invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSXPCConnection);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar2,"initWithServiceName:",&cf_com_apple_mobiledevice_MDPrivilegedUSBSupport)
  ;
  uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSXPCInterface,"interfaceWithProtocol:",
                            &objc::protocol_t::AMRestoreMDPrivilegedUSBSupportProtocol);
  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSXPCInterface,"interfaceWithProtocol:",
                            &objc::protocol_t::AMRUSBDevice);
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSXPCInterface,"interfaceWithProtocol:",
                            &objc::protocol_t::AMRUSBInterface);
  (*(code *)puVar1)(uVar4,"setInterface:forSelector:argumentIndex:ofReply:",uVar5,
                    "interfaceWithClass:subclass:withReply:",0,1);
  (*(code *)puVar1)(uVar3,"setInterface:forSelector:argumentIndex:ofReply:",uVar4,
                    "deviceForIORegistryEntryID:withReply:",0,1);
  (*(code *)puVar1)(uVar2,"setRemoteObjectInterface:",uVar3);
  __gMDPrivilegedUSBSupportConnection = uVar2;
  _gMDPrivilegedUSBSupportProxy =
       (*(code *)puVar1)(uVar2,"synchronousRemoteObjectProxyWithErrorHandler:",
                         _MDPrivilegedUSBSupportErrorHandler);
  (*(code *)PTR__objc_retain_004410a8)(_gMDPrivilegedUSBSupportProxy);
  (*(code *)puVar1)(uVar2,"resume");
  return;
}

