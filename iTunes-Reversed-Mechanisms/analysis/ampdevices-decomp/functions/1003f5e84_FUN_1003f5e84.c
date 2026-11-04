// name: FUN_1003f5e84
// address: 1003f5e84

void FUN_1003f5e84(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 in_RAX;
  char local_11;
  
  local_11 = (char)((ulong)in_RAX >> 0x38);
  iVar1 = FUN_1003f32d1(param_1,param_3,param_4,param_5,param_6,param_7,param_8,&local_11);
  if ((iVar1 == 0) && (local_11 != '\0')) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  }
  return;
}

