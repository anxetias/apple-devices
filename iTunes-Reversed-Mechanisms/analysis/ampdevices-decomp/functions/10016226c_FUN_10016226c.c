// name: FUN_10016226c
// address: 10016226c

long FUN_10016226c(long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      FUN_100670819(uVar9);
    }
  }
  else {
    lVar6 = FUN_100174812(param_2);
    if (lVar6 != 0) {
      cVar4 = FUN_100172e6f(*(undefined8 *)(param_1 + 0x98),lVar6);
      if (cVar4 == '\0') {
        lVar8 = 0;
      }
      else {
        lVar7 = FUN_1001625b9(DAT_1008c4d90,param_2);
        if (lVar7 == 0) {
          local_60 = 0;
          lVar8 = 0;
          lVar3 = local_60;
        }
        else {
          local_60 = 0;
          do {
            lVar8 = FUN_100171475(*(undefined8 *)(param_1 + 0xa0),lVar7);
            lVar3 = lVar7;
            if (lVar8 != 0) break;
            uVar9 = FUN_1001747ce(lVar7);
            lVar8 = FUN_1001737f8(uVar9);
            FUN_10017060f(uVar9);
            if (lVar8 == 0) {
              lVar8 = 0;
              break;
            }
            lVar10 = FUN_100174746(lVar7);
            if (lVar10 == 0) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                FUN_10067072d(uVar9);
              }
LAB_10016255a:
              lVar8 = 0;
              FUN_1001782e9(0,0);
              break;
            }
            uVar11 = FUN_1001737f8(lVar10);
            if ((long)uVar11 <= lVar8) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "urlLength > pathLength";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            lVar12 = lVar8;
            uVar13 = uVar11;
            if (0 < lVar8 && 0 < (long)uVar11) {
              do {
                uVar1 = uVar13 - 1;
                sVar5 = FUN_10017380b(lVar10,uVar1);
                uVar11 = uVar13;
                lVar8 = lVar12;
                if ((sVar5 != 0x2f) || (lVar8 = lVar12 + -1, uVar11 = uVar1, uVar13 < 2)) break;
                bVar2 = 1 < lVar12;
                lVar12 = lVar8;
                uVar13 = uVar1;
              } while (bVar2);
            }
            uVar13 = uVar11;
            if (0 < lVar8 && 0 < (long)uVar11) {
              do {
                uVar1 = uVar11 - 1;
                sVar5 = FUN_10017380b(lVar10,uVar1);
                uVar13 = uVar11;
                if ((sVar5 == 0x2f) || (uVar13 = uVar1, uVar11 < 2)) break;
                bVar2 = 1 < lVar8;
                uVar11 = uVar1;
                lVar8 = lVar8 + -1;
              } while (bVar2);
            }
            lVar8 = FUN_100173623(DAT_1008c4d90,lVar10,0,uVar13);
            if (lVar8 == 0) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                FUN_1006706b7(uVar9);
              }
              goto LAB_10016255a;
            }
            FUN_10017060f(lVar7);
            lVar7 = FUN_1001744bd(DAT_1008c4d90,lVar8,0);
            FUN_10017060f(lVar8);
            lVar8 = 0;
            lVar3 = local_60;
          } while (lVar7 != 0);
        }
        local_60 = lVar3;
        FUN_10017060f(local_60);
      }
      FUN_10017060f(lVar6);
      goto LAB_10016257b;
    }
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      FUN_1006707a3(uVar9);
    }
  }
  lVar8 = 0;
  FUN_1001782e9(0,0);
LAB_10016257b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

