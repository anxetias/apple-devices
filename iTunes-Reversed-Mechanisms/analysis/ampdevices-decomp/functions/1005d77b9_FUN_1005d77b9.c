// name: FUN_1005d77b9
// address: 1005d77b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005d77b9(long *param_1,char param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined8 *local_80;
  ulong local_70;
  uint local_68;
  uint uStack_64;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inDataHandler != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1005d7dec;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
    *(undefined1 *)(param_3 + 4) = 0;
    plVar8 = (long *)*param_1;
  }
  lVar6 = (**(code **)(*plVar8 + 0x70))();
  bVar9 = 1;
  bVar2 = false;
  bVar3 = false;
  local_80 = (undefined8 *)0x0;
  lVar11 = 0;
LAB_1005d783d:
  local_60 = 8;
  lVar1 = lVar11 + 8;
  iVar5 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,lVar1);
  if (iVar5 != 0) goto LAB_1005d7d7b;
  iVar5 = (**(code **)(*(long *)*param_1 + 0x90))
                    ((long *)*param_1,lVar11,&local_68,local_60,1,&local_60);
  if (iVar5 != 0) {
    if (iVar5 != -0x80) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    goto LAB_1005d7d7b;
  }
  if (local_60 != 8) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "count == sizeof(atom)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x24;
    goto LAB_1005d7d7b;
  }
  bVar12 = local_68 == 0x1000000;
  local_68 = local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 | (local_68 & 0xff00) << 8 |
             local_68 << 0x18;
  uStack_64 = uStack_64 >> 0x18 | (uStack_64 & 0xff0000) >> 8 | (uStack_64 & 0xff00) << 8 |
              uStack_64 << 0x18;
  if (bVar12) {
    local_60 = 8;
    iVar5 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,lVar11 + 0x10);
    if (iVar5 != 0) goto LAB_1005d7d7b;
    iVar5 = (**(code **)(*(long *)*param_1 + 0x90))
                      ((long *)*param_1,lVar1,&local_70,local_60,1,&local_60);
    local_70 = local_70 >> 0x38 | (local_70 & 0xff000000000000) >> 0x28 |
               (local_70 & 0xff0000000000) >> 0x18 | (local_70 & 0xff00000000) >> 8 |
               (local_70 & 0xff000000) << 8 | (local_70 & 0xff0000) << 0x18 |
               (local_70 & 0xff00) << 0x28 | local_70 << 0x38;
    lVar10 = 0x10;
    lVar11 = lVar1 + local_60;
  }
  else {
    local_70 = (ulong)local_68;
    iVar5 = 0;
    lVar10 = 8;
    lVar11 = lVar1;
  }
  if ((int)uStack_64 < 0x6d646174) {
    if (uStack_64 != 0x66726565) {
      if (uStack_64 == 0x66747970) {
        if (local_70 == 0) {
          iVar5 = -0x27;
        }
        else {
          lVar11 = (lVar11 + local_70) - lVar10;
        }
        goto LAB_1005d7b42;
      }
LAB_1005d7a67:
      if (((!(bool)(~bVar9 & 1) && param_2 == '\0') && (local_70 == local_68)) &&
         ((iVar5 = 1000, (local_68 & 0xffff0000) == 0xfff90000 ||
          ((local_68 == 0x41444946 || (local_68 == 0x52494646)))))) goto LAB_1005d7b42;
    }
LAB_1005d7ae7:
    if (local_70 == 0) {
      iVar5 = 0x2351;
    }
    else {
      lVar11 = lVar11 + (local_70 - lVar10);
      iVar5 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,lVar11);
    }
  }
  else {
    if (uStack_64 == 0x6d646174) {
      if ((local_70 != 8) && (!bVar3)) {
        param_3[1] = lVar11 - lVar10;
        param_3[3] = local_70;
        *(undefined1 *)(param_3 + 4) = 1;
        bVar3 = true;
      }
      goto LAB_1005d7ae7;
    }
    if (uStack_64 != 0x6d6f6f76) goto LAB_1005d7a67;
    if (bVar2) goto LAB_1005d7ae7;
    if (local_70 != local_68) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "atomSize64 == atom.size";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x6c;
      goto LAB_1005d7b42;
    }
    *param_3 = lVar11 - lVar10;
    if (local_70 == 0) {
      local_70 = lVar6 - (lVar11 - lVar10);
    }
    if (param_4 == (undefined8 *)0x0) {
LAB_1005d7a51:
      *(int *)(param_3 + 2) = (int)local_70;
      *(char *)((long)param_3 + 0x21) = (char)lVar10;
      bVar2 = true;
LAB_1005d7b48:
      if (bVar3) goto LAB_1005d7d7b;
      goto LAB_1005d7b55;
    }
    local_80 = (undefined8 *)FUN_1001c63e1();
    if (local_80 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "myMoov != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x6c;
      local_80 = (undefined8 *)0x0;
    }
    else {
      auVar13._4_4_ = uStack_64;
      auVar13._0_4_ = local_68;
      auVar13._8_8_ = 0;
      auVar13 = pshufb(auVar13,_DAT_10070e4b0);
      *local_80 = auVar13._0_8_;
      local_60 = local_70 - lVar10;
      iVar5 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,local_60 + lVar11);
      if (iVar5 == 0) {
        iVar5 = (**(code **)(*(long *)*param_1 + 0x90))
                          ((long *)*param_1,lVar11,local_80 + 1,local_60,1,&local_60);
        if (iVar5 == 0) {
          if (local_60 == local_70 - lVar10) {
            lVar11 = lVar11 + local_60;
            iVar5 = 0;
            goto LAB_1005d7a51;
          }
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "count == (size_t)( atomSize64 - atomHeaderLength )";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar5 = -0x24;
          goto LAB_1005d7b42;
        }
        if (iVar5 != -0x80) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        goto LAB_1005d7dc7;
      }
    }
  }
LAB_1005d7b42:
  if (bVar2) goto LAB_1005d7b48;
LAB_1005d7b55:
  bVar9 = 0;
  if (iVar5 != 0) goto LAB_1005d7d7b;
  goto LAB_1005d783d;
LAB_1005d7d7b:
  if (((bool)(bVar2 & iVar5 == 0x2351)) || (iVar5 == 0)) {
    if (bVar2) {
      if (param_4 == (undefined8 *)0x0) {
        FUN_1001c64c1(local_80);
      }
      else {
        *param_4 = local_80;
      }
      iVar5 = 0;
      goto LAB_1005d7dec;
    }
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "0";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0xd0;
  }
  if (local_80 != (undefined8 *)0x0) {
LAB_1005d7dc7:
    FUN_1001c64c1(local_80);
  }
LAB_1005d7dec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

