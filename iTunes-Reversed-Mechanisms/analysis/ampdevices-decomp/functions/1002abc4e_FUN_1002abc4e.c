// name: FUN_1002abc4e
// address: 1002abc4e

void FUN_1002abc4e(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  }
  if (lVar2 == *(long *)(param_1 + 0x30)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1004eb61a(param_1,param_2,0);
  }
  FUN_1004eb21f(param_1,param_2,*(undefined1 *)(param_1 + 0x14d00),uVar1,
                *(undefined2 *)(param_1 + 0x14df6),*(undefined1 *)(param_1 + 0x14dc9),0,0,param_3);
  return;
}

