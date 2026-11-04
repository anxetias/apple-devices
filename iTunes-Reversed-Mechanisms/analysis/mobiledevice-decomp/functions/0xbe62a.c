// rea decompile_all
// name: _initializeProvisioningProfile
// address: 0xbe62a
// body: available
// range: 0xbe62a-0xbe6e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _initializeProvisioningProfile(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _CFUUIDCreate();
  uVar2 = _CFUUIDCreateString(param_1,uVar1);
  _MISProfileSetValue(param_2,&cf_UUID,uVar2);
  _CFRelease(uVar2);
  _CFRelease(uVar1);
  uVar1 = _CFNumberCreate(param_1,9);
  _MISProfileSetValue(param_2,&cf_Version,uVar1);
  _CFRelease(uVar1);
  _CFAbsoluteTimeGetCurrent();
  uVar1 = _CFDateCreate(param_1);
  _MISProfileSetValue(param_2,&cf_CreationDate,uVar1);
  _CFRelease(uVar1);
  return;
}

