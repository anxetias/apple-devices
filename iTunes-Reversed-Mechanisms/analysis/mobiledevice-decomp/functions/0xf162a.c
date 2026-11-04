// rea decompile_all
// name: _AMRecoveryModeDeviceRequestAbbreviatedSendSync
// address: 0xf162a
// body: available
// range: 0xf162a-0xf16e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMRecoveryModeDeviceRequestAbbreviatedSendSync(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    _AMRLog(3,&cf__s_deviceargumentpassedisNULL,"AMRecoveryModeDeviceRequestAbbreviatedSendSync");
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 200);
    iVar2 = __loadFirmwareInfo();
    if (iVar2 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
    }
    else {
      uVar7 = 0;
    }
    uVar3 = _AMRecoveryModeDeviceGetChipID(param_1);
    uVar4 = _AMRecoveryModeDeviceGetBoardID(param_1);
    uVar5 = _AMRecoveryModeDeviceGetSecurityDomain(param_1);
    uVar1 = _AMRecoveryModeDeviceGetProductionMode(param_1);
    uVar6 = _AMRAuthInstallRequestAbbreviatedSendSync
                      (uVar6,uVar7,uVar3,uVar4,uVar5,uVar1,param_2,param_3);
  }
  return uVar6;
}

