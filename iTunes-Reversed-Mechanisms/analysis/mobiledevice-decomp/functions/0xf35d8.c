// rea decompile_all
// name: __getInterfaceInterfaceForService
// address: 0xf35d8
// body: available
// range: 0xf35d8-0xf3699 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf3695 to 0xf328f __getUserClientForService (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __getInterfaceInterfaceForService(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x2d,0x97,0x86,0xc6,0x9e,0xf3,0x11,0xd4,0xad,0x51,0,10,0x27,5,0x28,0x61);
  uVar2 = _CFUUIDGetConstantUUIDWithBytes
                    (0,100,0xba,0xbd,0xd2,0xf,0x6b,0x4b,0x4f,0x8e,0x3e,0xdc,0x36,4,0x69,0x87,0xad);
  __getUserClientForService(param_1,"interface",uVar1,uVar2);
  return;
}

