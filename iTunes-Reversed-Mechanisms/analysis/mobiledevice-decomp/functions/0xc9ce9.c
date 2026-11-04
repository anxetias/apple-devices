// rea decompile_all
// name: _RCGetSystemPartitionExtrasSizeForDevice
// address: 0xc9ce9
// body: available
// range: 0xc9ce9-0xc9dbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _RCGetSystemPartitionExtrasSizeForDevice
               (undefined8 param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_3 == (ulong *)0x0) goto LAB_000c9dad;
  if (param_2 == 0) {
LAB_000c9d5f:
    uVar3 = 0x79;
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = _CFStringCreateWithFormat
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         &
                         cf__dMBforAPFSpadding__dMBforRestoreLog__dMBforBasebandFW__dMBforCalibrationData__dMBforSEPFW_5MBofwiggleroom_
                         ,0x19,1,0x50,5,5);
      *param_4 = uVar2;
    }
  }
  else {
    lVar1 = _CFDictionaryGetValue(param_2,&cf_SystemFirmwareExtrasSize);
    if (lVar1 == 0) goto LAB_000c9d5f;
    _CFNumberGetValue(lVar1,4,param_3);
    uVar3 = *param_3;
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = _CFStringCreateWithFormat
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         &
                         cf__dMBasdefinedbythevalueoftheSystemFirmwareExtrasSizeintheoptionsdictionary_
                         ,uVar3 >> 0x14);
      *param_4 = uVar2;
      uVar3 = *param_3;
    }
  }
  *param_3 = uVar3 << 0x14;
LAB_000c9dad:
  return param_3 != (ulong *)0x0;
}

