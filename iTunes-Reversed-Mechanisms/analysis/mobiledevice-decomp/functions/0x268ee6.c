// rea decompile_all
// name: _AFCFileRefOpen
// address: 0x268ee6
// body: available
// range: 0x268ee6-0x26902a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AFCFileRefOpen(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == (long *)0x0)) {
    uVar1 = ___AFCSetErrorResult(param_1,param_2,0xe8004007,param_4,0x175,"NULL argument");
  }
  else {
    uVar2 = _CFGetAllocator();
    lVar3 = _CFStringCreateWithCString(uVar2,param_2,0x8000100);
    uVar1 = 0xe8004003;
    if (lVar3 != 0) {
      uVar2 = _CFGetAllocator(param_1);
      lVar4 = _AFCOperationCreateOpenFile(uVar2,lVar3,param_3,0);
      _CFRelease(lVar3);
      if (lVar4 != 0) {
        lVar3 = _AFCConnectionGetIOTimeout(param_1);
        uVar1 = _AFCConnectionProcessOperation((double)lVar3,param_1,lVar4);
        if ((uVar1 == 0) && (uVar1 = _AFCOperationGetResultStatus(lVar4), uVar1 == 0)) {
          lVar3 = _AFCOperationGetResultObject(lVar4);
          _AFCFileDescriptorSetRemoteName(lVar3,param_2);
          uVar1 = 0xe8004017;
          if (lVar3 != 0) {
            lVar5 = _CFGetTypeID(lVar3);
            lVar6 = _AFCFileDescriptorGetTypeID();
            if (lVar5 == lVar6) {
              _CFRetain(lVar3);
              *param_4 = lVar3;
              uVar1 = 0;
            }
          }
        }
        _CFRelease(lVar4);
      }
    }
  }
  return uVar1 & 0x1fff;
}

