// name: FUN_1002c31d4
// address: 1002c31d4

undefined8 FUN_1002c31d4(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = *param_2;
  if ((*(byte *)(lVar1 + 0xc2) & 1) == 0) goto LAB_1002c3258;
  cVar2 = FUN_1002bcf12(lVar1,*(undefined1 *)(param_1 + 0x19));
  if (cVar2 == '\0') {
LAB_1002c322c:
    if (*(char *)(param_1 + 0x18) == '\0') goto LAB_1002c3258;
    uVar3 = FUN_1004744bf(lVar1,0);
    if ((~uVar3 & 0x10001) != 0) goto LAB_1002c3258;
    cVar2 = FUN_1002bd328(lVar1);
    if (cVar2 == '\0') goto LAB_1002c3258;
  }
  else {
    cVar2 = FUN_1002bd328(lVar1);
    if (cVar2 == '\0') goto LAB_1002c322c;
    uVar4 = FUN_100474dd0(lVar1,0);
    if ((uVar4 & 4) != 0) goto LAB_1002c322c;
    if ((*(byte *)(lVar1 + 0xc3) & 4) != 0) {
      cVar2 = FUN_1002c3055(*(undefined8 *)(param_1 + 8));
      if (cVar2 != '\0') goto LAB_1002c322c;
    }
  }
  **(undefined1 **)(param_1 + 0x10) = 1;
LAB_1002c3258:
  uVar5 = 0x2349;
  if (**(char **)(param_1 + 0x10) == '\0') {
    uVar5 = 0;
  }
  return uVar5;
}

