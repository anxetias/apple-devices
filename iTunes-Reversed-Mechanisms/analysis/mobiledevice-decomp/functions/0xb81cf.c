// rea decompile_all
// name: _AFCCopyErrorString
// address: 0xb81cf
// body: available
// range: 0xb81cf-0xb8277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb821b to 0x2a94b6 _CFBundleCopyLocalizedString (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xb8249 to 0x2a989a _CFStringCreateCopy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AFCCopyErrorString(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  long *plVar5;
  
  lVar2 = _CFBundleGetMainBundle();
  if (param_1 == 0) {
    pcVar4 = &cf_Success;
  }
  else {
    plVar5 = &DAT_00444c38;
    do {
      pcVar4 = (cfstringStruct *)*plVar5;
      if (pcVar4 == (cfstringStruct *)0x0) {
        if (lVar2 == 0) {
          pcVar4 = &cf_Error0x_x;
        }
        else {
          pcVar4 = (cfstringStruct *)
                   _CFBundleCopyLocalizedString(lVar2,&cf_Error0x_x,&cf_Error0x_x,&cf_AFCError);
        }
        uVar3 = _CFStringCreateWithFormat(0,0,pcVar4,param_1);
        _CFRelease(pcVar4);
        return uVar3;
      }
      plVar1 = plVar5 + -1;
      plVar5 = plVar5 + 2;
    } while ((int)*plVar1 != param_1);
  }
  if (lVar2 == 0) {
    uVar3 = _CFStringCreateCopy(0);
    return uVar3;
  }
  uVar3 = _CFBundleCopyLocalizedString(lVar2,pcVar4,pcVar4,&cf_AFCError);
  return uVar3;
}

