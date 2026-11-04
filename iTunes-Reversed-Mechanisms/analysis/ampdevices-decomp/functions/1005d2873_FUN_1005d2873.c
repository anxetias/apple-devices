// name: FUN_1005d2873
// address: 1005d2873

/* WARNING: Removing unreachable block (ram,0x0001005d29a6) */

int FUN_1005d2873(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_58;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  if (param_1 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "inFile != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1005d2a43;
  }
  if (*param_1 == 0x41464350) {
    iVar3 = FUN_100180f0c(param_1,0,&local_58,0);
    if (iVar3 == 0) {
      local_48 = 0;
      uStack_44 = 0;
      uVar4 = FUN_100170f3b(local_58);
      uVar5 = FUN_100170ef7(local_58);
      iVar3 = FUN_10023dc0a(uVar4,uVar5,&local_48,&local_49);
      if (iVar3 == 0) {
        FUN_10017060f(local_58);
        local_58 = CONCAT44(uStack_44,local_48);
        goto LAB_1005d295e;
      }
    }
  }
  else {
    iVar3 = FUN_10023d8f1(param_1,&local_58,&local_49);
    if (iVar3 == 0) {
LAB_1005d295e:
      lVar1 = local_58;
      iVar3 = FUN_1005d24c1(local_49,param_2);
      if (iVar3 == 0) {
        if (lVar1 == 0) {
          uRam0000000000000048 = 9000;
        }
        else {
          uRam0000000000000090 = FUN_1001705fc(lVar1);
        }
        *param_3 = 0;
        iVar3 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        *param_3 = 0;
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  FUN_10017060f(local_58);
LAB_1005d2a43:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

