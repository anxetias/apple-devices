// rea decompile_all
// name: __AMRecoveryModeDeviceCreate
// address: 0xedb72
// body: available
// range: 0xedb72-0xedc1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRecoveryModeDeviceCreate(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  long lVar2;
  
  _pthread_once((pthread_once_t *)&__AMRecoveryModeDeviceClassInitializeOnce,
                __AMRecoveryModeDeviceClassInitialize);
  lVar2 = __CFRuntimeCreateInstance(param_1,__AMRecoveryModeDeviceTypeID,0xd0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x4d) = 0;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined4 *)(lVar2 + 0x39) = 0xffffffff;
    *(undefined1 *)(lVar2 + 0x3d) = 0xff;
    sVar1 = __AMRUSBDeviceGetProductID(param_2);
    *(bool *)(lVar2 + 0x38) = sVar1 == 0x1281;
    *(undefined1 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined4 *)(lVar2 + 0xd8) = 0;
  }
  return lVar2;
}

