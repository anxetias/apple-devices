// rea decompile_all
// name: _AFCConnectionProcessOperation
// address: 0xba7f5
// body: available
// range: 0xba7f5-0xba9cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCConnectionProcessOperation(double param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  int local_3c;
  double local_38;
  double local_30;
  
  local_30 = param_1;
  _AFCLog(5,"AFCConnectionProcessOperation(%p, %p, %g)",param_2,param_3);
  _AFCLockLock(*(undefined8 *)(param_2 + 0x88));
  if (*(int *)(param_2 + 0x10) == 1) {
    _CFRetain(param_2);
    lVar1 = *(long *)(param_2 + 0xc0);
    if (lVar1 == 0) {
      _AFCConnectionProcessOperation_cold_1
                ((undefined8 *)(param_2 + 0x88),param_2,param_3,&local_3c);
      iVar3 = local_3c;
    }
    else {
      uVar5 = _CFRunLoopGetCurrent();
      cVar2 = _CFEqual(lVar1,uVar5);
      _AFCLockUnlock(*(undefined8 *)(param_2 + 0x88));
      iVar3 = _AFCConnectionSubmitOperation(param_2,param_3);
      if (iVar3 == 0) {
        if (cVar2 == '\0') {
          iVar3 = _AFCConditionWait(local_30,*(undefined8 *)(param_3 + 0x100));
          if (iVar3 == -0x17ffbff4) {
LAB_000ba960:
            _AFCLog(1,"Operation %p timed out!",param_3);
            iVar3 = -0x17ffbff4;
          }
        }
        else {
          cVar2 = _AFCConditionIsSignaled();
          while (iVar3 = 0, cVar2 == '\0') {
            local_38 = (double)_CFAbsoluteTimeGetCurrent();
            iVar4 = _CFRunLoopRunInMode(local_30,&cf_AFCRunLoopMode,1);
            if (iVar4 != 4) {
              iVar3 = -0x17ffbff5;
              if (1 < iVar4 - 1U) {
                if (iVar4 == 3) goto LAB_000ba960;
                iVar3 = -0x17ffbfff;
              }
              break;
            }
            if ((local_30 != 0.0) || (dVar6 = local_30, NAN(local_30))) {
              dVar6 = (double)_CFAbsoluteTimeGetCurrent();
              dVar6 = local_30 + (local_38 - dVar6);
              if (dVar6 <= 0.0) goto LAB_000ba960;
            }
            local_30 = dVar6;
            cVar2 = _AFCConditionIsSignaled(*(undefined8 *)(param_3 + 0x100));
          }
        }
      }
    }
    _CFRelease(param_2);
    _AFCLog(5,"ProcessOperation(%p) = %x",param_3,iVar3);
  }
  else {
    _AFCLockUnlock(*(undefined8 *)(param_2 + 0x88));
    iVar3 = -0x17ffbff5;
  }
  return iVar3;
}

