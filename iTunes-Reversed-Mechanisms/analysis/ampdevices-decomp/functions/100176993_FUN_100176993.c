// name: FUN_100176993
// address: 100176993

int FUN_100176993(int *param_1,int param_2,undefined4 param_3,undefined8 *param_4,uint *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int local_34;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      FUN_100682bcc(uVar8);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  iVar9 = -0x32;
  if ((*(byte *)(param_1 + 3) & 2) != 0) {
    lVar7 = *(long *)(param_1 + 0xc);
    if (lVar7 == 0) {
      iVar4 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x706c6f63);
      if (iVar4 != 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_100682912(iVar4,uVar8);
        }
        lVar7 = 0;
        goto LAB_100176b19;
      }
      lVar7 = *(long *)(param_1 + 0xc);
    }
    psVar5 = (short *)FUN_1001773b9(lVar7,param_2 + (uint)(param_2 == 0),param_3,0);
    if ((psVar5 != (short *)0x0) && (*(long *)(param_1 + 8) != 0)) {
      lVar7 = 0;
      iVar3 = FUN_10015bc21(*(long *)(param_1 + 8),0,0x63686170,*(undefined4 *)(psVar5 + 2),0);
      iVar4 = iVar9;
      if (iVar3 == 0) goto LAB_100176b19;
      lVar6 = FUN_10015c089(*(undefined8 *)(param_1 + 8),iVar3,0x70636368,1,&local_34);
      if (lVar6 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_100682b56(uVar8);
        }
LAB_100176bcc:
        lVar7 = 0;
      }
      else {
        if (local_34 == 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            FUN_100682ae0(uVar8);
          }
          goto LAB_100176bcc;
        }
        lVar7 = 0;
        if (param_4 != (undefined8 *)0x0) {
          lVar7 = FUN_100170dc5(DAT_1008c4d90,lVar6);
          if (lVar7 == 0) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              FUN_10068297e(uVar8);
            }
            lVar7 = 0;
            FUN_1001782e9(0,0);
            iVar4 = -0x6c;
            goto LAB_100176b19;
          }
          uVar8 = FUN_1001705fc(lVar7);
          *param_4 = uVar8;
        }
        if (param_5 == (uint *)0x0) {
LAB_100176ae9:
          iVar4 = 0;
          goto LAB_100176b19;
        }
        iVar4 = FUN_10015bb96(*(undefined8 *)(param_1 + 6),0,0x63686170,(int)*psVar5,0);
        if (iVar4 == 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            FUN_100682a6a(uVar8);
          }
        }
        else {
          lVar6 = FUN_10015c089(*(undefined8 *)(param_1 + 6),iVar4,0x706c6f63,1,&local_34);
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar6 + 4);
            *param_5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18;
            goto LAB_100176ae9;
          }
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            FUN_1006829f4(uVar8);
          }
        }
      }
      FUN_1001782e9(0,0);
      iVar4 = iVar9;
      goto LAB_100176b19;
    }
  }
  lVar7 = 0;
  iVar4 = iVar9;
LAB_100176b19:
  FUN_10017060f(lVar7);
  return iVar4;
}

