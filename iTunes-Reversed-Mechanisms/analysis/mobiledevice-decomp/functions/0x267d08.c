// rea decompile_all
// name: _AFCFileDescriptorCreateSetPositionOperation
// address: 0x267d08
// body: available
// range: 0x267d08-0x267d80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AFCFileDescriptorCreateSetPositionOperation
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_70 [40];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    _AFCHeaderInit(local_70,0x11,0x40,0,0);
    local_48 = *(undefined8 *)(param_1 + 0x18);
    local_40 = param_2;
    local_38 = param_3;
    uVar1 = _CFGetAllocator(param_1);
    uVar1 = _AFCOperationCreate(uVar1,local_70,0,0,0,param_4);
    return uVar1;
  }
  return 0;
}

