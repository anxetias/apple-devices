// name: FUN_10019da1d
// address: 10019da1d

void FUN_10019da1d(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  
  if (param_2 == 0x10) {
    if (((*(byte *)((long)param_3 + 0x44) & 0x80) != 0) &&
       (*(char *)((long)param_3 + 0x101) == '\0')) {
      FUN_10019eb01(param_3);
    }
    uVar2 = 0;
LAB_10019db16:
    FUN_10019e085(param_3,1,uVar2);
    return;
  }
  if (param_2 == 8) {
    uVar2 = FUN_10019b6f4(param_1);
    goto LAB_10019db16;
  }
  if (param_2 != 2) {
    return;
  }
  if (*(char *)(param_3 + 8) == '\0') {
    *(undefined1 *)(param_3 + 8) = 1;
  }
  if ((param_3[0x26] != 0) && (*(int *)(param_3[0x26] + 4) == 0)) {
    dVar10 = (double)_CFAbsoluteTimeGetCurrent();
    *(int *)(param_3[0x26] + 4) =
         (int)(long)(dVar10 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
  }
  if (*(char *)(param_3 + 0x28) == '\0') {
    if (param_1 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10069acbc(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    *(bool *)(param_3 + 0x28) = param_1 != 0;
  }
  if ((char)*(uint *)((long)param_3 + 0x44) < '\0') {
    if ((*(char *)((long)param_3 + 0x101) == '\0') &&
       (FUN_10019eb01(param_3), *(char *)((long)param_3 + 0x101) == '\0')) {
      return;
    }
    lVar7 = param_3[0x21];
    if (lVar7 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10069ad32(uVar4);
      }
      FUN_1001782e9(0,0);
      lVar7 = param_3[0x21];
    }
    *(undefined1 *)(param_3 + 0x23) = 0;
    lVar7 = FUN_100173160(*param_3,lVar7,param_3[0x22]);
    if (lVar7 < 1) {
      return;
    }
    lVar5 = param_3[0x17] + lVar7;
    param_3[0x17] = lVar5;
    if ((code *)param_3[0x19] != (code *)0x0) {
      (*(code *)param_3[0x19])(0x64617461,param_3[0x21],lVar7,param_3 + 0x1a);
      lVar5 = param_3[0x17];
    }
    lVar7 = param_3[0x16];
    if (lVar7 == -1) {
      lVar7 = -1;
    }
    else if (lVar7 < lVar5) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10069ada8(uVar4);
      }
      FUN_1001782e9(0,0);
      lVar7 = param_3[0x16];
      lVar5 = param_3[0x17];
    }
    if (lVar5 != lVar7) {
      return;
    }
LAB_10019dd05:
    uVar4 = 1;
  }
  else {
    if ((*(uint *)((long)param_3 + 0x44) & 1) != 0) {
      lVar7 = param_3[0xb];
      if (lVar7 == 0) {
        lVar7 = FUN_1001731d8(*param_3,*(undefined8 *)
                                        PTR__kCFStreamPropertyHTTPResponseHeader_10082d668);
        if (lVar7 != 0) {
          lVar5 = FUN_100171a6c(lVar7,PTR_cf_Content_Length_10083c4d0);
          if (lVar5 != 0) {
            iVar3 = FUN_1001740d5(lVar5);
            lVar6 = (long)iVar3;
            param_3[0x16] = lVar6;
            if (iVar3 < 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                FUN_10069ae1e(uVar4);
              }
              FUN_1001782e9(0,0);
              lVar6 = param_3[0x16];
            }
            if (lVar6 < 0) {
              param_3[0x16] = 0xffffffffffffffff;
            }
            FUN_10017060f(lVar5);
          }
          FUN_10017060f(lVar7);
        }
        lVar7 = FUN_100170ea9(DAT_1008c4d90,0);
        param_3[0xb] = lVar7;
        if (lVar7 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069af80(uVar4);
          }
          FUN_1001782e9(0,0);
          uVar4 = 1;
          uVar8 = 0xffffff94;
          goto LAB_10019dd0f;
        }
        uVar9 = param_3[0x16];
        if (-1 < (long)uVar9) {
          if (0x1f3fffff < uVar9) {
            uVar4 = FUN_1001cc310(lVar7);
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_10069ae94(uVar4);
            }
            FUN_1001782e9(0,0);
            lVar7 = param_3[0xb];
            uVar9 = param_3[0x16];
          }
          FUN_10017103d(lVar7,uVar9);
          lVar7 = param_3[0xb];
        }
      }
      if (param_3[0x16] == -1) {
        lVar5 = FUN_100170ef7(lVar7);
        lVar7 = param_3[0xb];
        if (lVar5 - param_3[0x17] < 0x10000) {
          FUN_10017107f(lVar7,0x10000);
          lVar7 = param_3[0xb];
        }
      }
      lVar5 = FUN_100170ef7(lVar7);
      lVar7 = param_3[0x17];
      lVar6 = FUN_100170f7f(param_3[0xb]);
      lVar7 = FUN_100173160(param_1,lVar6 + param_3[0x17],lVar5 - lVar7);
      if (lVar7 < 1) {
        return;
      }
      lVar7 = lVar7 + param_3[0x17];
      param_3[0x17] = lVar7;
      lVar5 = param_3[0x16];
      if ((lVar5 != -1) && (lVar5 < lVar7)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10069af0a(uVar4);
        }
        FUN_1001782e9(0,0);
        lVar5 = param_3[0x16];
        lVar7 = param_3[0x17];
      }
      if (lVar7 != lVar5) {
        return;
      }
      goto LAB_10019dd05;
    }
    uVar4 = 0;
  }
  uVar8 = 0;
LAB_10019dd0f:
  FUN_10019e085(param_3,uVar4,uVar8);
  return;
}

