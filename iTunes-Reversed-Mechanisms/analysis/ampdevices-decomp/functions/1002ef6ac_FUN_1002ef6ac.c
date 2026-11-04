// name: FUN_1002ef6ac
// address: 1002ef6ac

undefined8 FUN_1002ef6ac(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_4);
  lVar2 = FUN_1002f1664(*(undefined8 *)(param_3 + 0x30),uVar1);
  if ((lVar2 == 0) || (uVar1 = 1, *(ulong *)(param_3 + 0x28) <= (ulong)*(uint *)(lVar2 + 0x18))) {
    uVar1 = 0;
  }
  return uVar1;
}

