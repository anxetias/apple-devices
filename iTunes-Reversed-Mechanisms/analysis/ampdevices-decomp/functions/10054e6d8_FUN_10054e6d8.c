// name: FUN_10054e6d8
// address: 10054e6d8

int FUN_10054e6d8(long param_1,int param_2,long param_3,undefined4 param_4,long param_5,
                 undefined8 param_6,byte *param_7,uint param_8,undefined4 *param_9)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_64;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_64 = 0;
  iVar3 = -0x32;
  if (param_2 < 0x48545450) {
    if ((param_2 != 0x44574e4c) && (param_2 != 0x46494c45)) goto LAB_10054ea2f;
LAB_10054e75b:
    local_60 = param_1;
    if (((param_8 & 4) == 0) && (iVar3 = FUN_10054d680(param_2,param_3,&local_64), iVar3 != 0))
    goto LAB_10054ea2f;
    lVar6 = local_60;
    uVar4 = 0;
    if (param_2 < 0x48545450) {
      if (param_2 == 0x44574e4c) {
        uVar4 = 0x1bd;
      }
      else if (param_2 == 0x46494c45) {
LAB_10054e82c:
        uVar4 = 0x11bd;
      }
    }
    else if (param_2 == 0x48545450) {
      uVar4 = 0x110c;
    }
    else if (param_2 == 0x4d46494c) goto LAB_10054e82c;
    *param_9 = uVar4;
    lVar1 = local_60 + 0x2b34;
    FUN_10054d80c(param_2);
    FUN_10054d80c(param_2,param_6);
    if (param_5 != 0) {
      if ((*(long *)(lVar6 + 0x38) != 0) ||
         (iVar3 = FUN_100548d34(0,lVar6,param_2,param_3,0,1), lVar6 = local_60, iVar3 == 0)) {
        uVar7 = (param_8 & 8) << 4 | 0x40;
        if (param_7 == (byte *)0x0) {
          uVar7 = 0;
        }
        iVar3 = FUN_100549f1e(lVar6,0,param_2,param_3,
                              uVar7 | (param_8 & 0x10) << 5 |
                                      (param_8 & 4) << 6 |
                                      (param_8 & 2) * 4 + (uint)((param_8 & 0x20) == 0) * 2 | 0x10,0
                              ,0);
        lVar6 = local_60;
        if ((iVar3 == 0) || (iVar3 == -0x80)) {
          FUN_1003aeba1(local_60 + 0x14d4,param_5);
          FUN_1003aee51(lVar1,param_6);
          if (param_7 != (byte *)0x0) {
            uVar7 = *(uint *)(lVar6 + 0x617c);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(param_7 + 0xc) = *(undefined8 *)(lVar6 + 0x6188);
              *param_7 = *param_7 | 1;
              *(undefined8 *)(lVar6 + 0x6188) = 0;
              uVar7 = *(uint *)(lVar6 + 0x617c);
            }
            if ((uVar7 & 0x40) != 0) {
              *(undefined8 *)(param_7 + 0x14) = *(undefined8 *)(lVar6 + 0x6190);
              *param_7 = *param_7 | 0x40;
              *(undefined8 *)(lVar6 + 0x6190) = 0;
              uVar7 = *(uint *)(lVar6 + 0x617c);
            }
            if ((uVar7 & 4) != 0) {
              *(undefined8 *)(param_7 + 0x1c) = *(undefined8 *)(lVar6 + 0x6198);
              *param_7 = *param_7 | 4;
              *(undefined8 *)(lVar6 + 0x6198) = 0;
            }
            if (*(long *)(lVar6 + 0x6180) != 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "mTrackInfoVar.chapterData == nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              lVar6 = local_60;
            }
            if (*(long *)(lVar6 + 0x6410) != 0) {
              uVar5 = FUN_1001757f8();
              *(undefined8 *)(param_7 + 4) = uVar5;
              *param_7 = *param_7 | 2;
              lVar6 = local_60;
            }
          }
          FUN_10054d85c(lVar6,param_5,param_6);
        }
      }
      goto LAB_10054ea2f;
    }
  }
  else {
    if ((param_2 != 0x48545450) && (param_2 != 0x53485244)) {
      if (param_2 != 0x4d46494c) goto LAB_10054ea2f;
      goto LAB_10054e75b;
    }
    if (*(int *)(param_3 + 0x2c) == 0) goto LAB_10054ea2f;
    uVar4 = 0;
    iVar3 = FUN_10054e5dc(param_3 + 0x2c,param_4,&local_64,0);
    if (iVar3 != 0) goto LAB_10054ea2f;
    if ((param_2 == 0x48545450) || (param_2 == 0x53485244)) {
      uVar4 = 0x110c;
    }
    else if (param_2 == 0x4d46494c) {
      uVar4 = 0x11bd;
    }
    *param_9 = uVar4;
    FUN_10054d80c(param_2,param_6);
  }
  iVar3 = 0;
LAB_10054ea2f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

