// name: FUN_1004b17d9
// address: 1004b17d9

void FUN_1004b17d9(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inWorkTaskInfo != __null";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004b1a4e;
  }
  *(undefined8 *)(param_2 + 0x78) = 0;
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inQueue != __null";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = lVar3 + 0x18;
    lVar2 = lVar3 + 200;
    puVar6 = (undefined8 *)(lVar3 + 0x68);
    while (iVar5 = FUN_1001e9de0(lVar1), iVar5 == 0) {
      FUN_1001e9de0(lVar2);
      puVar10 = (undefined8 *)*puVar6;
      cVar4 = FUN_1004aa626(puVar10);
      puVar9 = puVar6;
      if (cVar4 == '\0') {
LAB_1004b18a4:
        do {
          puVar8 = (undefined8 *)*puVar9;
          cVar4 = FUN_1004aa626(puVar8);
          if (cVar4 == '\0') {
            puVar8 = (undefined8 *)0x0;
            break;
          }
          puVar9 = puVar8;
        } while (*(int *)(puVar8 + 0x23) != 1);
      }
      else {
        puVar8 = (undefined8 *)0x0;
        uVar11 = 0;
        do {
          if ((*(int *)(puVar10 + 0x23) == 1) && (uVar11 < *(uint *)((long)puVar10 + 0x11c))) {
            puVar8 = puVar10;
            uVar11 = *(uint *)((long)puVar10 + 0x11c);
          }
          puVar10 = (undefined8 *)*puVar10;
          cVar4 = FUN_1004aa626(puVar10);
        } while (cVar4 != '\0');
        if (puVar8 == (undefined8 *)0x0) goto LAB_1004b18a4;
      }
      cVar4 = FUN_1004aa626(puVar8);
      if ((cVar4 == '\0') || (cVar4 = FUN_1004b1b12(param_2), cVar4 != '\0')) {
        lVar12 = 0;
        goto LAB_1004b1a05;
      }
      FUN_1001e9eb9(lVar2);
      FUN_1004a88cf(puVar8);
      *(undefined8 **)(param_2 + 0x78) = puVar8;
      puVar8[6] = param_2;
      *(undefined4 *)(puVar8 + 0x23) = 2;
      FUN_1001e9eb9(lVar1);
      FUN_1004b1beb(puVar8);
      puVar8[6] = 0;
      FUN_1004aa496(*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      FUN_1001ee7ac();
    }
    if (iVar5 != -0x80) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  goto LAB_1004b1a46;
  while (lVar12 = lVar12 + 1, lVar12 != 6) {
LAB_1004b1a05:
    if (*(long *)(lVar3 + 0x110 + lVar12 * 8) == param_2) {
      FUN_1004b2532();
      *(undefined8 *)(lVar3 + 0x110 + lVar12 * 8) = 0;
      break;
    }
  }
  *(int *)(lVar3 + 0x140) = *(int *)(lVar3 + 0x140) + -1;
  FUN_1001e9eb9(lVar1);
  FUN_1001e9eb9(lVar2);
LAB_1004b1a46:
  FUN_1004b2532(param_2);
LAB_1004b1a4e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

