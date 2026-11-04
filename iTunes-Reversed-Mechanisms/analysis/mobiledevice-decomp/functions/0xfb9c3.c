// rea decompile_all
// name: AMRLocalUSBDevice::sendDeviceRequestTO:direction:requestType:recipient:request:value:length:data:noDataTO:completionTO:withReply:
// address: 0xfb9c3
// body: available
// range: 0xfb9c3-0xfbc10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfbc0c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x44 bytes */

void AMRLocalUSBDevice::
     sendDeviceRequestTO_direction_requestType_recipient_request_value_length_data_noDataTO_completionTO_withReply_
               (ID param_1,SEL param_2,unsigned_short param_3,unsigned_char param_4,
               unsigned_char param_5,unsigned_char param_6,unsigned_char param_7,
               unsigned_short param_8,unsigned_short param_9,ID param_10,unsigned_int param_11,
               unsigned_int param_12,ID param_13,undefined4 param_14)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_258;
  uint local_254;
  undefined2 local_250;
  undefined1 *local_24e;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar7 = (ulong)param_9;
  pvVar4 = _malloc(uVar7);
  (*(code *)PTR__objc_msgSend_00441098)(param_10,"getBytes:length:",pvVar4,uVar7);
  iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0xf0))();
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = _createAndLogUSBError
                      (iVar2,&
                             cf_DeviceRequestfailed_0x_x_IOKitreturncode__DeviceRequestwasindex__u_direction__u_requestType__u_recipient__u_request__u_value__u_length__u_noDataTO__u_completionTO__u
                       ,iVar2,param_3,param_4,param_5,param_6,param_7,param_8,uVar7,param_11,
                       param_12);
    if (param_9 != 0 && pvVar4 != (void *)0x0) {
      ___bzero(local_238,0x200);
      if (0x1ff < param_9) {
        param_9 = 0x200;
      }
      uVar7 = (ulong)(uint)param_9;
      ___strlcpy_chk(local_238,pvVar4,uVar7,0x200);
      cVar1 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
      if (cVar1 != '\0') {
        local_258 = 0x4100202;
        local_250 = 0x820;
        local_254 = (uint)param_9;
        local_24e = local_238;
        __os_log_impl(0,PTR___os_log_default_004412f0,0,"Data was : %.*s",&local_258,0x12);
      }
    }
  }
  uVar6 = _objc_alloc(&_OBJC_CLASS___NSData);
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"initWithBytes:length:",pvVar4,uVar7);
  _free(pvVar4);
  uVar3 = __AMRestoreErrorForIOReturn(iVar2,0x7d9);
  (**(code **)(param_13 + 0x10))(param_13,uVar3,uVar6,uVar5);
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

