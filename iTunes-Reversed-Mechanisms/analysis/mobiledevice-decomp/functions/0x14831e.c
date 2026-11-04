// rea decompile_all
// name: MDRemoteServiceDeviceProviderRemotePairing::copyMDRemoteServiceDevice
// address: 0x14831e
// body: available
// range: 0x14831e-0x14839f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

__MDRemoteServiceDevice *
MDRemoteServiceDeviceProviderRemotePairing::copyMDRemoteServiceDevice(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  __MDRemoteServiceDevice *p_Var4;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"remoteServiceDeviceMutex");
  (*(code *)puVar1)(uVar2,"lock");
  lVar3 = (*(code *)puVar1)(param_1,"remoteServiceDevice");
  if (lVar3 == 0) {
    p_Var4 = (__MDRemoteServiceDevice *)0x0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"remoteServiceDevice");
    p_Var4 = (__MDRemoteServiceDevice *)_CFRetain(uVar2);
  }
  uVar2 = (*(code *)puVar1)(param_1,"remoteServiceDeviceMutex");
  (*(code *)puVar1)(uVar2,"unlock");
  return p_Var4;
}

