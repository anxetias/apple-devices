// name: FUN_10015d60b
// address: 10015d60b

int FUN_10015d60b(uint param_1,long param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    puVar4 = (uint *)FUN_1001c63e1(8);
    if (puVar4 == (uint *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10066d5f9(uVar5);
      }
      goto LAB_10015d704;
    }
    *puVar4 = 0x8000000;
  }
  else {
    lVar1 = (long)param_3 + 8;
    puVar4 = (uint *)FUN_1001c63e1(lVar1);
    if (puVar4 == (uint *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10066d517(uVar5);
      }
LAB_10015d704:
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    uVar6 = (uint)lVar1;
    *puVar4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    FUN_1001c631b(param_2,puVar4 + 2,(long)param_3);
  }
  puVar4[1] = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 |
              param_1 << 0x18;
  iVar3 = FUN_10015cb08(puVar4,param_4,param_5);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10066d58d(iVar3,uVar5);
    }
  }
  return iVar3;
}

