// name: FUN_1001eada7
// address: 1001eada7

long FUN_1001eada7(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3720(uVar3);
    }
    FUN_1001782e9(0,1);
    return 0;
  }
  puVar4 = &DAT_1008a2a68;
  if ((undefined *)param_1[2] != (undefined *)0x0) {
    puVar4 = (undefined *)param_1[2];
  }
  FUN_1001e9de0(puVar4);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    iVar2 = FUN_1001ea9a5(lVar5,param_1);
    if (iVar2 == 0) goto LAB_1001eae09;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c36b4(iVar2,uVar3);
    }
  }
  lVar5 = 0;
LAB_1001eae09:
  FUN_1001e9eb9(puVar4);
  return lVar5;
}

