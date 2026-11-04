// rea decompile_all
// name: FUN_10000c242
// address: 0x10000c242
// body: available
// range: 0x10000c242-0x10000c336 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000c332 to 0x10001349d _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000c242(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1[2];
  if (iVar2 != 0) {
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__s__dIOObjectRelease_0x_x_,"KDPInterfaceCleanup",0x52);
      iVar2 = (int)param_1[2];
    }
    _IOObjectRelease(iVar2);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (param_1[3] != 0) {
    uVar1 = _CFRunLoopGetCurrent();
    _CFRunLoopRemoveSource(uVar1,param_1[3],*(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040);
    _CFRelease(param_1[3]);
    param_1[3] = 0;
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x48))();
    (**(code **)(*(long *)param_1[1] + 0x18))();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    _CFSocketInvalidate();
    _CFRelease(*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    _free((void *)param_1[4]);
    param_1[4] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    _free((void *)param_1[5]);
  }
  _free(param_1);
  return;
}

