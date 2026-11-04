// name: FUN_10053d752
// address: 10053d752

int FUN_10053d752(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long local_70;
  long local_68;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_70,0x20);
  iVar3 = (**(code **)(*param_1 + 0xa8))(param_1,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      lVar1 = param_1[0x94];
      iVar6 = 0;
      iVar3 = 0;
      if (((lVar1 != 0) && (local_70 = *(long *)(lVar1 + 0x20), local_70 != 0)) &&
         (iVar3 = FUN_10015d28d(lVar1,0x6d766864,&local_50), iVar3 != -0x80)) {
        if (iVar3 == 0) {
          iVar3 = iVar6;
          if ((local_50 != 0) && (local_68 = *(long *)(local_50 + 0x20), local_68 != 0)) {
            uVar7 = *(uint *)(local_68 + 0x14);
            if (uVar7 != 0xe8030000) {
              param_2 = ((int)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18) * param_2) / 1000;
            }
            uVar7 = (uint)param_2;
            puVar4 = (uint *)(local_68 + 0x58);
            if (*(char *)(local_68 + 8) == '\x01') {
              puVar4 = (uint *)(local_68 + 100);
            }
            *puVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18;
            (**(code **)(*param_1 + 0x88))(param_1);
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = iVar3;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar3;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

