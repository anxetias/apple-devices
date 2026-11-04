// name: FUN_10017019d
// address: 10017019d

void FUN_10017019d(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5
                  )

{
  undefined8 in_RAX;
  long lVar1;
  ulong uVar2;
  int local_34;
  
  local_34 = (int)((ulong)in_RAX >> 0x20);
  uVar2 = 0x300;
  if (param_3 != 0) {
    uVar2 = 0;
  }
  lVar1 = FUN_1001700d6(param_1,param_2,uVar2,param_4,&local_34);
  if ((lVar1 == 0) && (local_34 == 0x103)) {
    FUN_1001700d6(param_1,param_2,uVar2 | 0x400,param_4,&local_34);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = local_34;
  }
  return;
}

