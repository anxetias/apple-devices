// name: FUN_100371e91
// address: 100371e91

undefined8 FUN_100371e91(undefined8 param_1,undefined8 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_478;
  int local_474;
  undefined2 uStack_470;
  undefined2 uStack_46e;
  undefined2 uStack_46c;
  int iStack_46a;
  undefined2 uStack_466;
  undefined2 uStack_464;
  undefined6 uStack_462;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036d859();
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffdd;
    goto LAB_1003720ab;
  }
  iVar2 = FUN_1003779dc(param_1,param_2,&local_458);
  if (iVar2 == -0x80) {
LAB_100371fd6:
    uVar6 = 0;
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    if (iVar2 != 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x8220202;
        local_474 = 0x7a0a90;
        uStack_470 = 1;
        uStack_46e = 0;
        uStack_46c = 0x400;
        iStack_46a = iVar2;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
      goto LAB_100371fd6;
    }
    lVar4 = FUN_10036d2f1(lVar3,0);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x8220202;
        local_474 = 0x7a0a90;
        uStack_470 = 1;
        uStack_46e = 0;
        uStack_46c = 0x822;
        iStack_46a = 0x7c5917;
        uStack_466 = 1;
        uStack_464 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x17ffbfe9;
      goto LAB_100371fd6;
    }
    lVar5 = FUN_10036e72b(&local_458);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x8220202;
        local_474 = 0x7a0a90;
        uStack_470 = 1;
        uStack_46e = 0;
        uStack_46c = 0x822;
        iStack_46a = 0x7a0ee9;
        uStack_466 = 1;
        uStack_464 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
      }
      uVar6 = 0;
      FUN_1001782e9(0,0);
      iVar2 = -0x17ffbffd;
      lVar5 = 0;
    }
    else {
      uVar6 = _AFCOperationCreateMakeDirectory(DAT_1008c4d90,lVar5,0);
      iVar2 = FUN_10036ed41(lVar4,uVar6);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = 0;
          if (param_3 != (void *)0x0) {
            _memcpy(param_3,&local_458,0x420);
          }
          goto LAB_100372083;
        }
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_478 = 0x8220202;
          local_474 = 0x7a0a90;
          uStack_470 = 1;
          uStack_46e = 0;
          uStack_46c = 0x400;
          iStack_46a = iVar2;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x4000302;
        uStack_470 = 0x842;
        uStack_46e = (undefined2)lVar5;
        uStack_46c = (undefined2)((ulong)lVar5 >> 0x10);
        iStack_46a = (int)((ulong)lVar5 >> 0x20);
        uStack_466 = 0x800;
        uStack_464 = (undefined2)lVar4;
        uStack_462 = (undefined6)((ulong)lVar4 >> 0x10);
        local_474 = iVar2;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AFC MakeDirectory failed (0x%08X) for \"%{public}@\" with connection %p"
                            ,&local_478,0x1c);
      }
    }
  }
LAB_100372083:
  FUN_10017060f(uVar6);
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar4);
  FUN_10036d4d2(lVar3);
  uVar6 = FUN_10036db97(iVar2);
LAB_1003720ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

