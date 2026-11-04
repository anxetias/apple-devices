// rea decompile_all
// name: _AFCCopyPacketTypeString
// address: 0xb8353
// body: available
// range: 0xb8353-0xb83ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb83a1 to 0x2a94b6 _CFBundleCopyLocalizedString (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AFCCopyPacketTypeString(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  if (param_1 == 1) {
    pcVar5 = &cf_Status;
  }
  else {
    plVar2 = &DAT_00444df0;
    do {
      pcVar5 = (cfstringStruct *)*plVar2;
      if (pcVar5 == (cfstringStruct *)0x0) {
        uVar3 = _CFBundleGetMainBundle();
        uVar3 = _CFBundleCopyLocalizedString(uVar3,&cf_PacketType_qu,&cf_PacketType_qu,&cf_AFCError)
        ;
        uVar4 = _CFStringCreateWithFormat(0,0,uVar3,param_1);
        _CFRelease(uVar3);
        return uVar4;
      }
      plVar1 = plVar2 + -1;
      plVar2 = plVar2 + 3;
    } while (*plVar1 != param_1);
  }
  uVar3 = _CFBundleGetMainBundle();
  uVar3 = _CFBundleCopyLocalizedString(uVar3,pcVar5,pcVar5,&cf_AFCError);
  return uVar3;
}

