// name: FUN_1001be870
// address: 1001be870

int FUN_1001be870(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_1001ee056();
  if (cVar3 == '\0') {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006a2f06(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
  }
  else if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006a305e(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 != 0) {
      uVar7 = 0;
      do {
        uVar1 = *(undefined4 *)(param_2 + uVar7 * 8);
        uVar2 = *(undefined4 *)(param_2 + 4 + uVar7 * 8);
        FUN_10028593a(local_68,param_4);
        iVar4 = FUN_1001be5d0(param_1,uVar1,uVar2,local_68,param_5,param_6);
        if (local_48 == local_68) {
          lVar5 = 0x20;
LAB_1001be929:
          (**(code **)(*local_48 + lVar5))();
        }
        else {
          lVar5 = 0x28;
          if (local_48 != (long *)0x0) goto LAB_1001be929;
        }
        if (iVar4 != 0) {
          if (iVar4 != -0x80) {
            uVar6 = FUN_1001cc310();
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              FUN_1006a2f7c(iVar4,uVar6);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          }
          FUN_1001beaac(param_1,param_2,param_3);
          goto LAB_1001bea56;
        }
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
      iVar4 = 0;
      goto LAB_1001bea56;
    }
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006a2fe8(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x32;
LAB_1001bea56:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

