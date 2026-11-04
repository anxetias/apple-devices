// name: FUN_10042b895
// address: 10042b895

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_10042b895(long param_1,undefined4 param_2,undefined8 param_3,uint param_4,undefined8 param_5,
             uint param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 local_558;
  char *local_554;
  undefined2 local_54c;
  undefined1 local_358 [256];
  undefined4 local_258;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  long local_38;
  
  uVar7 = (ulong)param_6;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(byte *)(param_1 + 0xb) < 2) || (cVar2 = FUN_1001e5474(param_5,uVar7), cVar2 != '\0')) {
    lVar9 = 0xff;
    puVar4 = &local_258;
    if (param_6 < 0x100) {
LAB_10042b922:
      FUN_1001e7247(param_5,uVar7,puVar4,lVar9,&local_558);
      uVar3 = FUN_10042b0c7(param_1,param_2,param_3,param_4,puVar4,local_558);
      if (puVar4 == &local_258) goto LAB_10042bbea;
LAB_10042b971:
      FUN_1001c64c1(puVar4);
      goto LAB_10042bbea;
    }
    lVar9 = uVar7 * 2;
    puVar4 = (undefined4 *)FUN_1001c63e1(lVar9);
    if (puVar4 != (undefined4 *)0x0) goto LAB_10042b922;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      puVar4 = &local_558;
      local_558 = 0x8220202;
      local_554 = "Assertion failure";
      local_54c = 0x822;
      pcVar6 = "latin1Ptr != nullptr";
      goto LAB_10042bbb7;
    }
  }
  else {
    if (param_4 == 0) {
      local_258._0_2_ = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xff;
      if (param_4 < 0xff) {
        uVar1 = param_4;
      }
      local_358[0] = (undefined1)uVar1;
      FUN_1001c631b(param_3);
      FUN_1001e4f4b(local_358,&local_258);
    }
    puVar4 = &local_558;
    if (param_6 < 0x100) {
      uVar7 = (ulong)(param_6 * 2);
LAB_10042ba57:
      FUN_1001c631b(param_5,puVar4);
      uVar8 = param_6 + uVar1 + 4;
      lVar9 = FUN_1001c6429((ulong)uVar8 * 2 + 0x1c);
      if (lVar9 != 0) {
        *(uint *)(lVar9 + 0xc) = uVar8 * 2 + 4;
        *(undefined4 *)(lVar9 + 0x12) = 0x676e6501;
        *(undefined2 *)(lVar9 + 0x16) = 0xfeff;
        puVar10 = (undefined4 *)(lVar9 + 0x18);
        if (uVar1 != 0) {
          FUN_1001c631b((undefined2 *)((long)&local_258 + 2),puVar10,(ulong)(uVar1 * 2));
          puVar10 = (undefined4 *)((long)puVar10 + (ulong)(uVar1 * 2));
        }
        *puVar10 = 0xfeff0000;
        FUN_1001c631b(puVar4,puVar10 + 1,uVar7);
        *(undefined2 *)((long)puVar10 + uVar7 + 4) = 0;
        *(undefined4 *)(lVar9 + 8) = param_2;
        *(int *)(param_1 + 0xe) =
             *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar9 + 0xc);
        FUN_1001c2470(param_1 + 0x28,lVar9);
        uVar3 = 0;
        if (puVar4 == &local_558) goto LAB_10042bbea;
        goto LAB_10042b971;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_10042bbdc;
      puVar4 = &local_58;
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      pcVar6 = "tag != nullptr";
    }
    else {
      uVar7 = uVar7 * 2;
      puVar4 = (undefined4 *)FUN_1001c63e1(uVar7);
      if (puVar4 != (undefined4 *)0x0) goto LAB_10042ba57;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_10042bbdc;
      puVar4 = &local_58;
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      pcVar6 = "tagText != nullptr";
    }
LAB_10042bbb7:
    *(char **)((long)puVar4 + 0xe) = pcVar6;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",puVar4,0x16);
  }
LAB_10042bbdc:
  FUN_1001782e9(0,0);
  uVar3 = 0xffffff94;
LAB_10042bbea:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

