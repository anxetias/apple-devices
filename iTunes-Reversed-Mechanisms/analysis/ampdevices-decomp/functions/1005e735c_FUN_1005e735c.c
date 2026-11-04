// name: FUN_1005e735c
// address: 1005e735c

undefined8 FUN_1005e735c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_18;
  
  if ((((*(char *)(param_2 + 4) == '\x01') && (*(long *)(param_2 + 0x68a0) == 0)) &&
      (*(long *)(param_2 + 0x68a8) == 0)) &&
     (((*(long *)(param_2 + 0x68b0) == 0 && (*(long *)(param_2 + 0x6890) != 0)) &&
      ((*(char *)(*(long *)(param_2 + 0x6890) + 28000) == '\0' &&
       (lVar1 = FUN_10055ae0c(), lVar1 != 0)))))) {
    local_18 = _AMDeviceCopyDeviceIdentifier(lVar1);
    FUN_1001b7eb0(param_1,local_18);
    FUN_10016d588(&local_18);
    return param_1;
  }
  FUN_1001b7a44(param_1);
  return param_1;
}

