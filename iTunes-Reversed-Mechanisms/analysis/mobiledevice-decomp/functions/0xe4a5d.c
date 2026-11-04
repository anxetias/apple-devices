// rea decompile_all
// name: __AMRUSBDeviceGetIBFL
// address: 0xe4a5d
// body: available
// range: 0xe4a5d-0xe4ad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRUSBDeviceGetIBFL(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_18 = 0;
  iVar1 = __AMRUSBDeviceGetFirmwareInfo(param_1,&local_78,0);
  if (iVar1 != 0) {
    _AMRLog(3,&cf_unabletogetfirmwareinfofromdevice__d,iVar1);
  }
  if (uStack_20._7_1_ != '\0') {
    *param_2 = (undefined4)local_68;
  }
  bVar2 = uStack_20._7_1_ != '\0';
  __AMRestoreDestroyDeviceInfo(&local_78);
  return CONCAT71((int7)((ulong)param_2 >> 8),bVar2) & 0xffffffff;
}

