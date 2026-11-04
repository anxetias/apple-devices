// rea decompile_all
// name: __AMRUSBDeviceSendDeviceRequestTO
// address: 0xe8a2c
// body: available
// range: 0xe8a2c-0xe8b95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMRUSBDeviceSendDeviceRequestTO
          (undefined8 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,uint param_6,undefined2 param_7,undefined2 param_8,undefined8 param_9,
          undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  local_88 = 0;
  local_78 = 0x2020000000;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0x2020000000;
  local_50 = param_9;
  local_80 = &local_88;
  local_60 = &local_68;
  local_48 = param_1;
  local_40 = param_5;
  local_3c = param_4;
  local_38 = param_3;
  local_34 = param_6;
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSData);
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar2,"initWithBytesNoCopy:length:freeWhenDone:",param_9,param_8,0);
  local_c0 = PTR___NSConcreteStackBlock_004412a8;
  local_b8 = 0xc2000000;
  local_b0 = ____AMRUSBDeviceSendDeviceRequestTO_block_invoke;
  local_a8 = &___block_descriptor_50_e8_32r40r_e31_v28__0i8__NSData_12__NSError_20l;
  local_90 = param_8;
  local_a0 = &local_88;
  local_98 = &local_68;
  (*(code *)PTR__objc_msgSend_00441098)
            (local_48,
             "sendDeviceRequestTO:direction:requestType:recipient:request:value:length:data:noDataTO:completionTO:withReply:"
             ,param_2,(undefined1)local_38,(undefined1)local_3c,(undefined1)local_40,local_34 & 0xff
             ,param_7,param_8,uVar2,param_10,param_11,&local_c0);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  uVar1 = *(undefined4 *)(local_80 + 3);
  __Block_object_dispose(&local_68,8);
  __Block_object_dispose(&local_88,8);
  return uVar1;
}

