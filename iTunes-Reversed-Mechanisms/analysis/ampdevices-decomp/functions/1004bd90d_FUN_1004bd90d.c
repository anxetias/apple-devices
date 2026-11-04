// name: FUN_1004bd90d
// address: 1004bd90d

int FUN_1004bd90d(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = (undefined8 *)FUN_1001c629e(0x7a0,&DAT_100711c6e);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "queue != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
LAB_1004bdbb3:
    FUN_1004b0cc1(puVar3);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 3) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined4 *)(puVar3 + 0x19) = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    *puVar3 = 0x1646c2051;
    puVar3[1] = param_2;
    *(undefined4 *)(puVar3 + 2) = param_3;
    *(undefined1 *)((long)puVar3 + 0x14) = 1;
    *(undefined1 *)((long)puVar3 + 0x15) = param_4;
    *(undefined1 *)((long)puVar3 + 0x16) = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = param_5;
    *(undefined1 *)((long)puVar3 + 0x147) = 0;
    *(undefined4 *)(puVar3 + 0x17) = 3;
    *(undefined4 *)((long)puVar3 + 0xbc) = param_6;
    *(undefined4 *)(puVar3 + 0x18) = 10;
    iVar2 = FUN_1001e9c3e(puVar3 + 3);
    if (iVar2 == -0x80) goto LAB_1004bdbb3;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1004bdb9b:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
LAB_1004bdbae:
      if (iVar2 == 0) {
        iVar2 = 0;
        goto LAB_1004bdbc5;
      }
      goto LAB_1004bdbb3;
    }
    *(undefined1 *)(puVar3 + 0xf) = 1;
    FUN_1001c2b73(puVar3 + 0xd);
    *(undefined1 *)((long)puVar3 + 0x79) = 1;
    iVar2 = FUN_1001c666e(puVar3 + 0x10);
    if (iVar2 == -0x80) goto LAB_1004bdbb3;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_1004bdb9b;
      }
      goto LAB_1004bdbae;
    }
    *(undefined1 *)(puVar3 + 0x15) = 1;
    iVar2 = FUN_1001e9c3e(puVar3 + 0x19);
    if (iVar2 == -0x80) goto LAB_1004bdbb3;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_1004bdb9b;
      }
      goto LAB_1004bdbae;
    }
    *(undefined1 *)(puVar3 + 0x2b) = 1;
    iVar2 = 0;
  }
  *param_1 = puVar3;
LAB_1004bdbc5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

