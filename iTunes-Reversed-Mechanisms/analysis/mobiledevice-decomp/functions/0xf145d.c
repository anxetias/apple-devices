// rea decompile_all
// name: __sendRestoreSEPToDevice
// address: 0xf145d
// body: available
// range: 0xf145d-0xf14ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __sendRestoreSEPToDevice(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  
  __AMRecoveryModeDeviceProgress(param_1,6);
  iVar1 = __sendFileToDevice(param_1,param_2);
  if (iVar1 == 0) {
    __loadFirmwareInfo(param_1);
    iVar2 = __sendCommandToDeviceWithTimeout
                      (*(undefined8 *)
                        (&DAT_0032ca70 +
                        (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,
                       &cf_rsepfirmware,0);
    if (iVar2 == 0) {
      return 0;
    }
    pcVar3 = &cf_rsepfirmwarecommandfailedwith_d;
    uVar4 = 6;
  }
  else {
    pcVar3 = &cf__sendRestoreSEPToDevicefailedwith_d;
    uVar4 = 3;
    iVar2 = iVar1;
  }
  _AMRLog(uVar4,pcVar3,iVar2);
  return iVar1;
}

