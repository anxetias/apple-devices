// rea decompile_all
// name: _AMTADModeDeviceCopyDeviceName
// address: 0xc8bec
// body: available
// range: 0xc8bec-0xc8cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc8cac to 0x2a989a _CFStringCreateCopy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xc8cbf to 0xc8b92 _AMTADModeDeviceCopyBoardConfig (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMTADModeDeviceCopyDeviceName(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = __AMRLoadFirmwareInfoTAD();
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    if ((((lVar3 == 0) ||
         (lVar2 = _CFStringCompare(lVar3,&cf_AppleMobileDevice_DFUMode_,0), lVar2 == 0)) ||
        (lVar2 = _CFStringCompare(lVar3,&cf_AppleMobileDevice_RecoveryMode_,0), lVar2 == 0)) ||
       (lVar3 = __AMRestoreGetResolvedBoardConfigWithPreferredName
                          (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x7c),param_2,lVar3), lVar3 == 0)) {
      if (param_3 == 0) {
        uVar4 = _AMTADModeDeviceCopyBoardConfig(param_1,param_2);
        return uVar4;
      }
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    }
    else {
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      param_3 = lVar3;
    }
    uVar4 = _CFStringCreateCopy(uVar4,param_3);
    return uVar4;
  }
  _AMRLog(3,&cf_unabletogetfirmwareinfofromdevice);
  return 0;
}

