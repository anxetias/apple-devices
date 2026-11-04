// name: FUN_10029a1c1
// address: 10029a1c1

int FUN_10029a1c1(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = -0x27;
  if (*(ulong *)(param_1 + 0xd60) < *(ulong *)(param_1 + 0xd68)) {
    plVar1 = (long *)(param_1 + 0xcc0);
    iVar6 = 0;
    lVar2 = 0;
LAB_10029a22f:
    local_60 = lVar2;
    *(undefined8 *)(param_1 + 0xcc0) = 4;
    iVar5 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xa8))
                      (*(long **)(param_1 + 0xca8),plVar1,(uint *)(param_1 + 0xcc8));
    if (iVar5 == 0) {
      if (*plVar1 == 4) {
        local_60 = local_60 + 4;
        bVar11 = true;
        do {
          uVar7 = *(uint *)(param_1 + 0xcc8);
          uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          if (0xffdfffff < uVar10) {
            FUN_10026b6a9(uVar10,*(undefined8 *)(param_1 + 0xcd8));
            iVar5 = FUN_10026b3e0(*(long *)(param_1 + 0xcd8),*(long *)(param_1 + 0xcd8) + 0x10);
            if (iVar5 == 0) {
              lVar2 = *(long *)(param_1 + 0xcd8);
              cVar4 = FUN_100271d6f(lVar2 + 0x10,param_1 + 0xce4);
              if (cVar4 != '\0') goto LAB_10029a33a;
            }
          }
          uVar10 = *(uint *)(param_1 + 0xccc);
          *(uint *)(param_1 + 0xccc) = uVar10 + 1;
          if (0x10000 < uVar10) {
            iVar5 = -0x32;
            goto LAB_10029a424;
          }
          if (bVar11) {
            FUN_100270a1c(*(undefined8 *)(param_1 + 0xcd8));
          }
          *(uint *)(param_1 + 0xcc8) = uVar7 >> 8;
          *(undefined8 *)(param_1 + 0xcc0) = 1;
          iVar5 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xa8))
                            (*(long **)(param_1 + 0xca8),plVar1,param_1 + 0xccb);
          if (iVar5 != 0) {
            if (iVar5 == -0x80) goto LAB_10029a410;
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            goto joined_r0x00010029a52f;
          }
          if (*plVar1 != 1) break;
          local_60 = local_60 + 1;
          bVar11 = false;
        } while( true );
      }
      goto LAB_10029a431;
    }
    if (iVar5 == -0x80) {
LAB_10029a424:
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if (iVar5 != -0x27) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar5;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        uVar9 = 0;
      }
    }
    goto LAB_10029a437;
  }
  local_60 = 0;
  uVar9 = 0;
  iVar6 = 0;
LAB_10029a437:
  *(long *)(param_1 + 0xd60) = *(long *)(param_1 + 0xd60) + uVar9;
  *(int *)(param_1 + 0xd30) = *(int *)(param_1 + 0xd30) + 1;
  *(long *)(param_1 + 0xd48) = *(long *)(param_1 + 0xd48) + local_60;
  iVar3 = iVar5;
  if (iVar5 == 0) {
    iVar3 = iVar6;
  }
  if (iVar6 == 0) {
    iVar3 = iVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_10029a33a:
  *(ulong *)(param_1 + 0xcc0) = (ulong)*(uint *)(lVar2 + 0x24);
  iVar5 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xa8))
                    (*(long **)(param_1 + 0xca8),plVar1,*(undefined8 *)(lVar2 + 0x50));
  if (iVar5 != 0) {
    if (iVar5 != -0x80) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
joined_r0x00010029a52f:
      if (cVar4 != '\0') {
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        local_4a = iVar5;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
LAB_10029a410:
    uVar9 = 0;
    goto LAB_10029a437;
  }
  uVar9 = *(ulong *)(param_1 + 0xcc0);
  if (uVar9 != *(uint *)(*(long *)(param_1 + 0xcd8) + 0x24)) goto LAB_10029a431;
  iVar6 = FUN_10026b7c2(*(long *)(param_1 + 0xcd8),param_2);
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x6060) = 10;
    uVar7 = *(uint *)(*(long *)(param_1 + 0xcd8) + 0x80);
    iVar6 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x6060) != 0) {
      *(int *)(param_1 + 0x6060) = *(int *)(param_1 + 0x6060) + -1;
      lVar2 = uVar9 + local_60;
      if (*(ulong *)(param_1 + 0xd68) <= *(ulong *)(param_1 + 0xd60)) goto code_r0x00010029a3cc;
      goto LAB_10029a22f;
    }
    uVar7 = 0;
  }
  local_60 = uVar9 + local_60;
  uVar9 = (ulong)uVar7;
  iVar5 = 0;
  goto LAB_10029a437;
code_r0x00010029a3cc:
  local_60 = uVar9 + local_60;
LAB_10029a431:
  uVar9 = 0;
  iVar5 = -0x27;
  goto LAB_10029a437;
}

