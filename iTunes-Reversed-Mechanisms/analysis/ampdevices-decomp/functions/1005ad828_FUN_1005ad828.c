// name: FUN_1005ad828
// address: 1005ad828

void FUN_1005ad828(long param_1,undefined4 param_2,undefined8 param_3,short *param_4,
                  undefined4 param_5,char param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_70;
  char *local_68;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  local_59 = '\x01';
  if (param_4 == (short *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ustrValue != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*param_4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ustrValue[0] != 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = (char *)FUN_1001658f1(DAT_1008c4d90,param_4);
    uVar5 = FUN_1005b00b0(param_1,local_68,param_5,param_2,param_3,1,param_7,&local_70,&local_59);
    if (param_6 == '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar8 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_54 = "";
        if (local_59 == '\0') {
          local_54 = "NOT ";
        }
        local_58 = 0x8220202;
        local_4c = 0x842;
        local_4a = local_68;
        __os_log_impl(0x100000000,uVar8,1,"speech> %{public}sregenerating \"%{public}@\"",&local_58,
                      0x16);
      }
    }
    if (param_6 != '\0' || local_59 != '\0') {
      puVar6 = operator_new(0xa0,(nothrow_t *)PTR_nothrow_10082c970);
      uVar8 = local_70;
      if (puVar6 == (undefined8 *)0x0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "speechTask != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        puVar6[6] = 0;
        *puVar6 = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        *(undefined4 *)(puVar6 + 0xb) = param_2;
        puVar6[0xc] = param_3;
        uVar7 = FUN_1001705fc(local_68);
        puVar6[0xd] = uVar7;
        uVar7 = FUN_1001705fc(uVar5);
        puVar6[0xe] = uVar7;
        uVar8 = FUN_1001705fc(uVar8);
        puVar6[0xf] = uVar8;
        uVar8 = FUN_1001705fc(param_7);
        puVar6[0x10] = uVar8;
        puVar6[0x11] = 0;
        puVar6[0x12] = 0;
        *(undefined4 *)(puVar6 + 0x13) = 0;
        plVar9 = operator_new(0x18);
        plVar1 = (long *)(param_1 + 0x60);
        plVar9[2] = (long)puVar6;
        plVar9[1] = (long)plVar1;
        lVar2 = *plVar1;
        *plVar9 = lVar2;
        *(long **)(lVar2 + 8) = plVar9;
        *plVar1 = (long)plVar9;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
        if (*(char *)(param_1 + 9) == '\0') {
          iVar4 = FUN_1005a48c0(param_1);
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
    }
    FUN_10017060f(local_70);
    FUN_10017060f(uVar5);
    FUN_10017060f(local_68);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

