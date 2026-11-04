// rea decompile_all
// name: ____AMRUSBDeviceGetInterface_block_invoke
// address: 0xe8d47
// body: available
// range: 0xe8d47-0xe8e0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe8db7 to 0x60ac00 /usr/lib/libobjc.A.dylib::_objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe8e09 to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMRUSBDeviceGetInterface_block_invoke(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_00441098;
  if (param_2 != 0) {
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x20),"conformsToProtocol:",
                       &objc::protocol_t::NSXPCProxyCreating);
    if (cVar2 != '\0') {
      param_2 = (*(code *)PTR__objc_msgSend_00441098)
                          (param_2,"synchronousRemoteObjectProxyWithErrorHandler:",
                           _AMRUSBInterfaceErrorHandler);
    }
    *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = param_2;
    (*(code *)PTR__objc_retain_004410a8)
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    return;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"code");
  uVar4 = (*(code *)puVar1)(param_3,"userInfo");
  _AMRLog(3,&cf__s_AMRUSBDeviceerror__ld____,"_AMRUSBDeviceGetInterface_block_invoke",uVar3,uVar4);
  return;
}

