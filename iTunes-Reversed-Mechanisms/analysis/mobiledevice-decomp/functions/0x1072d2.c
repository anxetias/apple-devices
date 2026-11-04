// rea decompile_all
// name: AMDFUDeviceProxy::CopyBoardConfig
// address: 0x1072d2
// body: available
// range: 0x1072d2-0x107343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1072ea to 0xeb846 _AMDFUModeDeviceCopyBoardConfig (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMDFUDeviceProxy::CopyBoardConfig(__CFDictionary const*) */

undefined8 __thiscall
AMDFUDeviceProxy::CopyBoardConfig(AMDFUDeviceProxy *this,__CFDictionary *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_1 != (__CFDictionary *)0x0) {
    uVar1 = _AMDFUModeDeviceCopyBoardConfig(*(undefined8 *)(this + 0x20));
    return uVar1;
  }
  if (this == (AMDFUDeviceProxy *)0x0) {
    pcVar2 = "NULL proxy";
    this = (AMDFUDeviceProxy *)0x0;
  }
  else {
    pcVar2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
  }
  AMDeviceProxy::Log((int)this,(__CFString *)((long)&MACH_HEADER.magic + 3),
                     &cf__scan_tget_swithNULLdevicemap,pcVar2,"board config");
  return 0;
}

