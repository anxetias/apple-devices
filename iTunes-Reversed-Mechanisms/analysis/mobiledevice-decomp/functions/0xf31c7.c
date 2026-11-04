// rea decompile_all
// name: __getDeviceInterfaceForService
// address: 0xf31c7
// body: available
// range: 0xf31c7-0xf328e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf328a to 0xf328f __getUserClientForService (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __getDeviceInterfaceForService(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x9d,199,0xb7,0x80,0x9e,0xc0,0x11,0xd4,0xa5,0x4f,0,10,0x27,5,0x28,0x61);
  uVar2 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xfe,0x2f,0xd5,0x2f,0x3b,0x5a,0x47,0x3b,0x97,0x7b,0xad,0x99,0,0x1e,0xb3,0xed)
  ;
  __getUserClientForService(param_1,"device",uVar1,uVar2);
  return;
}

