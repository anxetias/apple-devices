// name: FUN_1003a362a
// address: 1003a362a

ulong FUN_1003a362a(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_R15;
  ulong uVar5;
  bool bVar6;
  
  if (((*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48)) &&
      (iVar1 = *(int *)(param_1 + 0x10), iVar1 == *(int *)(param_2 + 0x10))) &&
     (*(int *)(param_1 + 0xc0) == *(int *)(param_2 + 0xc0))) {
    if (iVar1 == 4) {
      bVar6 = *(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100);
    }
    else {
      if (iVar1 == 3) {
        uVar3 = FUN_1001b83ae(*(undefined8 *)(param_1 + 0x100));
        uVar4 = FUN_1001b83ae(*(undefined8 *)(param_2 + 0x100));
        uVar5 = 0;
        cVar2 = FUN_1001df957(uVar3,uVar4,0);
        if (cVar2 != '\0') {
          uVar3 = FUN_1001b83ae(*(undefined8 *)(param_1 + 0x108));
          uVar4 = FUN_1001b83ae(*(undefined8 *)(param_2 + 0x108));
          cVar2 = FUN_1001df957(uVar3,uVar4,0);
          uVar5 = (ulong)(cVar2 != '\0');
        }
        goto LAB_1003a369f;
      }
      if (((iVar1 != 2) || (*(int *)(param_1 + 0x100) != *(int *)(param_2 + 0x100))) ||
         (*(int *)(param_1 + 0x104) != *(int *)(param_2 + 0x104))) goto LAB_1003a369c;
      bVar6 = *(char *)(param_1 + 0x108) == *(char *)(param_2 + 0x108);
    }
    uVar5 = CONCAT71((int7)((ulong)unaff_R15 >> 8),bVar6);
  }
  else {
LAB_1003a369c:
    uVar5 = 0;
  }
LAB_1003a369f:
  return uVar5 & 0xffffffff;
}

