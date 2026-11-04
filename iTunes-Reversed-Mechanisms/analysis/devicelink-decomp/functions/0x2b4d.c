// rea decompile_all
// name: _DLCreateDeviceLinkConnectionForDevice
// address: 0x2b4d
// body: available
// range: 0x2b4d-0x2be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2bcf to 0xa706 _DLSetStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DLCreateDeviceLinkConnectionForDevice
          (undefined1 param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    pcVar2 = &cf_DLCreateDeviceLinkConnectionForDevice_CallbacksparameterisNULL;
  }
  else {
    if (param_4 != (long *)0x0) {
      lVar1 = __DLCreateDeviceLinkConnection(&cf_Device,param_1,param_2,param_3,0);
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x30) = param_2;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0xffffffff;
        *param_4 = lVar1;
        return 0;
      }
      pcVar2 = &cf_DLCreateDeviceLinkConnectionForDevice_Couldnotcreateaconnection;
      uVar3 = 0xffffffff;
      goto LAB_00002bc2;
    }
    pcVar2 = &cf_DLCreateDeviceLinkConnectionForDevice_Connection_out_parameterisNULL;
  }
  uVar3 = 0xfffffffd;
LAB_00002bc2:
  uVar3 = _DLSetStatus(uVar3,param_5,pcVar2);
  return uVar3;
}

