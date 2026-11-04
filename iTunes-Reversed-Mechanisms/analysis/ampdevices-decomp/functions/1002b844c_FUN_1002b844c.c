// name: FUN_1002b844c
// address: 1002b844c

int FUN_1002b844c(long param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined8 local_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x582d;
      uStack_68 = 0x7a;
      uStack_66 = 1;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x32;
    goto LAB_1002b86f8;
  }
  if (*param_2 != 0) {
    uVar8 = FUN_100170f3b();
    uVar5 = FUN_100170ef7(*param_2);
    uVar6 = FUN_10041545e();
    iVar7 = FUN_100081120(uVar6,uVar8,uVar5,param_1 + 0x10);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x400;
        uStack_6a = (undefined2)iVar7;
        uStack_68 = (undefined2)((uint)iVar7 >> 0x10);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
    }
    goto LAB_1002b86f8;
  }
  puVar1 = (uint *)param_2[1];
  lVar2 = param_2[2];
  iVar7 = 0x2383;
  if (puVar1 == (uint *)0x0 && lVar2 == 0) goto LAB_1002b86f8;
  lVar3 = param_2[3];
  local_78 = 0;
  uStack_74 = 0;
  local_58 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar10 = *puVar1;
    cVar4 = FUN_1002b8190(0x73636869,puVar1 + 2,
                          (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                          uVar10 << 0x18) - 8,&local_78,&local_58);
    if ((cVar4 != '\0') &&
       (cVar4 = FUN_1002b8190(0x72696768,CONCAT44(uStack_74,local_78),local_58),
       cVar4 != '\0' && 7 < local_58)) {
      uVar9 = 0;
      uVar10 = 0;
      do {
        if (*(int *)(CONCAT44(uStack_74,local_78) + uVar9 * 4) == 0x72657661) {
          uVar10 = *(int *)(CONCAT44(uStack_74,local_78) + 4 + uVar9 * 4) << 0x18;
        }
        uVar9 = uVar9 + 2;
      } while (uVar9 < local_58 >> 2);
      iVar7 = 0x2381;
      if (0x7000000 < uVar10) goto LAB_1002b86f8;
    }
  }
  if ((char)lVar3 == '\0') {
    local_78 = (uint)local_78._1_3_ << 8;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_62 = 0;
    local_60 = 0;
    FUN_100415834(&local_78,0);
    if ((char)local_78 == '\0') {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "authFolderContext.IsOpen()";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1002b86eb;
    }
    iVar7 = FUN_10041599c(&local_78,puVar1,lVar2,0,param_1 + 0x10);
  }
  else {
    local_78 = (uint)local_78._1_3_ << 8;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_62 = 0;
    local_60 = 0;
    FUN_100415834(&local_78,0);
    if ((char)local_78 == '\0') {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "authFolderContext.IsOpen()";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1002b86eb:
      iVar7 = CONCAT22(uStack_66,uStack_68);
    }
    else {
      iVar7 = FUN_10041599c(&local_78,puVar1,lVar2,1,param_1 + 0x10);
    }
  }
  FUN_100415916(&local_78);
LAB_1002b86f8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

