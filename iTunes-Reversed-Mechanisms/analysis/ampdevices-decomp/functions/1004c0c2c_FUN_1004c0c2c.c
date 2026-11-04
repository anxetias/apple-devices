// name: FUN_1004c0c2c
// address: 1004c0c2c

undefined8 FUN_1004c0c2c(long *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)((long)param_1 + 0x1c);
  if (iVar6 == 0x53485244) {
    uVar5 = 0;
    iVar6 = 0x209;
    goto LAB_1004c0d03;
  }
  if (iVar6 == 0x48545450) {
    uVar5 = 0;
    iVar6 = 0x609;
    goto LAB_1004c0d03;
  }
  if (iVar6 != 0x46494c45) {
    uVar5 = 0x234e;
    iVar6 = 0;
    goto LAB_1004c0d03;
  }
  if (param_1[0x9e] == 0) {
    FUN_1004c3f8e(param_1);
  }
  plVar3 = (long *)param_1[0x9f];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar3 = (long *)param_1[0x9e];
  if (plVar3 == (long *)0x0) {
LAB_1004c0cc7:
    iVar7 = 0xe89;
  }
  else {
    cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x6d697861);
    iVar7 = 0x1689;
    if (cVar4 == '\0') goto LAB_1004c0cc7;
  }
  cVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  iVar6 = iVar7 + 0x2000;
  if (cVar4 != '\0') {
    iVar6 = iVar7;
  }
  uVar5 = 0;
LAB_1004c0d03:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar6;
  }
  return uVar5;
}

