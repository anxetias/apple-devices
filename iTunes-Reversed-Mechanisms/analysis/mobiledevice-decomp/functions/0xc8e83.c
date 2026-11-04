// rea decompile_all
// name: __AMRTADDeviceGetFirmwareInfo
// address: 0xc8e83
// body: available
// range: 0xc8e83-0xc8feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRTADDeviceGetFirmwareInfo(long param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  iVar1 = _libDFU_devicePID(*(undefined8 *)(param_1 + 0x90));
  if (iVar1 != 0) {
    _AMRLog(3,&cf_unabletogetTADdeviceproductID__d,iVar1);
    return -1;
  }
  lVar2 = __AMRTADDeviceCopySerialNumber(param_1);
  if (lVar2 == 0) {
    _AMRLog(3,&cf_unabletogetdeviceserialnumber);
    return -1;
  }
  iVar1 = _parseSerialNumberInfo(lVar2,param_2,0,param_3);
  if (iVar1 != 0) goto LAB_000c8fd2;
  lVar3 = __AMRTADDeviceCopyEpochString(param_1);
  if (lVar3 == 0) {
    _AMRLog(3,&cf_devicedoesnothaveepochs_);
LAB_000c8f95:
    lVar4 = __AMRTADDeviceCopySerialNumber(param_1);
    param_2[4] = lVar4;
    iVar1 = 0;
    if (lVar4 == 0) {
      _AMRLog(3,&cf_unabletogetdeviceproudctstring);
      iVar1 = -1;
    }
    if (lVar3 == 0) goto LAB_000c8fd2;
  }
  else {
    _AMRLog(3,&cf_devicehasepochs_);
    iVar1 = _parseSerialNumberInfo(lVar3,param_2,0,param_3);
    if (iVar1 == 0) goto LAB_000c8f95;
  }
  _CFRelease(lVar3);
LAB_000c8fd2:
  _CFRelease(lVar2);
  return iVar1;
}

