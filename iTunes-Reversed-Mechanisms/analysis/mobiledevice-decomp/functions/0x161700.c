// rea decompile_all
// name: ___thr_AMRestorableDeviceCopyAMDevice
// address: 0x161700
// body: available
// range: 0x161700-0x1617b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceCopyAMDevice(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    pcVar4 = &cf_Can_tgetAMDeviceRefwithNULLrestorable;
  }
  else if (*(long *)(lVar3 + 0x20) == 0) {
    pcVar4 = &cf_Can_tgetAMDeviceRefwithNULLproxy;
  }
  else {
    iVar1 = __AMDeviceProxyGetState();
    if (iVar1 == 4) {
      uVar2 = __AMDeviceProxyGetDeviceRef(*(undefined8 *)(lVar3 + 0x20));
      lVar3 = _CFGetTypeID(uVar2);
      if (__AMDeviceTypeID == 0) {
        __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
      }
      if (lVar3 == __AMDeviceTypeID) {
        lVar3 = _AMDeviceCreateCopy(uVar2);
        pcVar4 = (cfstringStruct *)0x0;
        goto LAB_0016178d;
      }
      pcVar4 = &cf_UnexpectedbackingdeviceforbootedOSproxy;
    }
    else {
      pcVar4 = &cf_Can_tgetAMDeviceRefsincedeviceisnotinstatekAMRestorableDeviceStateBootedOS;
    }
  }
  lVar3 = 0;
LAB_0016178d:
  _AMRSafeLogAndRelease(3,pcVar4);
  param_1[1] = lVar3;
  return;
}

