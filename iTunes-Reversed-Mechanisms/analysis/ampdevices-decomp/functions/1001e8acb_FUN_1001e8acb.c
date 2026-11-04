// name: FUN_1001e8acb
// address: 1001e8acb

int FUN_1001e8acb(long *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  bool bVar8;
  
  if (param_1 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_1006c1355(uVar7);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  for (plVar6 = (long *)*param_1; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    uVar2 = *(uint *)(plVar6 + 1);
    if ((uVar2 & 1) == 0) {
      LOCK();
      bVar8 = uVar2 == *(uint *)(plVar6 + 1);
      if (bVar8) {
        *(uint *)(plVar6 + 1) = uVar2 | 1;
      }
      UNLOCK();
      if (bVar8) goto LAB_1001e8b5a;
    }
  }
  iVar5 = 0x18;
  if ((int)param_1[1] != 0) {
    iVar5 = (int)param_1[1];
  }
  plVar6 = (long *)FUN_1001c6429(iVar5);
  if (plVar6 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_1006c12df(uVar7);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  if ((code *)param_1[2] == (code *)0x0) {
LAB_1001e8b48:
    LOCK();
    *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) | 1;
    UNLOCK();
    do {
      lVar3 = *param_1;
      *plVar6 = lVar3;
      LOCK();
      lVar1 = *param_1;
      if (lVar3 == lVar1) {
        *param_1 = (long)plVar6;
      }
      UNLOCK();
    } while (lVar3 != lVar1);
LAB_1001e8b5a:
    iVar5 = 0;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = plVar6;
    }
  }
  else {
    iVar5 = (*(code *)param_1[2])(0x696e6974,plVar6,param_1[3]);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) goto LAB_1001e8b48;
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        FUN_1006c1273(iVar5,uVar7);
      }
    }
    FUN_1001c64c1(plVar6);
  }
  return iVar5;
}

