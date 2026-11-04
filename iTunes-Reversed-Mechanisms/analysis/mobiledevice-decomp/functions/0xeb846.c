// rea decompile_all
// name: _AMDFUModeDeviceCopyBoardConfig
// address: 0xeb846
// body: available
// range: 0xeb846-0xeb8e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xeb899 to 0x2a98dc _CFStringCreateWithFormat (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xeb8e4 to 0xe48bb _AMRestoreCopyNormalizedBoardConfig (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDFUModeDeviceCopyBoardConfig(long param_1,long param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    sVar1 = __AMRUSBDeviceGetProductID(*(undefined8 *)(param_1 + 0x90));
    if (sVar1 == 0x1222) {
      sVar1 = __AMRUSBDeviceGetDeviceReleaseNumber(*(undefined8 *)(param_1 + 0x90));
      if (sVar1 == 1) {
        uVar3 = _CFStringCreateWithFormat
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf_S5L8900X);
        return uVar3;
      }
    }
    iVar2 = __loadFirmwareInfoDFU(param_1);
    if (iVar2 == 0) {
      lVar4 = __AMRestoreGetResolvedBoardConfig
                        (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x7c),param_2);
      if (lVar4 != 0) {
        uVar3 = _AMRestoreCopyNormalizedBoardConfig(lVar4);
        return uVar3;
      }
    }
    else {
      _AMRLog(3,&cf_unabletogetfirmwareinfofromdevice);
    }
  }
  return 0;
}

