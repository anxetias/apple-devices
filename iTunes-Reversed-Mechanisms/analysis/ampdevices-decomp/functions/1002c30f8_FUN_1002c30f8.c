// name: FUN_1002c30f8
// address: 1002c30f8

undefined8 FUN_1002c30f8(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*param_2 + 0xc2) & 1) != 0) {
    cVar1 = FUN_1002bd328();
    if (cVar1 != '\0') {
      **(undefined1 **)(param_1 + 8) = 1;
    }
  }
  uVar2 = 0x2349;
  if (**(char **)(param_1 + 8) == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

