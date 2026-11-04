// rea decompile_all
// name: _DLEndpointCreateDescription
// address: 0xd269
// body: available
// range: 0xd269-0xd2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd2cb to 0xed83 _CFStringCreateWithFormat (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLEndpointCreateDescription(int *param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    if (*param_1 == 2) {
      uVar1 = _CFDictionaryGetValue(uVar1,&cf_DLNetworkIPKey);
      pcVar2 = &cf_Endpoint_TCP_Address___;
    }
    else if (*param_1 == 1) {
      uVar1 = _CFDictionaryGetValue(uVar1,&cf_DLUSBMuxDeviceIdKey);
      pcVar2 = &cf_Endpoint_USBMux_DeviceID___;
    }
    else {
      pcVar2 = &cf_Endpoint_Unknown___;
    }
    uVar1 = _CFStringCreateWithFormat(0,0,pcVar2,uVar1);
    return uVar1;
  }
  return 0;
}

