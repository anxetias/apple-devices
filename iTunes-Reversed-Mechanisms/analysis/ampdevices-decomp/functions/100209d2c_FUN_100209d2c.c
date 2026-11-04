// name: FUN_100209d2c
// address: 100209d2c

/* WARNING: Removing unreachable block (ram,0x000100209f1c) */

bool FUN_100209d2c(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  bool bVar7;
  uint local_98;
  char *local_94;
  undefined2 local_8c;
  int local_8a;
  uint local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10017cc65(param_1,0x64617461,1);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      bVar7 = false;
      iVar3 = FUN_10017d186(0,&local_58,0x1c,0,0);
      if (iVar3 == -0x80) goto LAB_100209f10;
      if (iVar3 == 0) {
        uVar1 = (uint)local_54;
        if (local_58 == 0xbebafeca) {
          iVar3 = FUN_10017d068(0,8);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              if (uVar1 != 0xffffffff) {
                iVar3 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18) + 1;
                do {
                  bVar7 = false;
                  iVar4 = FUN_10017d186(0,&local_78,0x14,0,0);
                  if (iVar4 != 0) {
                    if (iVar4 == -0x80) goto LAB_100209f10;
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      puVar6 = &local_98;
                      local_98 = 0x8220202;
                      local_94 = "Assertion failure";
                      local_8c = 0x400;
                      local_8a = iVar4;
                      goto LAB_100209e6f;
                    }
                    break;
                  }
                  if ((local_78 & 0xffffff00) == 0xc000000) {
                    bVar7 = true;
                    goto LAB_100209f10;
                  }
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                puVar6 = &local_78;
                local_78 = 0x8220202;
                local_74 = "Assertion failure";
                local_6c = 0x400;
                local_6a = iVar3;
                goto LAB_100209e6f;
              }
            }
          }
        }
        else if (local_58 == 0xfeedface) {
          bVar7 = ((uint)local_54 & 0xffffff) == 0xc;
          goto LAB_100209f10;
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          puVar6 = &local_78;
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x400;
          local_6a = iVar3;
          goto LAB_100209e6f;
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        puVar6 = &local_58;
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
LAB_100209e6f:
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar6,0x12);
      }
    }
  }
  bVar7 = false;
LAB_100209f10:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

