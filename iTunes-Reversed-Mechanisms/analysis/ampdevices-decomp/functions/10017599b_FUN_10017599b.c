// name: FUN_10017599b
// address: 10017599b

int FUN_10017599b(int *param_1,int param_2,char param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  int local_34;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_10068208c(uVar6);
    }
LAB_100175a4b:
    FUN_1001782e9(0,0);
    iVar8 = -0x32;
  }
  else {
    param_2 = param_2 + (uint)(param_2 == 0);
    if (param_3 == '\0') {
      piVar7 = param_1 + 6;
    }
    else {
      piVar7 = param_1 + 8;
      if ((*(long *)(param_1 + 8) == 0) && (sVar3 = FUN_10015b468(piVar7), sVar3 != 0)) {
        if (sVar3 == -0x80) {
          return -0x80;
        }
        iVar8 = (int)sVar3;
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 == '\0') {
          return iVar8;
        }
        FUN_100681ed2(iVar8,uVar6);
        return iVar8;
      }
    }
    uVar6 = *(undefined8 *)piVar7;
    sVar3 = FUN_10015b9d1(uVar6,0,0x63686170);
    if (0 < sVar3) {
      iVar8 = FUN_10015bb96(uVar6,0,0x63686170,(int)sVar3,&local_34);
      if (iVar8 == 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          FUN_100682016(uVar6);
        }
        goto LAB_100175a4b;
      }
      if (param_2 <= local_34) {
        do {
          iVar5 = FUN_10015bb96(uVar6,0,0x63686170,(int)sVar3,&local_34);
          if (local_34 < param_2) {
            sVar3 = sVar3 + 1;
            goto LAB_100175ae5;
          }
          if (local_34 == param_2) {
            if (param_4 == (int *)0x0) {
              return 0;
            }
            goto LAB_100175c60;
          }
          bVar1 = 1 < sVar3;
          sVar3 = sVar3 + -1;
        } while (bVar1);
      }
    }
    sVar3 = 0;
LAB_100175ae5:
    if (param_3 == '\0') {
      iVar8 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(undefined1 *)((long)param_1 + 0x4e) = 0;
      sVar4 = FUN_10015c160(uVar6,0,0x63686170,param_2,(int)sVar3,0,0,param_1 + 0x12);
      if (sVar4 == 0) {
        param_1[0x11] = param_2;
        *(undefined1 *)(param_1 + 0x10) = 1;
        *(short *)(param_1 + 0x13) = sVar3;
        *(undefined1 *)((long)param_1 + 0x4e) = 0;
        param_1[0x14] = -1;
        param_1[5] = param_1[5] + 1;
        *(undefined1 *)(param_1 + 4) = 1;
        if (param_4 != (int *)0x0) {
          iVar5 = param_1[0x12];
LAB_100175c60:
          iVar8 = 0;
          *param_4 = iVar5;
        }
      }
      else {
        iVar8 = -0x80;
        if (sVar4 != -0x80) {
          iVar8 = (int)sVar4;
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            FUN_100681faa(iVar8,uVar6);
          }
        }
      }
    }
    else {
      sVar3 = FUN_10015c160(uVar6,0,0x63686170,param_2,(int)sVar3,0,0,param_4);
      iVar8 = (int)sVar3;
      if ((sVar3 != 0) && (sVar3 != -0x80)) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          FUN_100681f3e(iVar8,uVar6);
        }
      }
    }
  }
  return iVar8;
}

