// name: FUN_1002b6fe1
// address: 1002b6fe1

void FUN_1002b6fe1(long param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = **(byte **)(param_1 + 0x20);
  if ((bVar1 & 1) == 0) {
    return;
  }
  **(byte **)(param_1 + 0x20) = bVar1 & 0xfd;
  **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) & 0xfb;
  **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) & 0xf7;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x18) = 0;
  FUN_1002af85d(param_1,0);
  return;
}

