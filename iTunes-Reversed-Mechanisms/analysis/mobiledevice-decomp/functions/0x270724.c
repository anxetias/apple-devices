// rea decompile_all
// name: _set_nvram_variable
// address: 0x270724
// body: available
// range: 0x270724-0x27083d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _set_nvram_variable(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = _IORegistryEntryFromPath
                    (*(undefined4 *)PTR__kIOMasterPortDefault_004411d8,"IODeviceTree:/options");
  if (iVar1 == 0) {
    uVar5 = 0xe00002f0;
  }
  else {
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFStringCreateWithCString(uVar5,param_1,0x600);
    if (lVar3 == 0) {
      uVar5 = 0xe00002be;
    }
    else {
      lVar4 = _CFDataCreateWithBytesNoCopy
                        (uVar5,param_2,param_3,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
      if (lVar4 == 0) {
        uVar5 = 0xe00002be;
      }
      else {
        uVar2 = _IORegistryEntrySetCFProperty(iVar1,lVar3,lVar4);
        if (uVar2 == 0) {
          uVar5 = 0;
        }
        else {
          if (_inRestore == '\x01') {
            _printf("Failed to set nvram variable %s: 0x%x\n",param_1,(ulong)uVar2);
          }
          else {
            _uarpLogError(3,"Failed to set nvram variable %s: 0x%x\n",param_1,uVar2);
          }
          uVar5 = 0xe00002e9;
        }
        _CFRelease(lVar4);
      }
      _CFRelease(lVar3);
    }
    _IOObjectRelease(iVar1);
  }
  return uVar5;
}

