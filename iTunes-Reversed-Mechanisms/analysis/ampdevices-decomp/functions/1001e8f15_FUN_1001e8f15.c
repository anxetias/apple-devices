// name: FUN_1001e8f15
// address: 1001e8f15

undefined8 FUN_1001e8f15(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_58;
  int *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6c636d70)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c17c9(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
LAB_1001e911e:
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return uVar4;
  }
  lVar6 = *(long *)(param_1 + 4);
  uVar7 = param_1[2];
  if ((uVar7 & 1) != 0 && (*(byte *)(param_1 + 1) & 1) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c167b(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8000100;
      local_54 = param_1;
      __os_log_impl(0x100000000,uVar4,0x10,"lock> notifying an already-notified completion %p",
                    &local_58,0xc);
    }
  }
  lVar6 = lVar6 + 0x18;
  do {
    bVar8 = false;
    do {
      do {
        do {
          if ((uVar7 & 2) != 0) {
            iVar3 = FUN_1001ea458(lVar6);
            if ((iVar3 != -0x80) && (iVar3 != 0)) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = (int *)0x1007a0a90;
                local_4c = 0x400;
                local_4a = iVar3;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            bVar8 = iVar3 == 0;
          }
          LOCK();
          uVar1 = param_1[2];
          bVar9 = uVar7 == uVar1;
          if (bVar9) {
            param_1[2] = uVar7 | 1;
            uVar1 = uVar7;
          }
          uVar7 = uVar1;
          UNLOCK();
          if (bVar9) {
            uVar4 = 0;
            if (bVar8) {
              iVar3 = FUN_1001ea29d(lVar6);
              if ((iVar3 != -0x80) && (iVar3 != 0)) {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  FUN_1006c16f1(iVar3,uVar5);
                }
              }
              iVar3 = FUN_1001ea4ac(lVar6);
              if ((iVar3 != -0x80) && (iVar3 != 0)) {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                uVar4 = 0;
                if (cVar2 != '\0') {
                  FUN_1006c175d(iVar3,uVar5);
                }
              }
            }
            goto LAB_1001e911e;
          }
        } while (!bVar8);
        iVar3 = FUN_1001ea4ac(lVar6);
        bVar8 = false;
      } while ((iVar3 == -0x80) || (iVar3 == 0));
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      bVar8 = false;
    } while (cVar2 == '\0');
    local_58 = 0x8220202;
    local_54 = (int *)0x1007a0a90;
    local_4c = 0x400;
    local_4a = iVar3;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  } while( true );
}

