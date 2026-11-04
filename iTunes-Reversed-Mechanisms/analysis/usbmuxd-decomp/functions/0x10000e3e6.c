// rea decompile_all
// name: FUN_10000e3e6
// address: 0x10000e3e6
// body: available
// range: 0x10000e3e6-0x10000e512 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000e50d to 0x10001349d _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000e3e6(void *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x10) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x10) = 0;
    }
    if (*(long *)((long)param_1 + 0x20) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x20) = 0;
    }
    if (*(long *)((long)param_1 + 0x28) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x28) = 0;
    }
    if (*(long *)((long)param_1 + 0x30) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x30) = 0;
    }
    if (*(long *)((long)param_1 + 0x38) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x38) = 0;
    }
    lVar1 = *(long *)((long)param_1 + 0x40);
    if (lVar1 != 0) {
      uVar2 = _CFArrayGetCount(lVar1);
      _CFArrayApplyFunction(lVar1,0,uVar2,FUN_10000f2fe,0);
      _CFRelease(*(undefined8 *)((long)param_1 + 0x40));
      *(undefined8 *)((long)param_1 + 0x40) = 0;
    }
    lVar1 = *(long *)((long)param_1 + 0x48);
    if (lVar1 != 0) {
      uVar2 = _CFArrayGetCount(lVar1);
      _CFArrayApplyFunction(lVar1,0,uVar2,FUN_10000f34b,0);
      _CFRelease(*(undefined8 *)((long)param_1 + 0x48));
      *(undefined8 *)((long)param_1 + 0x48) = 0;
    }
    if (*(long *)((long)param_1 + 0x18) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x18) = 0;
    }
    if (*(long *)((long)param_1 + 0x50) != 0) {
      _CFRunLoopSourceInvalidate();
      _CFRelease(*(undefined8 *)((long)param_1 + 0x50));
    }
    _free(param_1);
    return;
  }
  return;
}

