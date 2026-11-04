// name: FUN_1004cf4a5
// address: 1004cf4a5

undefined4 FUN_1004cf4a5(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long local_50;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar2 = 0xffffffd5;
  if (*(long *)(param_1 + 0x98) != 0) {
    local_40 = param_3;
    local_38 = param_2;
    iVar1 = FUN_1002b3f68(param_1,&local_50,&local_44);
    if ((local_44 != 0 && local_50 != 0) && iVar1 == 0) {
      uVar2 = FUN_100535f81(local_50,local_44,(int)*(short *)(param_1 + 0xa8),
                            (int)*(short *)(param_1 + 0xaa),local_38,local_40,param_4);
    }
  }
  return uVar2;
}

