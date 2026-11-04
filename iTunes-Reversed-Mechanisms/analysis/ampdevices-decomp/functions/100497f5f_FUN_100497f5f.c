// name: FUN_100497f5f
// address: 100497f5f

void FUN_100497f5f(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (undefined8 *)0x0) && (param_1[1] != 0)) {
    cVar3 = FUN_100495380(*(undefined8 *)(param_1[1] + 0x10));
    if (cVar3 != '\0') {
      lVar1 = param_1[1];
      if (*(int *)((long)param_1 + 0x44) != 0) {
        uVar4 = FUN_100499456(param_1);
        FUN_1001dcff5(uVar4);
      }
      if (*(int *)(param_1 + 0x8f) != 0) {
        uVar4 = FUN_100499456(param_1);
        FUN_1001dcff5(uVar4);
      }
      if (*(short *)(lVar1 + 0x62) == 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "imageInfo->numInstances != 0";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0);
      }
      puVar5 = (undefined8 *)(lVar1 + 0x68);
      puVar2 = (undefined8 *)0x0;
      do {
        puVar8 = puVar2;
        puVar5 = (undefined8 *)*puVar5;
        if (puVar5 == (undefined8 *)0x0) goto LAB_10049803e;
        puVar2 = puVar5;
      } while (puVar5 != param_1);
      puVar5 = (undefined8 *)(lVar1 + 0x68);
      if (puVar8 != (undefined8 *)0x0) {
        puVar5 = puVar8;
      }
      *puVar5 = *param_1;
      *param_1 = 0;
LAB_10049803e:
      *(short *)(lVar1 + 0x62) = *(short *)(lVar1 + 0x62) + -1;
      lVar6 = *(long *)(lVar1 + 0x10);
      *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + -1;
      if (999 < *(uint *)(param_1 + 2)) {
        iVar7 = *(int *)(lVar1 + 0x9c);
        if (iVar7 == 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "imageInfo->numFullImageThumbInstances != 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar7 = *(int *)(lVar1 + 0x9c);
          lVar6 = *(long *)(lVar1 + 0x10);
        }
        *(int *)(lVar1 + 0x9c) = iVar7 + -1;
      }
      FUN_1001c5aec(*(undefined8 *)(lVar6 + 0x50),param_1);
      *(undefined1 *)(*(long *)(lVar1 + 0x10) + 4) = 1;
      goto LAB_1004980d0;
    }
  }
  uVar4 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar4,0x10);
  if (cVar3 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "ITImageInstanceIsValid(imageInstance)";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1004980d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

