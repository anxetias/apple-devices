// name: FUN_1002cebf6
// address: 1002cebf6

/* WARNING: Type propagation algorithm not settling */

int FUN_1002cebf6(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_5d;
  int local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sampleDesc != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1002ceed1;
  }
  *param_2 = 0;
  iVar2 = _AudioCodecGetPropertyInfo(*(undefined8 *)(param_1 + 0x300),0x6b756b69,local_5c,&local_5d)
  ;
  if (iVar2 == 0) {
    lVar3 = FUN_1001c63e1(local_5c[0]);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "magicCookie != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
LAB_1002cee3c:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
      }
      goto LAB_1002ceed1;
    }
    iVar2 = _AudioCodecGetProperty(*(undefined8 *)(param_1 + 0x300),0x6b756b69,local_5c,lVar3);
    if (iVar2 == -0x80) {
LAB_1002ced87:
      FUN_1001c64c1(lVar3);
      goto LAB_1002ced8f;
    }
    iVar6 = local_5c[0];
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
      }
      if (iVar2 != 0) goto LAB_1002ced87;
      lVar3 = 0;
      iVar6 = 0;
    }
  }
  else {
    if (iVar2 == -0x80) {
      iVar2 = -0x80;
      goto LAB_1002ceed1;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
    }
LAB_1002ced8f:
    if (iVar2 == -0x80) goto LAB_1002ceed1;
    if (iVar2 != 0) goto LAB_1002cee3c;
    lVar3 = 0;
    iVar6 = 0;
  }
  uVar7 = iVar6 + 0x40;
  puVar5 = (uint *)FUN_1001c63e1((long)(int)uVar7);
  if (puVar5 == (uint *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "desc != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    *puVar5 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    puVar5[1] = 0x64737473;
    puVar5[2] = 0;
    puVar5[3] = 0x1000000;
    uVar7 = iVar6 + 0x30;
    puVar5[4] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    puVar5[5] = 0x6134706d;
    puVar5[6] = 0;
    *(undefined2 *)(puVar5 + 7) = 0;
    *(undefined2 *)((long)puVar5 + 0x1e) = 0x100;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0x10000200;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0x44ac;
    uVar7 = iVar6 + 0xc;
    puVar5[0xd] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  uVar7 * 0x1000000;
    puVar5[0xe] = 0x73647365;
    puVar5[0xf] = 0;
    FUN_1001c631b(lVar3,puVar5 + 0x10,iVar6);
    *param_2 = (long)puVar5;
    iVar2 = 0;
  }
  if (lVar3 != 0) {
    FUN_1001c64c1(lVar3);
  }
LAB_1002ceed1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

