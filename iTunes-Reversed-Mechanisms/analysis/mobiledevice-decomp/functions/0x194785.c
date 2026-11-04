// rea decompile_all
// name: _RPSocketRead
// address: 0x194785
// body: available
// range: 0x194785-0x194826 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _RPSocketRead(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  if (lVar2 == 0) {
    lVar2 = _getDefaultLogCtx();
    if (lVar2 == 0) goto LAB_001947fa;
  }
  if (4 < *(int *)(lVar2 + 0x10)) {
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar2,uVar3,0x24e,"RPSocketRead",0,&cf_Reading_lubytesfromsocket_ptobuffer_p,param_3,
            param_1,param_2);
  }
LAB_001947fa:
  lVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))
                    (*(undefined8 **)(param_1 + 0x10),param_2,param_3);
  if (lVar2 != -1) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0xe8);
    LOCK();
    *plVar1 = *plVar1 + lVar2;
    UNLOCK();
  }
  return;
}

