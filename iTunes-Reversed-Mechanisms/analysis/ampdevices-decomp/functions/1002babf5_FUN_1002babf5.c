// name: FUN_1002babf5
// address: 1002babf5

undefined8 FUN_1002babf5(long param_1,int param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (((((param_2 == 0) && (lVar3 = FUN_100242590(), lVar3 != 0)) &&
       (cVar1 = FUN_100474f55(lVar3), cVar1 != '\0')) &&
      ((*(long *)(param_1 + 8) == 0 || ((*(byte *)(*(long *)(param_1 + 8) + 0xc5) & 4) == 0)))) &&
     (lVar4 = FUN_1002ba707(lVar3), lVar4 == *param_3)) {
    uVar2 = FUN_1004744bf(lVar3,0);
    cVar1 = FUN_100474d03(lVar3);
    if ((((cVar1 == '\0') && ((*(byte *)(lVar3 + 0xc4) & 0x80) == 0)) ||
        ((cVar1 = FUN_100474d03(lVar3), cVar1 != '\0' && ((char)param_3[1] != '\0')))) ||
       ((((uVar2 >> 0x16 & 1) != 0 && (*(char *)((long)param_3 + 9) != '\0')) ||
        (((uVar2 >> 0x17 & 1) != 0 && (*(char *)((long)param_3 + 10) != '\0')))))) {
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) + 1;
    }
  }
  return 0;
}

