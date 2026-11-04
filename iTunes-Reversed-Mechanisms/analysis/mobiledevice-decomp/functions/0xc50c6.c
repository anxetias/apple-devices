// rea decompile_all
// name: _USBMuxIntDisableListener
// address: 0xc50c6
// body: available
// range: 0xc50c6-0xc521c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc5107 to 0xc62ed _USBMuxDebugLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _USBMuxIntDisableListener(int *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != -0x21524111)) {
    _USBMuxDebugLog("%s:%d %s invalid USBMuxListenerRef %p\n","USBMuxIntDisableListener",0x15e,
                    "USBMuxIntDisableListener",param_1);
    return;
  }
  if (param_1[0x1a] != 0) {
    return;
  }
  param_1[0x1a] = 1;
  if (*(long *)(param_1 + 4) != 0) {
    _CFRelease();
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if (*(long *)(param_1 + 0x16) != 0) {
    _CFRunLoopSourceInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x16));
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if (*(long *)(param_1 + 0x14) != 0) {
    _CFRunLoopSourceInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x14));
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  if (*(long *)(param_1 + 0x12) == 0) {
    if ((*(long *)(param_1 + 0x20) != 0) || (param_1[1] == -1)) goto LAB_000c519d;
    _close(param_1[1]);
  }
  else {
    _CFSocketInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x12));
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  param_1[1] = -1;
LAB_000c519d:
  if (*(dispatch_source_t *)(param_1 + 0x20) != (dispatch_source_t)0x0) {
    _dispatch_source_cancel(*(dispatch_source_t *)(param_1 + 0x20));
    param_1[1] = -1;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  while (pvVar2 = *(void **)(param_1 + 0x1c), pvVar2 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)((long)pvVar2 + 0x18);
    _free(pvVar2);
  }
  iVar1 = param_1[2];
  if ((((iVar1 == 3) || (iVar1 == 2)) || (iVar1 == 0)) && (*(code **)(param_1 + 10) != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x000c5205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 0xe),param_1);
    return;
  }
  return;
}

