// rea decompile_all
// name: ExchangeDataHelper
// address: 0x19531d
// body: available
// range: 0x19531d-0x1955c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ExchangeDataHelper(RPSocket_s*, unsigned long, void const*) */

void ExchangeDataHelper(RPSocket_s *param_1,ulong param_2,void *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  RPSocket_s *pRVar10;
  
  if (param_2 == 1) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if ((lVar2 == 0) && (lVar2 = _getDefaultLogCtx(), lVar2 == 0)) {
      return;
    }
    if (*(int *)(lVar2 + 0x10) < 3) {
      return;
    }
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(3,lVar2,uVar3,0x2fe,"ExchangeDataHelper",0,&cf_wrongkCFStreamEventOpenCompletedfrom__,
            param_1);
    return;
  }
  pRVar10 = param_1;
  if (param_2 == 2) {
    pvVar4 = *(void **)(*(long *)(param_1 + 0x10) + 0xe0);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = _calloc(1,0x10000);
      *(void **)(*(long *)(param_1 + 0x10) + 0xe0) = pvVar4;
    }
    lVar2 = _RPSocketRead(param_1,pvVar4,0x10000);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) &&
         (2 < *(int *)(lVar2 + 0x10))) {
        uVar3 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                         );
        pcVar9 = &cf_EOFfrom__;
        uVar8 = 0x30e;
        goto LAB_00195524;
      }
    }
    else if (lVar2 == -1) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) &&
         (2 < *(int *)(lVar2 + 0x10))) {
        uVar3 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                         );
        piVar5 = ___error();
        pcVar6 = _strerror(*piVar5);
        uVar7 = _CFStringCreateWithCString(0,pcVar6,0x8000100);
        pcVar9 = &cf_RPSocketReadfrom__;
        uVar8 = 0x30a;
LAB_0019552a:
        _LogMsg(3,lVar2,uVar3,uVar8,"ExchangeDataHelper",uVar7,pcVar9,pRVar10);
      }
    }
    else {
      cVar1 = _RPSocketWrite(param_3,pvVar4,lVar2);
      if (cVar1 != '\0') {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) &&
         (2 < *(int *)(lVar2 + 0x10))) {
        uVar3 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                         );
        pcVar9 = &cf_RPSocketWritefailedto__;
        uVar8 = 0x312;
        uVar7 = 0;
        pRVar10 = param_3;
        goto LAB_0019552a;
      }
    }
  }
  else if (param_2 == 0x10) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (2 < *(int *)(lVar2 + 0x10)))
    {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      pcVar9 = &cf_kCFStreamEventEndEncounteredfrom__;
      uVar8 = 0x2f8;
LAB_00195524:
      uVar7 = 0;
      goto LAB_0019552a;
    }
  }
  else if (param_1 == (RPSocket_s *)0x0) goto LAB_0019553f;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
LAB_0019553f:
  if (param_3 == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00195553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)param_3 + 0x10) + 0x20))();
  return;
}

