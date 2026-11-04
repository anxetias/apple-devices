// rea decompile_all
// name: ACFULogging::ACFULogging
// address: 0x216a6e
// body: available
// range: 0x216a6e-0x216b10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x216b06 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFULogging::ACFULogging() */

void __thiscall ACFULogging::ACFULogging(ACFULogging *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  *(undefined4 *)this = 0x1101100;
  this[4] = (ACFULogging)0x2;
  *(undefined8 *)(this + 8) = 0x32aaaba7;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 2;
  ___bzero(this + 0x5c,0xc00);
  *(undefined8 *)(this + 0xc60) = 0;
  iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
  if (iVar3 != 0) {
    uVar2 = __os_log_create(0,"com.apple.AppleConvergedFirmwareUpdater","service");
    uVar1 = *(undefined8 *)(this + 0xc60);
    *(undefined8 *)(this + 0xc60) = uVar2;
    (*(code *)PTR__objc_release_004410a0)(uVar1);
    return;
  }
  return;
}

