// rea decompile_all
// name: __AMRestorableDeviceSetState
// address: 0x158b35
// body: available
// range: 0x158b35-0x158dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestorableDeviceSetState(long param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *context;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  
  if (param_1 == 0) {
    pcVar8 = &cf_Can_tsetstateonNULLdevice;
    context = (long *)0x0;
    goto LAB_00158d55;
  }
  context = (long *)(param_2 & 0xffffffff);
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = (uint)param_2;
  uVar4 = __AMDeviceProxyGetState(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  if ((ulong)uVar2 < 7) {
    uVar7 = *(undefined8 *)(&DAT_0044a348 + (ulong)uVar2 * 8);
  }
  else {
    uVar7 = 0;
  }
  if ((uint)param_2 < 7) {
    uVar6 = *(undefined8 *)(&DAT_0044a348 + (param_2 & 0xffffffff) * 8);
  }
  else {
    uVar6 = 0;
  }
  _AMRLog(6,&cf_Changingstatefrom____to____,uVar7,uVar6);
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    pcVar8 = (cfstringStruct *)0x0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x79) = 0;
    break;
  case 1:
    pcVar8 = (cfstringStruct *)0x0;
    _AMRLog(6,&cf_Restorewassuccessful);
    __AMRestorableStateMachineHandleRestoreComplete(param_1);
    break;
  case 2:
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = _CFErrorCopyDescription();
    }
    pcVar8 = (cfstringStruct *)0x0;
    _AMRLog(3,&cf_Stateisnowsettoerror___,lVar5);
    __AMRestorableStateMachineHandleRestoreComplete(param_1);
    context = (long *)CONCAT71((int7)((ulong)context >> 8),1);
    if (lVar5 != 0) {
      _CFRelease(lVar5);
      pcVar8 = (cfstringStruct *)0x0;
    }
    goto LAB_00158d55;
  case 3:
    pcVar8 = &cf_Devicedisappearedduringtransition;
    if (*(char *)(param_1 + 0x28) != '\0') {
      pcVar8 = &cf_Deviceneverdisconnectedduringtransition;
    }
    context = (long *)0x0;
    _AMRLog(3,pcVar8);
    cVar3 = __AMRestorableStateMachineHandleRestoreComplete(param_1);
    if (cVar3 == '\0') {
      pcVar8 = &cf_Failedtohandlerestorecompletefromdisappearedstate;
      goto LAB_00158d55;
    }
    cVar3 = __AMRestorableRemoveDevice(param_1);
    context = (long *)0x0;
    if (cVar3 == '\0') {
      pcVar8 = &cf_Failedtoremoverestorabledeviceafteritdisappeared;
      goto LAB_00158d55;
    }
    goto LAB_00158d4f;
  case 4:
    if (*(char *)(param_1 + 0x28) == '\0') {
      _AMRLog(6,&cf_Devicedisconnectedbeforetransition);
    }
    context = (long *)0x0;
    _AMRLog(7,&cf_Creatingtimertomonitortransition);
    cVar3 = __AMRestorableDeviceCreateTimer(param_1);
    if (cVar3 == '\0') {
      pcVar8 = &cf_Failedtosetuptimertowatchdevicetransition;
      context = (long *)0x0;
      goto LAB_00158d55;
    }
    goto LAB_00158d4f;
  case 5:
    context = (long *)0x0;
    _AMRLog(7,&cf_CreatingtimertowaitforUSBdebounce);
    cVar3 = __AMRestorableDeviceCreateTimer(param_1);
    if (cVar3 == '\0') {
      pcVar8 = &cf_Failedtosetuptimertowaitfordevicedebounce;
      goto LAB_00158d55;
    }
LAB_00158d4f:
    pcVar8 = (cfstringStruct *)0x0;
    break;
  case 6:
    if (*(long *)(param_1 + 0x20) == 0) {
      pcVar8 = &cf_Can_trestoredevicewithNULLproxy;
    }
    else {
      context = _calloc(1,0x28);
      if (context != (long *)0x0) {
        *context = param_1;
        context[1] = *(long *)(param_1 + 0x20);
        *(undefined4 *)(context + 4) = *(undefined4 *)(param_1 + 0x2c);
        _CFRetain(param_1);
        if (context[1] != 0) {
          LOCK();
          piVar1 = (int *)(context[1] + 0x14);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        _dispatch_async_f(*(dispatch_queue_t *)(param_1 + 0x98),context,
                          ___thr_AMRestorableDeviceAdvanceStateMachineAsync);
        goto LAB_00158d4f;
      }
      pcVar8 = &cf_Failedtoallocateargstoadvancestatemachine;
    }
    _AMRSafeLog(3,&cf___,pcVar8);
    _CFRelease(pcVar8);
    pcVar8 = &cf_Failedtostartrestoreondeviceinstatechange;
    context = (long *)0x0;
    goto LAB_00158d55;
  default:
    __AMRestorableDeviceSetState(param_1,2);
    pcVar8 = &cf_Can_tsetstatetounknownstatevalue_movingtoerrorstate_;
  }
  context = (long *)CONCAT71((int7)((ulong)context >> 8),1);
LAB_00158d55:
  _AMRSafeLogAndRelease(3,pcVar8);
  return (ulong)context & 0xffffffff;
}

