// rea decompile_all
// name: _AMDFUModeDeviceRequestAbbreviatedSendSync
// address: 0xed9cb
// body: available
// range: 0xed9cb-0xeda9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMDFUModeDeviceRequestAbbreviatedSendSync(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
    _AMRLog(3,&cf__s_deviceargumentpassedisNULL,"AMDFUModeDeviceRequestAbbreviatedSendSync");
    uVar5 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    uVar4 = _AMDFUModeDeviceGetECID();
    iVar2 = __loadFirmwareInfoDFU(param_1);
    uVar7 = 0;
    uVar6 = 0;
    if (iVar2 == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x28);
    }
    uVar3 = _AMDFUModeDeviceGetBoardID(param_1);
    iVar2 = __loadFirmwareInfoDFU(param_1);
    if (iVar2 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x7c);
    }
    iVar2 = __loadFirmwareInfoDFU(param_1);
    if (iVar2 == 0) {
      uVar1 = *(undefined1 *)(param_1 + 0x80);
    }
    else {
      uVar1 = 0;
    }
    uVar5 = _AMRAuthInstallRequestAbbreviatedSendSync
                      (uVar5,uVar4,uVar6,uVar3,uVar7,uVar1,param_2,param_3);
  }
  return uVar5;
}

