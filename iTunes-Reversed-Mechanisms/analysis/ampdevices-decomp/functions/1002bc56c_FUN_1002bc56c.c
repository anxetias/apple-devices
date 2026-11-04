// name: FUN_1002bc56c
// address: 1002bc56c

void FUN_1002bc56c(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  long lVar1;
  undefined4 *local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  local_28 = param_3;
  lVar1 = FUN_1002b7f7c(param_2,&local_28);
  if (lVar1 == 0) {
    local_30 = &local_28;
    lVar1 = FUN_1002bc716(param_2,&local_28,&DAT_100712240,&local_30,&local_21);
    *(ulong *)(lVar1 + 0x18) = param_4;
  }
  else {
    *(ulong *)(lVar1 + 0x18) = *(ulong *)(lVar1 + 0x18) | param_4;
  }
  return;
}

