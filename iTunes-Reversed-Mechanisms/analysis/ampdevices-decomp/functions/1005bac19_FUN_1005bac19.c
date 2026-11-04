// name: FUN_1005bac19
// address: 1005bac19

long FUN_1005bac19(undefined8 param_1)

{
  char cVar1;
  ulong in_RAX;
  undefined8 uVar2;
  long lVar3;
  ulong local_18;
  
  local_18 = in_RAX;
  uVar2 = _CFDictionaryGetTypeID();
  lVar3 = FUN_1005ba383(param_1,0,&cf_CarrierBundleInfo,uVar2,0);
  if (lVar3 == 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      local_18 = local_18 & 0xffffffffffff0000;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceCopyValue failed to return CarrierBundleInfo",&local_18,2);
    }
  }
  return lVar3;
}

