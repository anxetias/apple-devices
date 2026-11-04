// name: FUN_1001c58d5
// address: 1001c58d5

undefined8 * FUN_1001c58d5(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x46697841)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a8ab6(uVar4);
    }
    puVar6 = (undefined8 *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    puVar5 = *(undefined4 **)(param_1 + 4);
    if (puVar5 != (undefined4 *)0x0) {
      do {
        uVar3 = puVar5[7];
        if (uVar3 != 0) goto LAB_1001c5a5e;
        if (*(long *)(puVar5 + 0xc) != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "allocationList->nextFreeAllocation == nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        puVar5 = *(undefined4 **)(puVar5 + 4);
      } while (puVar5 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)FUN_1001c63e1((ulong)(uint)(param_1[2] * param_1[1]) + 0x38);
    if (puVar5 == (undefined4 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar5 = 0x4669784c;
      *(int **)(puVar5 + 2) = param_1;
      uVar3 = param_1[2];
      puVar5[6] = uVar3;
      puVar5[7] = uVar3;
      puVar6 = (undefined8 *)(puVar5 + 0xe);
      *(undefined8 **)(puVar5 + 8) = puVar6;
      uVar1 = param_1[1];
      puVar8 = (undefined8 *)((long)puVar5 + (ulong)(uVar1 * (param_1[2] + -1)) + 0x38);
      *(undefined8 **)(puVar5 + 10) = puVar8;
      if (1 < uVar3) {
        iVar7 = uVar3 - 1;
        do {
          puVar8 = (undefined8 *)((long)puVar6 + (ulong)uVar1);
          *puVar6 = puVar8;
          iVar7 = iVar7 + -1;
          puVar6 = puVar8;
        } while (iVar7 != 0);
        puVar6 = *(undefined8 **)(puVar5 + 8);
        puVar8 = *(undefined8 **)(puVar5 + 10);
      }
      *(undefined8 **)(puVar5 + 0xc) = puVar6;
      *puVar8 = 0;
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_1 + 4);
      *(undefined4 **)(param_1 + 4) = puVar5;
LAB_1001c5a5e:
      puVar6 = *(undefined8 **)(puVar5 + 0xc);
      if (puVar6 == (undefined8 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006a8a40(uVar4);
        }
        FUN_1001782e9(0,0);
        uVar3 = puVar5[7];
        puVar6 = *(undefined8 **)(puVar5 + 0xc);
      }
      puVar5[7] = uVar3 - 1;
      *(undefined8 *)(puVar5 + 0xc) = *puVar6;
      FUN_1001c62d9(puVar6,param_1[1]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar6;
}

