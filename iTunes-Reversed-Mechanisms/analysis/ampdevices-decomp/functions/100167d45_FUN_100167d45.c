// name: FUN_100167d45
// address: 100167d45

undefined4 FUN_100167d45(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 in_RAX;
  undefined4 local_14;
  
  local_14 = (undefined4)((ulong)in_RAX >> 0x20);
  cVar1 = FUN_100167896(param_1,param_2,&local_14);
  if (cVar1 != '\0') {
    param_3 = local_14;
  }
  return param_3;
}

