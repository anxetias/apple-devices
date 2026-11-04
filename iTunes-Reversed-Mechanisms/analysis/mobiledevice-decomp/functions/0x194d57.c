// rea decompile_all
// name: _RPSocketWrite
// address: 0x194d57
// body: available
// range: 0x194d57-0x194e1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _RPSocketWrite(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_R15;
  ulong uVar4;
  
  uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
  do {
    if (param_3 == 0) {
LAB_00194e11:
      return uVar4 & 0xffffffff;
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))
                      (*(long **)(param_1 + 0x10),param_2,param_3);
    if (lVar2 < 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar2 == 0) && (lVar2 = _getDefaultLogCtx(), lVar2 == 0)) ||
         (*(int *)(lVar2 + 0x10) < 3)) {
        uVar4 = 0;
      }
      else {
        uVar3 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                         );
        uVar4 = 0;
        _LogMsg(3,lVar2,uVar3,0x2b3,"RPSocketWrite",0,&cf_failedtowrite_zubytesto__,param_3,param_1)
        ;
      }
      goto LAB_00194e11;
    }
    param_2 = param_2 + lVar2;
    LOCK();
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0xe8) + 8);
    *plVar1 = *plVar1 + lVar2;
    UNLOCK();
    param_3 = param_3 - lVar2;
  } while( true );
}

