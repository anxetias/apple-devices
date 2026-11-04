// name: FUN_10053fc3c
// address: 10053fc3c

undefined8 FUN_10053fc3c(long *param_1,uint param_2,uint *param_3,long param_4)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = *param_3;
  uVar8 = (ulong)uVar7;
  if (param_2 <= uVar7) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "numDetails < inMaxDetails";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10053fdc6;
  }
  sVar3 = (**(code **)(*param_1 + 0x28))();
  switch(sVar3) {
  case 0x1f5:
    local_5c = 0x138a000b;
    break;
  case 0x1f6:
    local_5c = 0x138a000c;
    break;
  case 0x1f7:
    local_5c = 0x138a0010;
    break;
  case 0x1f8:
    local_5c = 0x138a000f;
    break;
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
    goto switchD_10053fc97_caseD_1f9;
  case 0x1fc:
    local_5c = 0x138a000d;
    break;
  case 0x1fd:
    local_5c = 0x138a000e;
    break;
  default:
    if (sVar3 == 0x259) {
      local_5c = 0x13890004;
      break;
    }
    goto switchD_10053fc97_caseD_1f9;
  }
  puVar1 = (undefined4 *)(param_4 + uVar8 * 0x404);
  FUN_1001c34b7(0x138a0001,puVar1 + 1);
  FUN_1001c34b7(local_5c,param_4 + uVar8 * 0x404 + 0x204);
  *puVar1 = 0x70726f66;
  uVar7 = uVar7 + 1;
  uVar8 = (ulong)uVar7;
  if (uVar7 < param_2) {
switchD_10053fc97_caseD_1f9:
    uVar7 = (uint)uVar8;
    iVar4 = (**(code **)(*param_1 + 0x1e8))();
    if (0 < iVar4) {
      puVar1 = (undefined4 *)(param_4 + uVar8 * 0x404);
      FUN_1001c34b7(0x138a0002,puVar1 + 1);
      iVar6 = 0x138a0012;
      if (iVar4 != 1) {
        iVar6 = (iVar4 != 2) + 0x138a0013;
      }
      FUN_1001c34b7(iVar6,param_4 + uVar8 * 0x404 + 0x204);
      *puVar1 = 0x6368616e;
      uVar7 = uVar7 + 1;
    }
  }
LAB_10053fdc6:
  *param_3 = uVar7;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

