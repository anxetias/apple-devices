// rea decompile_all
// name: _RPSocketExchangeData
// address: 0x195129
// body: available
// range: 0x195129-0x195281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x195278 to 0x1946ba RPSocket::resume (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19527d to 0x1996a4 _RPSocketExchangeData.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _RPSocketExchangeData(void *param_1,void *param_2)

{
  RPSocket *this;
  RPSocket *this_00;
  long lVar1;
  undefined8 uVar2;
  
  this = *(RPSocket **)((long)param_1 + 0x10);
  this_00 = *(RPSocket **)((long)param_2 + 0x10);
  if (*(long *)(this + 0x30) != *(long *)(this_00 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    _RPSocketExchangeData_cold_1();
  }
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 != 0) goto LAB_0019516b;
  }
  else {
LAB_0019516b:
    if (4 < *(int *)(lVar1 + 0x10)) {
      uVar2 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(5,lVar1,uVar2,0x323,"RPSocketExchangeData",0,&cf_RPSocketExchangeData__p<__>_p,this,
              this_00);
    }
  }
  RPSocket::suspend(*(RPSocket **)((long)param_1 + 0x10));
  RPSocket::suspend(*(RPSocket **)((long)param_2 + 0x10));
  RPSocket::reset_stats(this);
  RPSocket::reset_stats(this_00);
  lVar1 = *(long *)(*(long *)((long)param_1 + 0x10) + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00195238;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x32b,"RPSocketExchangeData",0,&cf_Beginningdataexchange___<__>__,param_1,
            param_2);
  }
LAB_00195238:
  RPSocket::set_client(*(RPSocket **)((long)param_1 + 0x10),ExchangeDataHelper,param_2);
  RPSocket::set_client(*(RPSocket **)((long)param_2 + 0x10),ExchangeDataHelper,param_1);
  RPSocket::resume(*(RPSocket **)((long)param_1 + 0x10));
  RPSocket::resume(*(RPSocket **)((long)param_2 + 0x10));
  return;
}

