// rea decompile_all
// name: RPSocket_host::event_handler
// address: 0x197ab8
// body: available
// range: 0x197ab8-0x197b48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x197b44 to 0x1971bc RPSocket::signal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_host::event_handler(__CFReadStream*, unsigned long, void*) */

void RPSocket_host::event_handler(__CFReadStream *param_1,ulong param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)((long)param_3 + 0x10) + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00197b35;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x627,"event_handler",0,&cf_stream__pgotevent__luforcontext__p_socket__p,
            param_1,param_2,param_3,*(undefined8 *)((long)param_3 + 0x10));
  }
LAB_00197b35:
  RPSocket::signal(*(RPSocket **)((long)param_3 + 0x10),param_2);
  return;
}

