// rea decompile_all
// name: _RPSocketReadBuffer
// address: 0x194827
// body: available
// range: 0x194827-0x194955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _RPSocketReadBuffer(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  undefined8 unaff_R14;
  ulong uVar8;
  
  uVar8 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  do {
    if (param_3 == 0) {
LAB_0019494a:
      return uVar8 & 0xffffffff;
    }
    lVar1 = _RPSocketRead(param_1,param_2,param_3);
    if (lVar1 == -1) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar1 == 0) && (lVar1 = _getDefaultLogCtx(), lVar1 == 0)) ||
         (*(int *)(lVar1 + 0x10) < 3)) {
LAB_00194947:
        uVar8 = 0;
      }
      else {
        uVar2 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                         );
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        uVar5 = _CFStringCreateWithCString(0,pcVar4,0x8000100);
        pcVar7 = &cf_readerroron__;
        uVar6 = 0x261;
LAB_00194937:
        uVar8 = 0;
        _LogMsg(3,lVar1,uVar2,uVar6,"RPSocketReadBuffer",uVar5,pcVar7,param_1);
      }
      goto LAB_0019494a;
    }
    if (lVar1 == 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar1 == 0) && (lVar1 = _getDefaultLogCtx(), lVar1 == 0)) ||
         (*(int *)(lVar1 + 0x10) < 3)) goto LAB_00194947;
      uVar2 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      pcVar7 = &cf_EOFon__;
      uVar6 = 0x25d;
      uVar5 = 0;
      goto LAB_00194937;
    }
    param_2 = param_2 + lVar1;
    param_3 = param_3 - lVar1;
  } while( true );
}

