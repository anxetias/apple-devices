// name: FUN_1002af370
// address: 1002af370

undefined8 FUN_1002af370(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
    FUN_1002af0ff(param_1);
  }
  else {
    FUN_100175848(*(undefined8 *)(*(byte **)(param_1 + 0x10) + 0xb0));
  }
  uVar2 = FUN_1001757f8(param_2);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0) = uVar2;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0x9f;
  }
  else {
    uVar1 = FUN_100176d48(param_2);
    *(uint *)(param_1 + 0x48) = (uVar1 & 2) * 0x20 + (*(uint *)(param_1 + 0x48) & 0xffffff9f) + 0x20
    ;
  }
  return 0;
}

