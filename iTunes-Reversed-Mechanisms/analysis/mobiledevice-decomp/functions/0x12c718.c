// rea decompile_all
// name: _AMDeviceCreate
// address: 0x12c718
// body: available
// range: 0x12c718-0x12c8d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceCreate(undefined4 param_1,undefined2 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined2 local_32;
  
  local_50 = param_4 & 0xffffffff;
  if (param_3 == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_44 = param_1;
  local_32 = param_2;
  lVar1 = _CFDictionaryCreateMutable
                    (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = _CFNumberCreate(uVar6,3,&local_44);
  if (lVar2 == 0) {
    uVar6 = 0;
    goto LAB_0012c895;
  }
  lVar3 = _CFNumberCreate(uVar6,2,&local_32);
  if ((lVar3 == 0) || (lVar4 = _CFStringCreateWithCString(uVar6,param_3,0x8000100), lVar4 == 0)) {
    lVar4 = 0;
LAB_0012c8d1:
    local_40 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = _CFNumberCreate(uVar6,4,&local_50);
    if (lVar5 == 0) goto LAB_0012c8d1;
    _CFDictionaryAddValue(lVar1,_kUSBMuxProperty_DeviceID,lVar2);
    _CFDictionaryAddValue(lVar1,_kUSBMuxProperty_ProductID,lVar3);
    _CFDictionaryAddValue(lVar1,_kUSBMuxProperty_SerialNumber,lVar4);
    _CFDictionaryAddValue(lVar1,_kUSBMuxProperty_LocationID,lVar5);
    _CFDictionaryAddValue(lVar1,_kUSBMuxProperty_LinkType,_kUSBMuxPropertyLinkType_USB);
    local_40 = _AMDeviceCreateFromProperties(lVar1);
  }
  _CFRelease(lVar1);
  _CFRelease(lVar2);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  uVar6 = local_40;
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  lVar1 = lVar4;
  if (lVar4 == 0) {
    return uVar6;
  }
LAB_0012c895:
  _CFRelease(lVar1);
  return uVar6;
}

