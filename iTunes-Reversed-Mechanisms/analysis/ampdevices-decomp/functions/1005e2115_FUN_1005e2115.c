// name: FUN_1005e2115
// address: 1005e2115

undefined8 FUN_1005e2115(uint *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != 0) {
    lVar8 = 0;
    do {
      lVar3 = *(long *)(param_3 + lVar8 * 8);
      if (((lVar3 != 0) &&
          (uVar1 = *(uint *)(lVar3 + 4),
          (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
          param_1[1])) &&
         (iVar5 = _memcmp((void *)(param_2 + (ulong)param_4),(void *)(lVar3 + (ulong)param_4 + 8),
                          (ulong)param_5), iVar5 == 0)) {
        FUN_1001c64c1(*(undefined8 *)(param_3 + lVar8 * 8));
        *(undefined8 *)(param_3 + lVar8 * 8) = 0;
        break;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x10);
  }
  lVar8 = 0;
  do {
    if (*(long *)(param_3 + lVar8 * 8) == 0) {
      puVar6 = (uint *)FUN_1001c63e1(*param_1);
      *(uint **)(param_3 + lVar8 * 8) = puVar6;
      if (puVar6 != (uint *)0x0) {
        uVar1 = *param_1;
        *puVar6 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uVar2 = param_1[1];
        puVar6[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        FUN_1001c631b(param_2,puVar6 + 2,uVar1 - 8);
        uVar7 = 0;
        goto LAB_1005e2213;
      }
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "atomList[i] != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      break;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x10);
  uVar7 = 0xffffff94;
LAB_1005e2213:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

