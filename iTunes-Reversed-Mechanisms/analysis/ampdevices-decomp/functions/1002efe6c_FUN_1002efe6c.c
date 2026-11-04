// name: FUN_1002efe6c
// address: 1002efe6c

bool FUN_1002efe6c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(param_3 + 0x20) + 0xba) != '\x01') {
    lVar3 = FUN_1002f1664(*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_4 + 8));
    return lVar3 != 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_4);
  lVar3 = FUN_1002f1664(*(undefined8 *)(param_3 + 0x30),uVar2);
  if ((lVar3 == 0) || (bVar1 = true, *(ulong *)(param_3 + 0x28) <= (ulong)*(uint *)(lVar3 + 0x18)))
  {
    bVar1 = false;
  }
  return bVar1;
}

