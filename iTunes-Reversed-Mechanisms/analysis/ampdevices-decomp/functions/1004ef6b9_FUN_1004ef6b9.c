// name: FUN_1004ef6b9
// address: 1004ef6b9

void FUN_1004ef6b9(long param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 local_440;
  undefined2 uStack_43c;
  undefined2 uStack_43a;
  undefined2 uStack_438;
  undefined4 uStack_436;
  undefined2 uStack_432;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_448._0_4_ = 0x8220202;
      local_448._4_4_ = 0x7ab58c;
      local_440 = 1;
      uStack_43c = 0x822;
      uStack_43a = 0xd710;
      uStack_438 = 0x7a;
      uStack_436 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_448._0_4_ = 0x8220202;
        local_448._4_4_ = 0x7a0a90;
        local_440 = 1;
        uStack_43c = 0x822;
        uStack_43a = 0xd2b2;
        uStack_438 = 0x7a;
        uStack_436 = 1;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1004efb73;
    }
  }
  if (*(char *)(param_1 + 0x37d) == '\0') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_448._0_4_ = 0x8220202;
      local_448._4_4_ = 0x7a0a90;
      local_440 = 1;
      uStack_43c = 0x822;
      uStack_43a = 0x6d13;
      uStack_438 = 0x7d;
      uStack_436 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004efb73;
  }
  FUN_1004e17a4(param_1);
  if (param_2 == '\0') {
    cVar4 = FUN_1001ee068();
    if (cVar4 == '\0') {
      lVar10 = FUN_1005056bf(param_1);
      if (lVar10 != 0) {
        FUN_100526a8d(param_1,lVar10);
        FUN_10017060f(lVar10);
      }
    }
    else {
      local_458 = 0;
      uStack_450 = 0;
      iVar5 = FUN_1001e96d3(&local_458,0,0);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          plVar9 = operator_new(0x18);
          plVar1 = (long *)(param_1 + 0x15988);
          plVar9[2] = (long)&local_458;
          plVar9[1] = (long)plVar1;
          lVar10 = *plVar1;
          *plVar9 = lVar10;
          *(long **)(lVar10 + 8) = plVar9;
          *plVar1 = (long)plVar9;
          *(long *)(param_1 + 0x15998) = *(long *)(param_1 + 0x15998) + 1;
          if (*(char *)(param_1 + 0x15980) == '\0') goto LAB_1004ef750;
          goto LAB_1004ef9d6;
        }
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          uStack_43a = (undefined2)iVar5;
          uStack_438 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1004efbca:
          uStack_43c = 0x400;
          local_440 = 1;
          local_448._4_4_ = 0x7a0a90;
          local_448._0_4_ = 0x8220202;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_448,0x12);
        }
      }
    }
  }
  else {
    local_458 = 0;
    uStack_450 = 0;
    if (*(char *)(param_1 + 0x15980) == '\0') {
LAB_1004ef750:
      FUN_1004e17a4(param_1);
      *(undefined1 *)(param_1 + 0x15980) = 1;
      uVar7 = FUN_100505716();
      uVar6 = *(undefined8 *)(param_1 + 0x7168);
      local_448._0_4_ = 3 - (uint)(*(char *)(param_1 + 0x37e) == '\0');
      uVar8 = FUN_1001705fc(uVar7);
      local_440 = (undefined4)uVar8;
      uStack_43c = (undefined2)((ulong)uVar8 >> 0x20);
      uStack_43a = (undefined2)((ulong)uVar8 >> 0x30);
      iVar5 = FUN_1005b9808(uVar6,0x16,&local_448,FUN_100527184,param_1);
      if (iVar5 == 0) {
        FUN_10017060f(uVar7);
        if (param_2 == '\0') {
LAB_1004ef9d6:
          iVar5 = FUN_1001e9afc(&local_458);
          if (iVar5 != -0x80) {
            if (iVar5 == 0) goto LAB_1004ef9f7;
            uVar6 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            if (cVar4 != '\0') {
              uStack_43a = (undefined2)iVar5;
              uStack_438 = (undefined2)((uint)iVar5 >> 0x10);
              goto LAB_1004efbca;
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x15980) = 0;
        FUN_1004e1e68(param_1);
        FUN_10017060f(uVar7);
        if (param_2 == '\0') {
          plVar1 = (long *)(param_1 + 0x15988);
          local_448._0_4_ = (int)&local_448;
          uStack_43c = (undefined2)((ulong)&local_448 >> 0x20);
          uStack_43a = (undefined2)((ulong)&local_448 >> 0x30);
          uStack_438 = 0;
          uStack_436 = 0;
          uStack_432 = 0;
          plVar9 = &local_448;
          if (*(long **)(param_1 + 0x15990) != plVar1) {
            lVar10 = 0;
            plVar12 = *(long **)(param_1 + 0x15990);
            do {
              plVar11 = (long *)plVar12[1];
              if ((undefined8 *)plVar12[2] == &local_458) {
                if (plVar11 == plVar1) {
                  bVar14 = true;
                }
                else {
                  do {
                    bVar14 = (undefined8 *)plVar11[2] == &local_458;
                    if (!bVar14) break;
                    plVar11 = (long *)plVar11[1];
                  } while (plVar11 != plVar1);
                }
                if (plVar12 != plVar11) {
                  plVar2 = (long *)*plVar11;
                  if (&local_448 != plVar1) {
                    lVar13 = 1;
                    for (plVar3 = plVar12; plVar2 != plVar3; plVar3 = (long *)plVar3[1]) {
                      lVar13 = lVar13 + 1;
                    }
                    *(long *)(param_1 + 0x15998) = *(long *)(param_1 + 0x15998) - lVar13;
                    lVar10 = lVar10 + lVar13;
                    uStack_438 = (undefined2)lVar10;
                    uStack_436 = (undefined4)((ulong)lVar10 >> 0x10);
                    uStack_432 = (undefined2)((ulong)lVar10 >> 0x30);
                  }
                  plVar3 = (long *)plVar2[1];
                  lVar13 = *plVar12;
                  *(long **)(lVar13 + 8) = plVar3;
                  *plVar3 = lVar13;
                  plVar9[1] = (long)plVar12;
                  *plVar12 = (long)plVar9;
                  plVar2[1] = (long)&local_448;
                  plVar9 = plVar2;
                }
                if (!bVar14) {
                  plVar11 = (long *)plVar11[1];
                }
              }
              plVar12 = plVar11;
            } while (plVar11 != plVar1);
          }
          local_440 = (int)local_448;
          local_448 = plVar9;
          FUN_1005090da(&local_448);
LAB_1004ef9f7:
          FUN_1001e9bb5(&local_458);
        }
      }
    }
  }
  FUN_1004e1e68(param_1);
LAB_1004efb73:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

