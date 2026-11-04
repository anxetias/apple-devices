// name: FUN_10054eaa4
// address: 10054eaa4

int FUN_10054eaa4(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,byte *param_6,uint param_7,undefined8 param_8)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  long local_68;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  if (param_4 == 0) {
    iVar4 = 0;
    goto LAB_10054ee1b;
  }
  iVar4 = FUN_10054d4e4();
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      lVar6 = param_1 + 0x710;
      local_70 = param_1;
      iVar4 = FUN_10015cd83(lVar6,&local_78);
      param_1 = local_70;
      if (iVar4 != -0x80) {
        if (iVar4 != 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          param_1 = local_70;
          goto joined_r0x00010054ec6d;
        }
        iVar4 = FUN_1005d872c(lVar6,param_7 & 1,&local_59,&local_68);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar4;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        param_1 = local_70;
        if (local_68 != 0) {
          iVar4 = FUN_1001c8e4e(local_68,&local_74);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              iVar4 = FUN_1003b07e0(param_4,param_5,param_6,local_68);
              if (iVar4 != -0x80) {
                if (iVar4 != 0) {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  goto joined_r0x00010054ed2c;
                }
                if ((((param_6 != (byte *)0x0) && ((*param_6 & 0x10) != 0)) &&
                    (lVar6 = FUN_10054e55e(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2
                                           ,param_3), lVar6 != 0)) &&
                   (*(long *)(lVar6 + 0x63e8) != 0)) {
                  piVar1 = (int *)(*(long *)(lVar6 + 0x63e8) + 4);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_1005d3cba();
                  }
                  lVar2 = *(long *)(param_6 + 0x2c);
                  if (lVar2 != 0) {
                    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
                  }
                  *(long *)(lVar6 + 0x63e8) = lVar2;
                  *(undefined1 *)(lVar6 + 0x63f0) = 0;
                }
                if (local_59 != '\0') {
LAB_10054ec34:
                  iVar4 = FUN_10054db1c(param_1,local_78,param_7,param_8);
                  goto LAB_10054ee03;
                }
                iVar4 = FUN_1001cbf54(local_68,local_74,1);
                if (iVar4 == -0x80) goto LAB_10054ee03;
                if (iVar4 == 0) goto LAB_10054ec34;
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 == '\0') goto LAB_10054ee03;
                goto LAB_10054edaf;
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
joined_r0x00010054ed2c:
              if (cVar3 != '\0') {
LAB_10054edaf:
                local_4a = iVar4;
                iVar4 = local_4a;
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
LAB_10054ee03:
          if (local_68 != 0) {
            FUN_1001c8d4b(local_68,0);
          }
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
joined_r0x00010054ec6d:
      if (cVar3 != '\0') {
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        local_4a = iVar4;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_10054d72e(param_1);
LAB_10054ee1b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

