// rea decompile_all
// name: _AFCFileRefRead
// address: 0x26902b
// body: available
// range: 0x26902b-0x26916a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AFCFileRefRead(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    uVar1 = ___AFCSetErrorResult(param_1,param_2,0xe8004007,param_4,0x19c,"NULL argument");
  }
  else {
    _AFCFileDescriptorGetRemoteName(param_2);
    lVar2 = _AFCFileDescriptorCreateReadOperation
                      (param_2,param_3,*(undefined8 *)PTR__kCFAllocatorNull_004410f8,*param_4,0);
    if (lVar2 == 0) {
      uVar1 = 0xe8004003;
    }
    else {
      lVar3 = _AFCConnectionGetIOTimeout(param_1);
      uVar1 = _AFCConnectionProcessOperation((double)lVar3,param_1,lVar2);
      if ((uVar1 == 0) && (uVar1 = _AFCOperationGetResultStatus(lVar2), uVar1 == 0)) {
        uVar4 = _AFCOperationGetResultObject(lVar2);
        lVar3 = _CFGetTypeID(uVar4);
        lVar5 = _CFDataGetTypeID();
        if (lVar3 == lVar5) {
          uVar4 = _CFDataGetLength(uVar4);
          *param_4 = uVar4;
          _AFCFileDescriptorGetRemoteName(param_2);
          uVar1 = 0;
        }
        else {
          uVar1 = 0xe8004017;
        }
      }
      _CFRelease(lVar2);
    }
  }
  return uVar1 & 0x1fff;
}

