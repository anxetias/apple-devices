// rea decompile_all
// name: _CFStringCreateKeyFromDataType
// address: 0x10403e
// body: available
// range: 0x10403e-0x1040ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x104061 to 0x1040eb _CFDictionaryCreateJSONCFStringRef (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1040e6 to 0x2a98dc _CFStringCreateWithFormat (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _CFStringCreateKeyFromDataType(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = _CFGetTypeID();
  lVar2 = _CFDictionaryGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _CFDictionaryCreateJSONCFStringRef(param_1);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _CFArrayGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _CFStringCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
    _CFStringAppend(uVar3,&cf__);
    uVar4 = _CFArrayGetCount(param_1);
    _CFArrayApplyFunction(param_1,0,uVar4,_CFArrayValueToJSON,uVar3);
    _CFStringAppend(uVar3,&cf__);
    return uVar3;
  }
  uVar3 = _CFStringCreateWithFormat
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf_____,param_1);
  return uVar3;
}

