// name: FUN_1002c2fd4
// address: 1002c2fd4

undefined8 FUN_1002c2fd4(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if ((*(byte *)(lVar1 + 0xc2) & 1) != 0) {
    cVar2 = FUN_1002bd328(lVar1);
    if (cVar2 != '\0') {
      if ((*(byte *)(lVar1 + 0xc3) & 4) != 0) {
        cVar2 = FUN_1002c3055(*(undefined8 *)(param_1 + 0x10));
        if (cVar2 != '\0') goto LAB_1002c3015;
      }
      **(undefined1 **)(param_1 + 8) = 1;
    }
  }
LAB_1002c3015:
  uVar3 = 0x2349;
  if (**(char **)(param_1 + 8) == '\0') {
    uVar3 = 0;
  }
  return uVar3;
}

