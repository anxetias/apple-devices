// name: FUN_100499456
// address: 100499456

undefined8 * FUN_100499456(long param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "imageInstance != nullptr";
LAB_100499581:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
LAB_1004994f3:
    puVar5 = (undefined8 *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x48);
    if (puVar5 != (undefined8 *)0x0) goto LAB_1004994ff;
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 < 900) || (*(char *)(lVar2 + 0x143c) == '\0')) ||
       (*(char *)(param_1 + 0x52) != '\0')) {
      puVar5 = (undefined8 *)
               (lVar2 + (ulong)(*(uint *)(*(long *)(param_1 + 8) + 0x18) % 0x14) * 0x50 + 0x110);
    }
    else {
      for (puVar5 = (undefined8 *)FUN_100495ce0(lVar2); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        if (*(uint *)(puVar5 + 2) == uVar1) goto LAB_100499554;
      }
      puVar5 = (undefined8 *)FUN_100499673(lVar2,*(undefined4 *)(param_1 + 0x10));
      if (puVar5 == (undefined8 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "formatInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_3a = "stringCache != nullptr";
          goto LAB_100499581;
        }
        goto LAB_1004994f3;
      }
LAB_100499554:
      puVar5 = puVar5 + 3;
    }
    *(undefined8 **)(param_1 + 0x48) = puVar5;
  }
LAB_1004994ff:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

