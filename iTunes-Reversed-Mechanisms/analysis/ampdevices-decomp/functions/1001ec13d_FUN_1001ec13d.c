// name: FUN_1001ec13d
// address: 1001ec13d

void FUN_1001ec13d(int *param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 local_80;
  uint *local_78;
  uint *local_70;
  uint local_64;
  int *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = 0;
  if (param_1 == (int *)0x0) {
LAB_1001ec256:
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      FUN_1006c4117(uVar8);
    }
    FUN_1001782e9(0,0);
    goto LAB_1001ec817;
  }
  local_60 = param_1;
  if (*param_1 != 0x776b7470) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      FUN_1006c3f5d(uVar8);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_1001ec256;
  }
  piVar12 = local_60;
  if (*(code **)(local_60 + 0x40) == (code *)0x0) {
LAB_1001ec281:
    piVar1 = piVar12 + 2;
    local_78 = (uint *)(piVar12 + 0x48);
    local_70 = (uint *)(piVar12 + 0x3a);
    local_64 = 0;
    piVar13 = piVar12;
    do {
      iVar5 = FUN_1001e890b(piVar1,piVar13[0x3e]);
      iVar6 = FUN_1001e85e3(piVar1);
      if ((iVar6 != -0x80) && (iVar6 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      lVar10 = FUN_1001eab1e(piVar12 + 0x28);
      if (lVar10 == 0) {
LAB_1001ec3ae:
        bVar3 = true;
        if ((char)piVar13[0x49] == '\0') {
          uVar7 = piVar13[0x3a];
          if (uVar7 <= (uint)piVar13[0x3c]) {
            if ((iVar5 == 0) || (lVar10 = FUN_1001eaad3(piVar12 + 0x28), lVar10 != 0))
            goto LAB_1001ec52d;
            uVar7 = *local_70;
          }
          if (uVar7 < 2 && *local_78 != 0) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "(workThreadPool->numToDo == 0) || workThreadPool->numThreads >= 2";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar7 = *local_70;
            piVar13 = local_60;
          }
          puVar11 = local_70;
          if ((uint)piVar13[0x3b] < uVar7) goto LAB_1001ec526;
        }
      }
      else {
        if ((*(long *)(lVar10 + 0x40) != 0) || (*(long *)(lVar10 + 0x30) != 0)) {
          iVar6 = FUN_1001e8671(piVar1);
          if ((iVar6 != -0x80) && (iVar6 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          *(undefined8 *)(lVar10 + 0x50) = local_80;
          plVar2 = *(long **)(lVar10 + 0x30);
          if (plVar2 == (long *)0x0) {
            (**(code **)(lVar10 + 0x40))(lVar10,*(undefined8 *)(lVar10 + 0x48));
          }
          else {
            local_58 = (undefined4)lVar10;
            uStack_54 = (undefined4)((ulong)lVar10 >> 0x20);
            (**(code **)(*plVar2 + 0x30))(plVar2,&local_58);
          }
          iVar6 = FUN_1001e85e3(piVar1);
          if ((iVar6 != -0x80) && (iVar6 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          *local_78 = *local_78 - 1;
          piVar13 = local_60;
          goto LAB_1001ec3ae;
        }
        if ((char)piVar13[0x49] == '\0') {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            local_4a = "workThreadPool->deleting";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          piVar13 = local_60;
        }
        if (*(long *)(piVar13 + 0x44) != 0) {
          iVar5 = FUN_1001e8671(piVar1);
          if ((iVar5 != -0x80) && (iVar5 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          (**(code **)(local_60 + 0x44))(local_80,*(undefined8 *)(local_60 + 0x46));
          iVar5 = FUN_1001e85e3(piVar1);
          if ((iVar5 != -0x80) && (iVar5 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        *local_70 = *local_70 - 1;
        if ((*local_70 == 0) && (local_64 = local_64 & 0xff, (char)local_60[0x49] != '\0')) {
          local_64 = 1;
        }
        uVar7 = *local_78;
        puVar11 = local_78;
LAB_1001ec526:
        *puVar11 = uVar7 - 1;
        bVar3 = false;
      }
LAB_1001ec52d:
      iVar5 = FUN_1001e8671(piVar1);
      if ((iVar5 != -0x80) && (iVar5 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      piVar13 = local_60;
    } while (bVar3);
  }
  else {
    iVar5 = (**(code **)(local_60 + 0x40))(&local_80,*(undefined8 *)(local_60 + 0x42));
    if (iVar5 != -0x80) {
      if (iVar5 != 0) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          FUN_1006c3fd3(iVar5,uVar8);
        }
        piVar12 = local_60;
        if (iVar5 != 0) goto LAB_1001ec204;
      }
      goto LAB_1001ec281;
    }
LAB_1001ec204:
    uVar9 = FUN_1001e85e3(piVar12 + 2);
    if (((int)uVar9 != -0x80) && (uVar14 = uVar9 & 0xffffffff, (int)uVar9 != 0)) {
      uVar8 = FUN_1001cc310();
      uVar9 = _os_log_type_enabled(uVar8,0x10);
      if ((char)uVar9 != '\0') {
        uVar9 = FUN_1006c403f(uVar14,uVar8);
      }
    }
    piVar13 = local_60;
    if (local_60[0x3a] == 0) {
      local_64 = (uint)CONCAT71((int7)(uVar9 >> 8),(char)local_60[0x49]);
    }
    else {
      local_64 = 0;
    }
    iVar5 = FUN_1001e8671(piVar12 + 2);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      piVar13 = local_60;
      if (cVar4 != '\0') {
        FUN_1006c40ab(iVar5,uVar8);
        piVar13 = local_60;
      }
    }
  }
  if ((char)local_64 != '\0') {
    if (*(char *)((long)piVar13 + 0x125) == '\x01') {
      FUN_1001e9809(piVar13 + 0x36);
    }
    else {
      FUN_1001e8f15(piVar13 + 0x2e);
    }
  }
LAB_1001ec817:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

