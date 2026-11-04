// rea decompile_all
// name: __AMRSerialLogStartWatchingDevice
// address: 0x174256
// body: available
// range: 0x174256-0x1745e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1745e0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRSerialLogStartWatchingDevice(undefined8 *param_1,tcflag_t param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *context;
  dispatch_queue_t queue;
  dispatch_object_t object;
  cfstringStruct *pcVar7;
  tcflag_t local_a0;
  long local_98;
  long local_90;
  char *local_88;
  termios local_80;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  _dispatch_semaphore_wait((dispatch_semaphore_t)*param_1,0xffffffffffffffff);
  local_80.c_iflag = param_2;
  ___thr_AMRestorableDeviceGetECID(&local_80);
  local_a0 = local_80.c_oflag;
  if (local_80.c_oflag == 0) {
    pcVar7 = &cf_Can_twatchserialwith0ECID;
    lVar3 = 0;
LAB_001742e5:
    uVar6 = 0;
    local_88 = (char *)0x0;
    lVar4 = 0;
LAB_001744fc:
    _dispatch_semaphore_signal((dispatch_semaphore_t)*param_1);
    _AMRSafeLogAndRelease(3,pcVar7);
    if (lVar4 == 0) goto LAB_0017451e;
  }
  else {
    lVar3 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4,&local_a0);
    lVar4 = _CFDictionaryGetValue(param_1[1],lVar3);
    if (lVar4 != 0) {
      pcVar7 = &cf_Can_twatchserialdevicewe_realreadywatching;
      goto LAB_001742e5;
    }
    lVar4 = _AMRestorableDeviceCopySerialDevicePath(param_2);
    uVar6 = CONCAT71((int7)((ulong)&local_80 >> 8),lVar4 != 0);
    if (lVar4 == 0) {
      pcVar7 = (cfstringStruct *)0x0;
LAB_00174583:
      local_88 = (char *)0x0;
      goto LAB_001744fc;
    }
    lVar5 = _CFStringGetLength(lVar4);
    local_88 = _malloc(lVar5 + 1U);
    if (local_88 == (char *)0x0) {
      pcVar7 = &cf_Failedtoallocatecserialdevicename;
      uVar6 = 0;
      goto LAB_00174583;
    }
    local_90 = lVar4;
    _CFStringGetCString(lVar4,local_88,lVar5 + 1U,0x8000100);
    uVar6 = 0;
    iVar1 = _open(local_88,0x24);
    if (iVar1 == -1) {
      pcVar7 = &cf_Failedtoopenserialdevice;
      lVar4 = local_90;
      goto LAB_001744fc;
    }
    local_80.c_cc[0x10] = '\0';
    local_80.c_cc[0x11] = '\0';
    local_80.c_cc[0x12] = '\0';
    local_80.c_cc[0x13] = '\0';
    local_80._52_4_ = 0;
    local_80.c_ispeed = 0;
    local_80.c_cc[0] = '\0';
    local_80.c_cc[1] = '\0';
    local_80.c_cc[2] = '\0';
    local_80.c_cc[3] = '\0';
    local_80.c_cc[4] = '\0';
    local_80.c_cc[5] = '\0';
    local_80.c_cc[6] = '\0';
    local_80.c_cc[7] = '\0';
    local_80.c_cc[8] = '\0';
    local_80.c_cc[9] = '\0';
    local_80.c_cc[10] = '\0';
    local_80.c_cc[0xb] = '\0';
    local_80.c_cc[0xc] = '\0';
    local_80.c_cc[0xd] = '\0';
    local_80.c_cc[0xe] = '\0';
    local_80.c_cc[0xf] = '\0';
    local_80.c_ospeed = 0;
    _fcntl(iVar1,4,0);
    local_80.c_lflag = 0;
    local_80.c_oflag = 0;
    local_80.c_iflag = 0x80;
    local_80.c_cflag = 0x8b00;
    uVar6 = 0xcb00;
    if ((long)(int)_gPortSpeed < 0x1c201) {
      _cfsetospeed(&local_80,(long)(int)_gPortSpeed);
      _cfsetispeed(&local_80,(long)(int)_gPortSpeed);
      uVar6 = local_80.c_cflag | 0x4000;
    }
    local_80.c_cflag = uVar6;
    _tcsetattr(iVar1,0,&local_80);
    if ((0x1c200 < (int)_gPortSpeed) && (iVar2 = _ioctl(iVar1,0x80085402,&_gPortSpeed), iVar2 != 0))
    {
      _fprintf(*(FILE **)PTR____stderrp_004412c0,"failed to set port speed to %d\n",
               (ulong)_gPortSpeed);
    }
    context = _malloc(0x20);
    if (context == (undefined8 *)0x0) {
      pcVar7 = &cf_Failedtoallocateserialcontext;
      uVar6 = 0;
      lVar4 = local_90;
      goto LAB_001744fc;
    }
    context[2] = 0;
    context[3] = 0;
    *context = 0;
    context[1] = 0;
    local_98 = lVar3;
    queue = _dispatch_get_global_queue(0,0);
    object._os_obj =
         (_os_object_s *)
         _dispatch_source_create
                   ((dispatch_source_type_t)PTR___dispatch_source_type_read_004412e0,(long)iVar1,0,
                    queue);
    if (object._os_obj != (_os_object_s *)0x0) {
      *(int *)(context + 3) = iVar1;
      context[1] = param_2;
      ((dispatch_object_t *)(context + 2))->_os_obj = (_os_object_s *)object;
      *context = param_1;
      *(undefined1 *)((long)context + 0x1c) = 10;
      _dispatch_set_context(object,context);
      _dispatch_set_finalizer_f(object,__AMRSerialLogContextFinalizer);
      _dispatch_source_set_event_handler_f
                ((dispatch_source_t)object._os_obj,__AMRSerialLogSerialDataIsReadyToRead);
      _dispatch_source_set_cancel_handler_f
                ((dispatch_source_t)object._os_obj,__AMRSerialLogCancelDispatchSource);
      lVar3 = local_98;
      _CFDictionarySetValue(param_1[1],local_98,object._os_obj);
      _dispatch_resume(object);
      uVar6 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
      pcVar7 = (cfstringStruct *)0x0;
      lVar4 = local_90;
      goto LAB_001744fc;
    }
    _dispatch_semaphore_signal((dispatch_semaphore_t)*param_1);
    _free(context);
    _AMRSafeLogAndRelease(3,&cf_Failedtocreateserialdispatchsource);
    uVar6 = 0;
    lVar4 = local_90;
    lVar3 = local_98;
  }
  _CFRelease(lVar4);
LAB_0017451e:
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (local_88 != (char *)0x0) {
    _free(local_88);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}

