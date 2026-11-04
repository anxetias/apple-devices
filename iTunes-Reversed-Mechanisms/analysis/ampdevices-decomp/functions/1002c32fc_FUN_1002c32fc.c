// name: FUN_1002c32fc
// address: 1002c32fc

undefined8 FUN_1002c32fc(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = *param_2;
  if ((*(byte *)(lVar1 + 0xc2) & 1) == 0) goto LAB_1002c3369;
  cVar2 = FUN_1002bcf12(lVar1,*(undefined1 *)(param_1 + 0x10));
  if (cVar2 == '\0') {
LAB_1002c333d:
    if (*(char *)(param_1 + 0x11) == '\0') goto LAB_1002c3369;
    uVar3 = FUN_1004744bf(lVar1,0);
    if ((~uVar3 & 0x10001) != 0) goto LAB_1002c3369;
    cVar2 = FUN_1002bd328(lVar1);
    if (cVar2 == '\0') goto LAB_1002c3369;
  }
  else {
    cVar2 = FUN_1002bd328(lVar1);
    if (cVar2 == '\0') goto LAB_1002c333d;
    uVar4 = FUN_100474dd0(lVar1,0);
    if ((uVar4 & 4) != 0) goto LAB_1002c333d;
  }
  **(undefined1 **)(param_1 + 8) = 1;
LAB_1002c3369:
  uVar5 = 0x2349;
  if (**(char **)(param_1 + 8) == '\0') {
    uVar5 = 0;
  }
  return uVar5;
}

