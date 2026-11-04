// name: FUN_100182619
// address: 100182619

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100182619(int *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 in_RAX;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 local_38;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_100689968(uVar7);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  *param_2 = *param_2 + 1;
  local_38 = in_RAX;
  iVar5 = FUN_1001879bd(param_1,*(uint *)(param_2 + 0x33c) >> 5 & 1,&local_38);
  if (iVar5 != -0x80) {
    if (iVar5 != 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        FUN_100689890(iVar5,uVar7);
      }
      if (iVar5 != 0) goto LAB_1001827d1;
    }
    psVar1 = param_2 + 4;
    psVar2 = param_2 + 0x214;
    psVar3 = param_2 + 0x23c;
    do {
      while( true ) {
        do {
          iVar6 = FUN_100187bea(local_38,psVar1,psVar2,psVar3);
          if (iVar6 != 0) {
            auVar9._0_4_ = -(uint)(iVar6 == _DAT_10070e570);
            auVar9._4_4_ = -(uint)(iVar6 == _UNK_10070e574);
            auVar9._8_4_ = -(uint)(iVar6 == _UNK_10070e578);
            auVar9._12_4_ = -(uint)(iVar6 == _UNK_10070e57c);
            iVar5 = movmskps(iVar6,auVar9);
            iVar8 = 0;
            if (iVar5 == 0) {
              iVar8 = iVar6;
            }
            iVar5 = iVar8;
            if ((iVar8 != -0x80) && (iVar8 != 0)) {
              uVar7 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar7,0x10);
              iVar5 = iVar6;
              if (cVar4 != '\0') {
                FUN_1006898fc(iVar8,uVar7);
              }
            }
            goto LAB_1001827c8;
          }
          cVar4 = FUN_100182545(param_2,psVar1,psVar2,psVar3);
        } while (cVar4 == '\0');
        iVar5 = (**(code **)(param_2 + 0x340))
                          (psVar1,psVar2,psVar3,*param_2,*(undefined8 *)(param_2 + 0x344));
        if (((char)param_2[0x214] != '\0') && (*param_2 != param_2[1])) break;
LAB_10018272c:
        if (iVar5 != 0) goto LAB_1001827c8;
      }
      if (iVar5 != -0x57f) {
        if (iVar5 == 0) {
          iVar5 = FUN_100182619(psVar1,param_2);
        }
        goto LAB_10018272c;
      }
    } while ((*(byte *)(param_2 + 0x33c) & 2) != 0);
    iVar5 = -0x57f;
LAB_1001827c8:
    FUN_100187c42(local_38);
  }
LAB_1001827d1:
  *param_2 = *param_2 + -1;
  return iVar5;
}

