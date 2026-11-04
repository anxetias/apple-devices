// rea decompile_all
// name: __AMRestorableDeviceCreateTimer
// address: 0x159e60
// body: available
// range: 0x159e60-0x159ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestorableDeviceCreateTimer(void *param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  dispatch_source_t pdVar4;
  dispatch_time_t start;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined8 unaff_RBX;
  ulong uVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  
  cVar2 = __AMRestorableDeviceCancelTimer();
  if (cVar2 == '\0') {
    pcVar8 = &cf_Failedtostopexistingtimerondevice;
    goto LAB_00159f2a;
  }
  *(undefined1 *)((long)param_1 + 0x78) = 0;
  uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (*(long *)((long)param_1 + 0x60) != 0) {
    pcVar8 = (cfstringStruct *)0x0;
    goto LAB_00159fd2;
  }
  switch(*(undefined4 *)((long)param_1 + 0x2c)) {
  case 0:
    pcVar5 = &cf_Idle;
    break;
  case 1:
    pcVar5 = &cf_Success;
    break;
  case 2:
    pcVar5 = &cf_Error;
    break;
  case 3:
    pcVar5 = &cf_Disappeared;
    break;
  case 4:
    lVar3 = 0x68;
    goto LAB_00159ee2;
  case 5:
    lVar3 = 0x6c;
LAB_00159ee2:
    uVar1 = *(uint *)((long)param_1 + lVar3);
    uVar9 = (ulong)uVar1;
    if (uVar9 == 0) {
      _AMRLog(7);
    }
    else {
      if ((uVar1 * -0x11111111 >> 2 | uVar1 * -0x40000000) < 0x4444445) {
        uVar6 = uVar9 / 0x3c;
        pcVar8 = &cf_Creatingatimerfor_dminutes;
      }
      else {
        pcVar8 = &cf_Creatingatimerfor_dseconds;
        uVar6 = (ulong)uVar1;
      }
      _AMRLog(7,pcVar8,uVar6);
    }
    pcVar8 = (cfstringStruct *)0x0;
    pdVar4 = _dispatch_source_create
                       ((dispatch_source_type_t)PTR___dispatch_source_type_timer_004412e8,0,0,
                        *(dispatch_queue_t *)(_gRestorableData + 0x18));
    *(dispatch_source_t *)((long)param_1 + 0x60) = pdVar4;
    _dispatch_source_set_event_handler_f(pdVar4,__AMRestorableDeviceTimerFired);
    _dispatch_set_context(*(dispatch_object_t *)((long)param_1 + 0x60),param_1);
    pdVar4 = *(dispatch_source_t *)((long)param_1 + 0x60);
    start = _dispatch_time(0,uVar9 * 1000000000);
    _dispatch_source_set_timer(pdVar4,start,0xffffffffffffffff,0);
    _dispatch_resume(*(dispatch_object_t *)((long)param_1 + 0x60));
    goto LAB_00159fd2;
  case 6:
    pcVar5 = &cf_Restoring;
    break;
  default:
    pcVar5 = (cfstringStruct *)0x0;
  }
  pcVar8 = (cfstringStruct *)0x0;
  _AMRLog(3,&cf_Invalidstate__fortimer,pcVar5);
LAB_00159f2a:
  uVar7 = 0;
LAB_00159fd2:
  _AMRSafeLogAndRelease(3,pcVar8);
  return uVar7 & 0xffffffff;
}

