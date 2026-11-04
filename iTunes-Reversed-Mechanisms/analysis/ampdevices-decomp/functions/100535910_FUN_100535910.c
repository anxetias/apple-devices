// name: FUN_100535910
// address: 100535910

int FUN_100535910(long param_1,undefined1 param_2,undefined4 *param_3,long param_4,long param_5,
                 long param_6,undefined4 *param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long local_ad8;
  undefined4 *local_ad0;
  undefined4 local_ac0;
  undefined4 *local_ab8;
  undefined1 *local_aa8;
  long local_aa0;
  undefined4 local_a98;
  char *local_a94;
  undefined2 local_a8c;
  int local_a8a;
  undefined4 local_a78;
  char *local_a74;
  undefined2 local_a6c;
  int local_a6a;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_44a = "trackData != nullptr";
LAB_100535c96:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    if (param_4 != 0) {
      local_aa0 = param_5;
      if (DAT_1008c2121 == '\0') {
        DAT_1008c2121 = '\x01';
        cVar2 = FUN_1001cd44e("limit-path-length",0,0);
        if (cVar2 != '\0') {
          DAT_1008c2120 = '\x01';
        }
      }
      if (param_3 == (undefined4 *)0x0) {
        param_3 = &local_458;
        iVar3 = FUN_10032046f(param_1,param_2,1,param_3,0);
        if (iVar3 == -0x80) goto LAB_100535ac2;
        if (iVar3 == 0) goto LAB_10053598e;
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_100535ac2;
        puVar6 = &local_a78;
        local_a78 = 0x8220202;
        local_a74 = "Assertion failure";
        local_a6c = 0x400;
        local_a6a = iVar3;
LAB_100535c57:
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar6,0x12);
      }
      else {
LAB_10053598e:
        if (param_6 == 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          if (param_7 == (undefined4 *)0x0) {
            iVar3 = FUN_10017d489(param_4,local_658);
            if (iVar3 == -0x80) goto LAB_100535ac2;
            if (iVar3 != 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 == '\0') goto LAB_100535ac2;
              puVar6 = &local_a98;
              local_a98 = 0x8220202;
              local_a94 = "Assertion failure";
              local_a8c = 0x400;
              local_a8a = iVar3;
              goto LAB_100535c57;
            }
            param_7 = &local_a78;
            FUN_1001e222d(local_658,param_7);
          }
          FUN_1001c62d9(&local_ad8,0x38);
          puVar7 = local_658;
          local_ac0 = 0x28;
          if (DAT_1008c2120 == '\0') {
            local_ac0 = 0;
          }
          local_ad8 = param_6;
          local_ad0 = param_7;
          local_ab8 = param_3;
          local_aa8 = puVar7;
          iVar3 = FUN_10017e4d0(&local_ad8);
          if (iVar3 == -0x80) goto LAB_100535ac2;
          if (iVar3 != 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 == '\0') goto LAB_100535ac2;
            puVar6 = &local_a98;
            local_a98 = 0x8220202;
            local_a94 = "Assertion failure";
            local_a8c = 0x400;
            local_a8a = iVar3;
            goto LAB_100535c57;
          }
        }
        iVar4 = FUN_10017d5ba(param_4,&local_a78);
        lVar1 = local_aa0;
        iVar3 = FUN_10017fc85(param_4,local_aa0,puVar7,1,param_8);
        if (((lVar1 != 0) && (iVar3 == 0)) && (iVar4 == 0)) {
          FUN_100534fe1(param_3,&local_a78);
          iVar3 = 0;
        }
      }
      goto LAB_100535ac2;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_44a = "objectSpec != nullptr";
      goto LAB_100535c96;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_100535ac2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

